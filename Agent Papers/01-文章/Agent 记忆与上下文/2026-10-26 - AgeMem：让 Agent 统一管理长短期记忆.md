---
type: article
source: "https://aclanthology.org/2026.acl-long.981/"
source_aliases: ["https://doi.org/10.18653/v1/2026.acl-long.981"]
original_title: "Agentic Memory: Learning Unified Long-Term and Short-Term Memory Management for Large Language Model Agents"
authors: ["Yi Yu", "Liuyi Yao", "Yuexiang Xie", "Qingquan Tan", "Jiaqi Feng", "Yaliang Li", "Libing Wu"]
published: 2026-07
collected: 2026-10-26T11:27:47+08:00
updated: 2026-10-26T11:27:47+08:00
last_checked: 2026-10-26T11:27:47+08:00
category: "Agent 记忆与上下文/统一记忆策略"
venue: "ACL"
venue_year: 2026
track: "Long Papers (Volume 1)"
acceptance_status: "正式收录"
paper_id: "2026.acl-long.981"
pdf_url: "https://aclanthology.org/2026.acl-long.981.pdf"
code_url: "https://github.com/y1y5/AgeMem"
tags: [agent, memory, reinforcement-learning, long-horizon, ACL]
note_depth: 中文摘要与重点解读
detail_status: completed
---

# AgeMem：让 Agent 统一管理长短期记忆

<!-- AUTO:BEGIN -->

## 为何入选

AgeMem 是 ACL 2026 Long Papers 中把记忆管理直接纳入 Agent 策略的一项工作。它不把长期记忆和短期上下文当作固定的外部 RAG，而是让 Agent 通过存储、检索、更新、总结和丢弃等工具动作学习何时管理记忆，并用强化学习处理稀疏的终局收益。它补上了 A-Mem 等自主记忆组织方法在训练信号上的空缺。

## 摘要
AgeMem 将长短期记忆操作统一为 LLM Agent 的策略动作：Agent 可存储、检索、更新、总结和丢弃记忆，再由环境反馈学习何时调用这些工具。作者采用三阶段强化学习与逐步 GRPO，把稀疏收益分配到中间步骤。在五个长时程基准上，AgeMem 在 Qwen2.5-7B 和 Qwen3-4B 上平均成功率达 41.96% 和 54.31%，但训练轨迹与工具集合仍较受控。

## 重点解读

### 记忆接口成为策略的一部分

AgeMem 为 LTM 和 STM 提供统一工具接口。Agent 可把重要信息写入长期存储，也可在当前上下文中过滤、总结或丢弃短期记忆；检索动作不再由外部模块固定执行，而是由策略根据任务状态决定。这样，“记什么、什么时候取、何时压缩”成为可优化的连续决策。

### 用逐步奖励缓解稀疏反馈

训练分三阶段：先学习基本的记忆工具使用，再用任务轨迹进行策略优化，最后通过 step-wise GRPO 将任务最终收益分配给具体记忆动作。作者专门设计记忆质量 MQ 指标，区分记忆是否被正确保存、检索和利用；这使得任务成功率与记忆本身的质量可以分开观察。

## 实验与结果

- 评测覆盖 ALFWorld、SciWorld、PDDL、BabyAI 和 HotpotQA；比较无记忆、AgeMem-noRL、LangMem、A-Mem、Mem0 与 Mem0g，骨干模型为 Qwen2.5-7B-Instruct 和 Qwen3-4B-Instruct。
- Qwen2.5-7B 上 AgeMem 平均 41.96%，无记忆为 28.05%，AgeMem-noRL 为 33.43%；Qwen3-4B 上分别为 54.31%、43.97% 和 45.59%。作者报告相对无记忆提升 49.59% 和 23.52%，相对最佳基线再提升 4.82 和 8.57 个百分点。
- 五项任务的 Qwen3-4B 得分为 48.97/59.48/35.07/72.56/55.49；MQ 为 0.533 和 0.605。HotpotQA 的 STM token 由 AgeMem-RAG 的 2,186/2,310 降到 2,117/2,191，下降约 3.1%/5.1%。

## 适用条件与局限

- 五个基准提供了较清晰的状态和奖励，但仍是受控任务，不能直接代表开放世界的持续对话、真实用户偏好或跨会话协作。
- 训练课程只使用 HotpotQA 轨迹来学习记忆策略，跨领域迁移能力仍需单独验证；论文把持久化对话和真实用户交互列为未来工作。
- 工具集合固定为作者定义的记忆操作，换成数据库、文件系统或多模态记忆时，动作空间和安全约束可能需要重新设计。
- RL 训练需要额外轨迹和计算，成功率提升不等于生成的每条记忆都可靠；代码已公开，本次没有运行复现。

## 怎样理解与应用（AI 解读）

AgeMem 的关键变化是把“记忆管理”从一个检索组件变成 Agent 的行动决策。工程上可先记录每次存储、检索、压缩和删除的理由与结果，再用任务反馈检查哪些动作真正带来收益；如果直接把策略接入生产记忆库，还需要版本、权限和删除机制。这个落地建议是 AI 解读，不是论文额外实验结论。

## 原文与资源

- [ACL Anthology 论文页面](https://aclanthology.org/2026.acl-long.981/)
- [ACL PDF](https://aclanthology.org/2026.acl-long.981.pdf)
- [AgeMem 代码](https://github.com/y1y5/AgeMem)
- [DOI](https://doi.org/10.18653/v1/2026.acl-long.981)
- 已核对摘要、Figure 1–4、训练流程、Table 2 主结果、MQ 与 token 开销表及局限章节；本次以文字记录，未复制图片。

## 变更记录

- 2026-10-26：首次收录；按 ACL 2026 官方页面与 27 页 PDF 完成作者、轨道、方法、实验数字和局限复核。

<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
