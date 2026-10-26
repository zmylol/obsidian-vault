---
type: "article"
source: "https://huggingface.co/blog/transformers-llama-cpp-quants"
source_aliases: []
original_title: "Transformers now runs llama.cpp quants"
authors: ["Marc Sun", "Arthur Zucker", "Lysandre"]
authors_source: "https://huggingface.co/blog/transformers-llama-cpp-quants"
published: "2026-09-22"
published_source: "https://huggingface.co/blog/transformers-llama-cpp-quants"
published_evidence: "原文页首 Published September 22, 2026"
collected: "2026-09-24"
updated: "2026-09-24"
last_checked: "2026-09-24"
category: "推理与部署/本地推理"
source_section: "Hugging Face 团队技术文章；作者本地推理基准"
tags: ["GGUF", "Metal", "Transformers"]
note_depth: "中文摘要与重点文字解读"
detail_status: "completed"
---

# 在 Transformers 中直接运行 GGUF 量化权重

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%9C%AC%E5%9C%B0%E6%8E%A8%E7%90%86)

> [原文](https://huggingface.co/blog/transformers-llama-cpp-quants) · Transformers now runs llama.cpp quants · 2026-09-22 · Marc Sun、Arthur Zucker、Lysandre。中文摘要与重点文字解读，性能为作者报告。

## 摘要

Hugging Face 为 Transformers 接入 ggml 的 Metal 算子，并减少生成循环中的同步等待，使 Python/PyTorch 能直接运行压缩存储的 GGUF 权重。作者在32GB内存的 M2 Max 上测试三个 Qwen 检查点，报告速度接近 llama.cpp；但 Transformers 含预填充、取预热后三次运行的最好值，llama-bench只测解码并取三次平均，不能视为同条件胜负。发布时需 Transformers 主分支及兼容的 PyTorch、kernels，压缩权重路径仅支持 Apple Silicon 的 MPS 与 Qwen3.5架构（含兼容Qwen3.8），优化面向单个交互会话，带填充的批处理尚不能享受全部优化。缺少兼容量化算子会解量化并增加内存占用。

## 重点文字解读

### 接入保留标准接口，回退路径要分清

通过`gguf_file`选择文件后继续使用`generate`。注意力算子获取失败可回退SDPA；缺少兼容量化算子则会展开权重，两者的内存后果不同。微调示例也先解量化，不能当作直接训练压缩权重。

### 测速接近，不等于严格同条件比较

测量环境为插电M2 Max、macOS 26.6、PyTorch 2.12.1与kernels 0.17.0；两侧生成128个token，Transformers使用12-token提示。llama.cpp为b10200、ggml 0.18.0。统计差异已写入摘要。

图示：GGUF对照图1

在M2 Max／32GB上，Qwen3.5-4B Q4_K_M为70.4对71.8±0.4 tok/s；两列的预填充和统计口径不同，不能直接认定胜负。图内文件大小不等于运行峰值内存。 [原图](https://huggingface.co/datasets/huggingface/documentation-images/resolve/main/blog/transformers-llama-cpp-quants/benchmark-comparison.svg) · [文章出处](https://huggingface.co/blog/transformers-llama-cpp-quants)

### 层算子直接读取量化权重

压缩矩阵运算、归一化、注意力等算子减少每步GPU工作；它们嵌入PyTorch模型，不是把整个模型交给另一套运行时。

图示：GGUF对照图2

两组始终保留量化算子和压缩权重，只比较其余层算子的贡献。三个检查点的报告比值为1.59、1.51、2.09倍，不能解释为量化本身的收益。 [原图](https://huggingface.co/datasets/huggingface/documentation-images/resolve/main/blog/transformers-llama-cpp-quants/layer-kernel-benchmark.svg) · [文章出处](https://huggingface.co/blog/transformers-llama-cpp-quants)

### 生成循环减少同步等待

无填充输入可提前去掉多余掩码，受支持路径延后消费停止判断；两者让CPU调度与GPU执行重叠。因果约束仍保留，多算一步的结果会去掉。

图示：GGUF对照图3

两组均启用全部层算子，比较生成循环修改前后；三个检查点的报告比值为1.42、1.16、1.79倍。该对照与上一张图基线不同，不能直接相乘。 [原图](https://huggingface.co/datasets/huggingface/documentation-images/resolve/main/blog/transformers-llama-cpp-quants/generation-loop-benchmark.svg) · [文章出处](https://huggingface.co/blog/transformers-llama-cpp-quants)

## 适用条件与局限

批处理、其他设备和架构不能照搬本次结果。正文三张SVG与三张表已核查；37秒[演示视频](https://huggingface.co/datasets/huggingface/documentation-images/resolve/main/blog/transformers-llama-cpp-quants/transformers-gguf.mp4)仅抽查加载与算子挂接等画面，非逐秒审看；社交媒体引用的体验不作为性能或质量证据。未运行示例、下载模型、复现实验或精读外链论文。

## 怎样理解与应用（AI 解读）

可先核对实际是否走压缩权重路径，再分别测提示处理、解码、峰值内存和任务质量。与其他引擎比较时统一预热、提示长度和统计方式，避免把不同测试口径的差异当成优化收益。本建议未执行。

## 变更记录

- 2026-09-24：首次收录，三张原始SVG核查并保存，摘要两项复核通过。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
