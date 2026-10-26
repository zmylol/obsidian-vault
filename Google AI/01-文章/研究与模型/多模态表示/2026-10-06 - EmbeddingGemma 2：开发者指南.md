---
type: article
source: "https://developers.googleblog.com/en/embeddinggemma-2-the-developer-guide/"
source_aliases: []
original_title: "EmbeddingGemma 2: The Developer Guide"
authors: ["Maarten Grootendorst", "Ian Ballantyne"]
authors_source: "原文署名"
published: "2026-10-06"
published_source: "原文页首"
published_evidence: "https://developers.googleblog.com/en/embeddinggemma-2-the-developer-guide/；正文标题与日期"
collected: "2026-10-11T10:35:34+08:00"
updated: "2026-10-12T10:56:46+08:00"
last_checked: "2026-10-15T17:07:08+08:00"
category: "研究与模型/多模态表示"
source_section: "Google Developers Blog · AI"
tags: ["Google Developers", "EmbeddingGemma", "Gemma", "多模态检索", "RAG"]
status: "saved"
detail_status: "completed"
note_depth: "中文摘要与重点图文解读"
---

# EmbeddingGemma 2：开发者指南

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-%E7%AE%A1%E7%90%86/%E6%94%B6%E5%BD%95%E6%B8%85%E5%8D%95.md#%E5%A4%9A%E6%A8%A1%E6%80%81%E8%A1%A8%E7%A4%BA)

> [原文链接](https://developers.googleblog.com/en/embeddinggemma-2-the-developer-guide/) · 原题：EmbeddingGemma 2: The Developer Guide · 发布日期：2026-10-06 · 作者：Maarten Grootendorst、Ian Ballantyne · 来源：Google Developers Blog · AI

## 摘要

EmbeddingGemma 2 将文本、代码、图像、视频和音频映射到兼容的 768 维向量空间，按需加载 270M 至 740M 参数的编码器。开发指南给出任务提示、跨模态输入与 Matryoshka 降维方法：256 维约占原向量三分之一存储，原文称图像、视频和语音检索约保留 95% 的质量；降到 128 维的损失更大，应在目标数据上验证。模型采用 Apache 2.0 授权，示例代码和视频本次未运行或观看。

## 重点图文解读

### 按模态加载，共享表示

270M 的文本/代码基础模型可增加视觉与音频编码器，完整配置为 740M。它们来自同一检查点并输出兼容向量，文本查询能够与媒体文档进行相似度比较。

![按模态加载，共享表示](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/embed-architecture.png)

*文本和代码直接进入骨干，视觉与音频经过可选编码器；各模态共同映射到语义空间。* [原图](https://storage.googleapis.com/gweb-developer-goog-blog-assets/images/embeddinggemma2.original.png) · [原文](https://developers.googleblog.com/en/embeddinggemma-2-the-developer-guide/)

### 检索任务与降维

查询与文档使用不同任务提示；媒体输入按模态组织。降维时查询和文档维数必须相同并归一化；128 维节省更多向量存储，但原文报告多模态质量损失比文本更大。

### 读取基准的比较条件

原文报告 MTEB Code 相对第一代提高 14%。图中纵轴是任务平均分，横轴是模型规模，不能读成单次查询正确率或所有检索任务的收益。

![读取基准的比较条件](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/embed-code-benchmark.png)

*EmbeddingGemma 2 在模型规模与代码检索平均分之间的比较位置；不同模型并非等规模对比。* [原图](https://storage.googleapis.com/gweb-developer-goog-blog-assets/images/Massive_Text_Embedding_Benchmark_Code_1.original.png) · [原文](https://developers.googleblog.com/en/embeddinggemma-2-the-developer-guide/)

## 适用条件与局限

- 共享空间不消除数据域差异；截断后的检索表现需要在目标语料上复测。
- 正文含两个视频及任务提示、配置、输入容量图表，本次选读结构与代码基准；视频、外链模型卡和样例未运行或精读。

## 怎样理解与应用（AI 解读）

给代码仓库检索建一组真实查询，同时对照 768、256、128 维的召回和向量占用；固定编码器、语料及候选数量，避免把换模态或换数据造成的差异归因于降维。

## 变更记录

- 2026-10-11：首次收录，完成正文读取、摘要双重核验、图片保存及链接检查。
- 2026-10-12：旧文深化，补齐关键图文、具体局限与 AI 解读，摘要独立复核通过；本次建立来源正文核验基线，未声称原文更新。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
