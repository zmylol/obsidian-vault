---
type: "article"
source: "https://huggingface.co/blog/tokenizers-v1"
source_aliases: []
original_title: "tokenizers v1: encode, decode and scaling, measured"
authors: ["Arthur Zucker", "Simon Brandeis", "Luc Georges", "Lysandre"]
authors_source: "https://huggingface.co/blog/tokenizers-v1"
published: "2026-09-21"
published_source: "https://huggingface.co/blog/tokenizers-v1"
published_evidence: "原文页首 Published September 21, 2026"
collected: "2026-09-23"
updated: "2026-09-23"
last_checked: "2026-09-23"
category: "推理与部署/本地推理"
source_section: "Hugging Face 团队技术文章；作者 Rust 候选版基准"
tags: ["tokenizers", "CPU", "推理"]
note_depth: "中文摘要与重点图文解读"
detail_status: "completed"
---

# tokenizers v1 如何加速文本编码

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%9C%AC%E5%9C%B0%E6%8E%A8%E7%90%86)

> [原文](https://huggingface.co/blog/tokenizers-v1) · tokenizers v1: encode, decode and scaling, measured · 2026-09-21 · Arthur Zucker、Simon Brandeis、Luc Georges、Lysandre。中文摘要与重点图文解读，Rust候选版作者基准。

## 摘要

Hugging Face 的 tokenizers v1 候选版通过位流切分、词缓存和可复用缓冲区，减少文本转为 token 编号时的重复工作，同时保持与0.23版相同的 token 编号。作者在 Apple M4 Max 上测试10个模型家族，单线程编码速度为0.23版的约3–30倍；主结果使用不同文档流，而非反复编码同一篇已缓存文档。这些是 Rust 库测量，不含 Python 调用开销，也不能直接换算成模型推理加速；未匹配切分模式仍走正则路径，低重复输入未必受益于缓存。

## 重点图文解读

### 结果先限定为编码吞吐量

![逐模型编码吞吐量对比](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/tokenizers-v1-by-model.png)

原文交互图“by model”在比较基线tokenizers 0.23下的原貌快照（2026-09-23），不是重新绘图。横向条形为吞吐量比值：每个家族22个语料，T5为3.33倍、GPT-2为29.83倍；不代表这些模型本身的推理速度。 [交互原图](https://lysandre-tokenizers-v1-results.static.hf.space) · [文章出处](https://huggingface.co/blog/tokenizers-v1)

### 减少切分和合并的重复开销

已识别的切分模式可使用 SIMD 位流运算；词缓存直接复用预分词的编号，合并过程复用临时缓冲区。未知模式不会自动得到位流切分收益。[切分演示](https://lysandre-tokenizers-v1-split.static.hf.space)是示意动画，没有单独阶段的实测速率。

### 缓存收益取决于输入重复程度

[缓存交互图](https://lysandre-tokenizers-v1-cache.static.hf.space)比较同一路径开启和关闭缓存，英语网页语料比值0.93，显示缓存并非总能加速。该语料条形是M4 Max上8个模型家族的中位数，不等同于新旧版本整体比较。

### 保持比较条件与发布阶段清楚

作者排除词表加载时间、核对输出编号哈希，只比较各引擎共同完成并验证的测试项。Rust候选版已提供，Python绑定简化和GPU探索属于后续工作；示例安装不等于稳定1.0已发布。

## 适用条件与局限

本篇关注CPU文本编码运行时，归入本地推理。原文两张表和5个嵌入媒体已检查：结果面板9个页签、页首、流水线、切分与缓存；动画仅查看示意状态，未穷举每个模型、配置或帧。选存一张关键图表的浏览器原貌快照，其他交互保留源链接；正文未发现视频。未运行基准、安装软件、下载模型或精读关联论文，性能数字为作者报告。扩展性面板有原生线程与独立实例两种口径，不混用。

## 怎样理解与应用（AI 解读）

接入前可先测真实请求中编码时间占比，再用多篇不同文档测试。即使编码快很多，端到端收益仍受其他阶段耗时限制；还应单独核对编号一致性和Python调用成本。这是建议，未实际执行。

## 变更记录

- 2026-09-23：补完候选的关键交互媒体核查，首次收录；摘要经两项独立复核通过。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
