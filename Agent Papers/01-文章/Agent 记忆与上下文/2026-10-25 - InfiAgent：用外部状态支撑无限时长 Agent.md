---
type: article
source: "https://aclanthology.org/2026.findings-acl.1787/"
source_aliases: ["https://doi.org/10.18653/v1/2026.findings-acl.1787"]
original_title: "InfiAgent: An Infinite-Horizon Framework for General-Purpose Autonomous Agents"
authors: ["Chenglin Yu", "Yuchen Wang", "Songmiao Wang", "Hongxia Yang", "Li Ming"]
published: 2026-07
collected: 2026-10-25T11:25:14+08:00
updated: 2026-10-25T11:25:14+08:00
last_checked: 2026-10-25T11:25:14+08:00
category: "Agent 记忆与上下文/外部状态与长时程执行"
venue: "Findings of the Association for Computational Linguistics"
venue_year: 2026
track: "Findings"
acceptance_status: "正式收录"
paper_id: "2026.findings-acl.1787"
pdf_url: "https://aclanthology.org/2026.findings-acl.1787.pdf"
code_url: ""
tags: [agent, long-horizon, external-state, multi-agent, ACL]
note_depth: 中文摘要与重点解读
detail_status: completed
---

# InfiAgent：用外部状态支撑无限时长 Agent

<!-- AUTO:BEGIN -->

## 为何入选

InfiAgent 是 ACL 2026 Findings 中对长时程 Agent 状态管理的直接回答。它不再把完整历史或压缩后的提示当作唯一记忆，而是把工作区文件作为持久状态，让每一步只读取状态快照和固定窗口的近期动作；这与长期记忆论文互补，关注点从“记住什么”推进到“如何让任务持续运行”。论文还用 80 篇本地 PDF 的长任务测试真实的循环、读写和失败积累。

## 摘要

InfiAgent 以文件为中心外置 Agent 的持久状态，让每一步只读取状态快照和固定窗口的近期动作。分层 Agent 与外部注意力负责长文档处理；在 DeepResearch Bench 和最多 80 篇论文的综述任务上，未微调的 20B 开源模型取得 41.45 总分、67.1 平均覆盖率。层级调度、串行执行和错误写入会带来延迟与幻觉传播。

## 重点解读

### 把持久状态从提示词中拿出来

InfiAgent 把工作区视为权威记录，持久层保存计划、代码、摘要、日志等耐久工件，另有任务级共享上下文记录指令、Agent 层级和运行元数据。每次决策只把状态快照、固定的近期动作窗口和当前目标重新组合进提示，因此上下文大小不随任务时长线性增长。

### 分层执行与外部注意力

高层规划 Agent 操作抽象目标和状态摘要，低层 Agent 执行领域动作或原子动作；外部注意力负责大文档处理，只把与任务相关的结果写回状态。这个结构把读大量文档的工作从主 Agent 的可见上下文中分离出来，同时给后续步骤留下可审计的文件证据。

### 评测的是持续完成能力

论文没有把短对话准确率作为重点，而是用 DeepResearch Bench 评估综合性、洞察、指令遵循和可读性，再用 80 个本地 PDF 的任务统计“覆盖率”：只有实际读过 PDF 正文并写出超越标题和元数据的内容才算覆盖。这一指标直接暴露提前终止、跳过文档和只复述标题等长任务失败模式。

## 实验与结果

- DeepResearch Bench 上，gpt-oss-20b 的 InfiAgent 总分为 41.45，在公开榜单中接近多种更大闭源研究 Agent；作者明确说这不是系统内部的规模扩展结论，因为只测试了一个模型尺寸。
- 80 篇本地 PDF 的文献综述任务中，GPT-OSS-20B 的平均覆盖为 67.1/80 篇，更强 backbone 达到 80.0/80 篇；在相近本地工作区接口下，Claude Code 平均 29.1，Cursor 平均 1.0 或 0.1。去掉文件状态、改用压缩长上下文后，GPT-OSS-20B 的平均覆盖率降至 3.2。
- 论文报告了多次运行的最大、最小和平均覆盖率，并把“实际 PDF 正文读取 + 有内容的总结”写入日志作为判定依据；这一设计比只比较最终报告质量更能检查 Agent 是否真的执行了长任务。

## 适用条件与局限

- 分层委派和结果聚合增加延迟，当前架构为保证状态一致性采用串行执行，不适合需要即时响应或高度并行的工作流。
- 文件是权威状态也意味着错误写入可能长期存在；较小模型在超长任务中产生的幻觉会被后续 Agent 继续传播，需要验证和人工监督。
- 评测集中在研究型文档处理与信息综合，没有覆盖反应式对话、具身交互或外部状态快速变化的环境。
- 官方论文提供的是评测输出仓库而不是完整框架代码；本次没有运行实现，结果只按论文给出的协议理解。

## 怎样理解与应用（AI 解读）

InfiAgent 的核心不是“让模型拥有无限上下文”，而是建立一个可检查的外部状态协议：每次行动都从状态中读取、把结果写回，并周期性重写短思考记录。实践中可以把文件状态设计成带版本和校验的事件日志，给关键字段配置来源与回滚；这样即使模型上下文很小，也能把长任务变成可恢复的状态机。这个应用建议是 AI 解读，不是论文额外实验结论。

## 原文与资源

- [ACL Anthology 页面](https://aclanthology.org/2026.findings-acl.1787/)
- [PDF](https://aclanthology.org/2026.findings-acl.1787.pdf)
- [评测输出仓库](https://github.com/polyuiislab/infiAgent_Outputs)（论文说明其为原始产物，不是主要科学结论的代码实现）
- [DOI](https://doi.org/10.18653/v1/2026.findings-acl.1787)
- 已核对 Figure 1–2、DeepResearch 结果表、长任务覆盖率与局限段落；本次未复制图片。

## 变更记录

- 2026-10-25：首次收录；已按 ACL 官方元数据与 11 页 PDF 完成摘要、方法、实验、评测定义和局限复核。

<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
