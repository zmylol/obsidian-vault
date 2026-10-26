---
type: "article"
source: "https://huggingface.co/blog/Hanno-Labs/generating-synthetic-training-data-with-dask-on-hu"
source_aliases: []
original_title: "Generating Synthetic Training Data with Dask on Hugging Face Jobs"
authors: ["Stephen Solka"]
authors_source: "https://huggingface.co/blog/Hanno-Labs/generating-synthetic-training-data-with-dask-on-hu"
published: "2026-09-15"
published_source: "https://huggingface.co/blog/Hanno-Labs/generating-synthetic-training-data-with-dask-on-hu"
published_evidence: "原文页首 Published September 15, 2026"
collected: "2026-09-18"
updated: "2026-09-18"
last_checked: "2026-09-18"
category: "模型训练/任务微调"
source_section: "Hanno Labs 社区教程；作者提供实现示例"
tags: []
detail_status: "completed"
note_depth: "中文摘要与重点图文解读"
---

# 用 Dask 分配合成训练数据的 CPU 与 GPU 工作

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E4%BB%BB%E5%8A%A1%E5%BE%AE%E8%B0%83)

> [原文](https://huggingface.co/blog/Hanno-Labs/generating-synthetic-training-data-with-dask-on-hu) · Stephen Solka / Hanno Labs 社区教程 · 2026-09-15。正文已读，来源代码未运行、模型未下载。

## 摘要

Hanno Labs 的 Stephen Solka 用 hfdask 将 Hugging Face Jobs 组成临时 Dask 集群，让 CPU 准备和校验数据、GPU 复用已加载的 vLLM 模型生成问答。示例从 AG News 抽取128篇新闻，用 Qwen3-0.6B 生成带原文引句的问答记录，再检查格式、引句和重复问题，分别保存合格与拒绝结果。这提供了一套可追溯的数据生成流程，但通过规则不代表答案正确或适合训练，文中也未报告实测成本或训练收益；示例依赖付费 Jobs，并固定 hfdask 0.1.1 与 vLLM 0.29.0。

## 重点图文解读

### 用临时集群承载一张任务图

hfdask 根据 YAML 配置创建协调器与工作进程，接管提交、依赖安装、连接和清理。应用仍使用普通 Dask 任务图：数据准备与输出校验放在 CPU 上，批量生成请求 GPU 资源。数据质量规则由应用自行定义。

图示：Dask 任务图与临时 Jobs 架构

本地工具读取集群配置、工作目录与依赖锁文件，向 Jobs 提交协调器和工作进程。CPU 与 GPU 阶段共用一张 Dask 任务图，通过经认证的加密 Iroh 网络连接，数据、模型与输出存储分别挂载。图示为部署职责划分，不是性能测试结果。 [原图](https://cdn-uploads.huggingface.co/production/uploads/63fccb965d2bea4588be8fb1/I_LS35NX-cjzv08PvoS3l.png) · [文章出处](https://huggingface.co/blog/Hanno-Labs/generating-synthetic-training-data-with-dask-on-hu)

### 保留样本来源，复用生成模型

示例使用固定版本的 AG News 测试集，四类各取32篇，分成每批16篇的8个任务，并保留原始行号与类别。GPU 工作进程通过 WorkerPlugin 初始化一次 vLLM 引擎，后续任务复用它。Qwen3-0.6B 只用于小规模演示，作者没有把它推荐为正式生产数据的生成器。

### 校验结果必须能追溯

输出包含问题、答案和支持引句；检查字段、非空文本、长度和引句是否逐字存在于来源，再删除规范化后的重复问题。接受记录与拒绝记录分别保存，拒绝项保留原始输出及原因；重复项单独计数，不等于拒绝文件中的记录。引句存在仍不足以证明它支持答案，训练前需要进一步抽样评估相关性、歧义、覆盖与任务价值。

### 扩容与恢复由不同机制负责

任务图关闭融合优化，以保留 CPU 与 GPU 的放置边界。增加工作节点会增加独立模型副本，并不会自动把单个模型拆到多张 GPU。作者建议按每单位成本的合格样本数衡量配置；长任务还需要自行写入可恢复分片，因为临时磁盘与调度器状态不会永久保存。

## 适用条件与局限

教程固定 hfdask 0.1.1、vLLM 0.29.0、模型与数据版本及容器摘要，依赖付费 Jobs 和输出 Bucket。示例允许公共发现与中继回退，传输加密，但服务仍能观察连接元数据。文中没有实测吞吐、成本、合格率或下游训练收益，不能把部署示例当作性能结论。已检查一张架构图和两张职责表，表格要点融入正文；正文未发现视频、iframe 或 canvas。代码未执行，关联论文未精读。

## 怎样理解与应用（AI 解读）

迁移到自己的训练任务时，可以先用一小批材料检查拒绝原因分布，并抽查规则通过的问答是否真正有依据。只有这些记录满足目标任务要求后，再比较不同批次与机器配置的成本；否则扩大生成规模也可能只是扩大低质量样本数量。

## 变更记录

- 2026-09-18：首次收录，原文发布于2026-09-15；摘要经两项独立复核通过，保留一张原始架构图。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
