---
type: "article"
source: "https://research.google/blog/how-diffusion-controller-unifies-and-simplifies-ai-image-generation/"
source_aliases: ["https://research.google/blog/how-diffusion-controller-unifies-and-simplifies-ai-image-generation"]
original_title: "How Diffusion Controller unifies and simplifies AI image generation"
authors: ["Chih-wei Hsu", "Moonkyung Ryu"]
authors_source: "原文署名"
published: "2026-09-29"
published_source: "原文页首与 JSON-LD"
published_evidence: "https://research.google/blog/how-diffusion-controller-unifies-and-simplifies-ai-image-generation/；正文标题、作者、发布日期"
collected: "2026-10-13T13:27:40+08:00"
updated: "2026-10-13T13:27:40+08:00"
last_checked: "2026-10-13T13:27:40+08:00"
category: "研究与模型/生成模型控制"
source_section: "Google Research · Machine Intelligence"
tags: ["Google Research", "扩散模型", "PPO", "偏好对齐"]
status: "saved"
detail_status: "completed"
note_depth: "中文摘要与重点图文解读"
---

# Diffusion Controller：用连续控制调整图像生成

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E7%94%9F%E6%88%90%E6%A8%A1%E5%9E%8B%E6%8E%A7%E5%88%B6)

> [原文链接](https://research.google/blog/how-diffusion-controller-unifies-and-simplifies-ai-image-generation/) · 原题：How Diffusion Controller unifies and simplifies AI image generation · 发布日期：2026-09-29 · 作者：Chih-wei Hsu、Moonkyung Ryu · 来源：Google Research · Machine Intelligence

## 摘要

Google Research 用 Diffusion Controller 把图像去噪过程表述为连续控制问题，并通过奖励加权损失或 PPO 训练轻量控制网络。灰盒方案冻结骨干，但需取得中间反向均值等信号；白盒方案可联合或分别调整骨干。在 Stable Diffusion v1.4 与 HPS-v2 提示测试中，作者报告部分方案优于 LoRA，白盒版本相对预训练基线的胜率达 90%；这一结果不是任意闭源 API 都可复用的保证，本次未复现。

## 重点图文解读

### 把去噪轨迹作为控制问题

框架以最终奖励调整生成轨迹，兼顾目标偏好与基础模型行为；文中给出 PPO 和奖励加权损失两条训练路径，而不是只在提示词上做修改。

### 冻结骨干仍需中间信号

灰盒版本把中间反向均值送入可训练的侧网络，将侧适配流与骨干输出结合；白盒 J、S 版本分别采用联合和分开训练。是否能接入这些信号，是复用方法的实际前提。

![冻结骨干向 Diffusion Controller 侧网络传递中间反向均值，两条流合并为输出分数。](../../../98-附件/原文配图/diffusion-controller-architecture.png)

*图：冻结的是骨干参数，侧网络仍要读取去噪过程中的中间量；[原图](https://storage.googleapis.com/gweb-research2023-media/original_images/DiffusionController2_BackboneFrozen.png) · [文章](https://research.google/blog/how-diffusion-controller-unifies-and-simplifies-ai-image-generation/)。*

### 胜率须附上评测与基线

实验使用 Stable Diffusion v1.4，覆盖 SFT、RWL、PPO。阅读胜率须同时记录比较对象：下图灰盒对照是 Naive 变体，白盒对照是 LoRA；摘要中的 90% 对照是预训练基线。

![训练结束时不同 Diffusion Controller 方案相对对应基线的 HPS-v2 与人工评价胜率。](../../../98-附件/原文配图/diffusion-controller-winrates.png)

*图：前三幅为 HPS-v2，第四幅为 PPO 人工评价；橙色误差条表示标准差。各组比较对象见图例，不能混用；[原图](https://storage.googleapis.com/gweb-research2023-media/original_images/DiffusionController4_EOTrainingWin.png) · [文章](https://research.google/blog/how-diffusion-controller-unifies-and-simplifies-ai-image-generation/)。*

## 适用条件与局限

- 结果限于文中的模型、提示集、检查点和奖励设置，本次未运行代码或精读论文。
- 博客中的闭源模型可控性描述需结合中间量访问条件理解；仅有最终图片接口的服务能否接入尚未验证。
- 选取结构与成对比较图；示例图片矩阵和训练曲线未全部收录，无缺失关键图的下载故障。

## 怎样理解与应用（AI 解读）

实践时先确认可读的中间量，再固定提示集，记录奖励分数、人工偏好和细节失真，比较不同控制强度。这样能检验奖励变好是否同时改善目标内容，而非只适应奖励模型。

## 变更记录

- 2026-10-13：历史内容首次收录，完整读取正文并通过独立事实与可读性复核，保存相关技术配图。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
