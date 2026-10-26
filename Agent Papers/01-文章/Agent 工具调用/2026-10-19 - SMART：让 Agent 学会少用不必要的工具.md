---
type: article
source: "https://aclanthology.org/2025.findings-acl.239/"
source_aliases: ["https://doi.org/10.18653/v1/2025.findings-acl.239"]
original_title: "SMART: Self-Aware Agent for Tool Overuse Mitigation"
authors: ["Cheng Qian", "Emre Can Acikgoz", "Hongru Wang", "Xiusi Chen", "Avirup Sil", "Dilek Hakkani-Tür", "Gokhan Tur", "Heng Ji"]
published: 2025-07
collected: 2026-10-19T08:54:44+08:00
updated: 2026-10-19T08:54:44+08:00
last_checked: 2026-10-19T08:54:44+08:00
category: "Agent 工具调用/工具选择与校准"
venue: "Findings of the Association for Computational Linguistics"
venue_year: 2025
track: "Findings"
acceptance_status: "正式收录"
paper_id: "2025.findings-acl.239"
pdf_url: "https://aclanthology.org/2025.findings-acl.239.pdf"
code_url: ""
tags: [agent, tool-use, calibration, ACL]
note_depth: 中文摘要与重点解读
detail_status: completed
---

# SMART：让 Agent 学会少用不必要的工具

<!-- AUTO:BEGIN -->

## 为何入选

这是 ACL 2025 Findings 中一篇直接处理 Agent 工具调用成本与决策边界的论文。它把“什么时候不该调用工具”变成可训练、可评测的问题，且给出跨域测试结果；对设计工具路由、减少无效调用很有参考价值。

## 摘要

SMART 研究大语言模型 Agent 的“工具过度使用”：模型在自身知识足够时仍频繁调用外部工具，增加成本并可能引入干扰。作者构造覆盖数学、时间信息和用户意图的 SMART-ER 数据集，把每一步标注为依赖参数知识或必须调用工具，并用监督微调训练 SMARTAgent。论文报告，在其测试设置中，SMARTAgent 将工具调用减少 24%，整体性能提升超过 37%；在 GSM8K 和 MINTQA 等域外测试上，工具调用约降至基线的五分之一，同时保持准确率。结果来自有限的任务域和模型家族，不能直接等同于真实生产流量中的节省。

## 重点解读

### 把工具决策拆成可学习的中间判断

SMART-ER 的问题不是单一问答，而是把“模型擅长的步骤”和“模型容易出错、需要外部信息的步骤”组合进同一条推理链。数据覆盖 Math、Time、Intention 三类场景，并为每一步附上为什么依赖内部知识或外部工具的解释。这样训练目标从“答案对不对”扩展到“是否在正确位置调用工具”。

### 用知识边界校准调用策略

SMARTAgent 基于 Llama-3.1 8B/70B、Mistral 系列等指令模型微调，让模型在推理过程中动态切换参数知识与工具调用。论文还分析 logits 置信度，观察到训练后模型对切换判断更确定；这支持把工具路由视为模型能力边界的校准问题，而不是简单加一条“尽量少调用工具”的提示。

## 实验与结果

论文在三个域内测试集上评估工具次数和准确率，并用 GSM8K、MINTQA 做域外测试。官方摘要报告工具调用减少 24%、性能提升超过 37%，7B 规模模型可达到与 70B 模型及 GPT-4 相近的表现；PDF 的表格显示不同模型与任务的工具次数、准确率并不完全一致，收益依赖任务构造与基线。作者对 5% 的含数学推理步骤做人工质量检查，报告通过率超过 95%。

## 适用条件与局限

- 任务主要覆盖数学、时间信息和用户意图，尚未覆盖长尾知识、专业领域或复杂多工具工作流。
- 训练是监督微调，结果依赖 SMART-ER 的标注与合成流程；真实工具的错误、延迟和权限失败没有被完整模拟。
- 论文在两类模型家族上验证，作者也指出需要扩展到 Qwen、DeepSeek 等架构。
- “减少工具调用”只有在参数知识确实足够时才是好事；对需要实时或外部证据的任务，过度抑制调用会损害可靠性。

## 怎样理解与应用（AI 解读）

可以把 SMART 的思想落成一个工具路由器：先让模型给每个步骤标注“内部知识足够 / 必须查外部 / 不确定”，再只对后两类步骤开放工具。实际部署时应把“调用次数”和“任务成功率、证据新鲜度、延迟”一起做约束，避免把论文中的工具节省指标孤立成优化目标。这个应用建议是 AI 解读，不是论文实验结论。

## 原文与资源

- [ACL Anthology 页面](https://aclanthology.org/2025.findings-acl.239/)
- [PDF](https://aclanthology.org/2025.findings-acl.239.pdf)
- DOI：[10.18653/v1/2025.findings-acl.239](https://doi.org/10.18653/v1/2025.findings-acl.239)
- 原文图表已核对；本次未复制图片，保留文字解读。

## 变更记录

- 2026-10-19：首次收录；已按 ACL 官方 PDF 完成摘要、方法、实验与局限复核。

<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
