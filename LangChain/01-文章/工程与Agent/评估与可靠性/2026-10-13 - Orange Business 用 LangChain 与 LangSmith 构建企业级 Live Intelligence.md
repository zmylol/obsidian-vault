---
type: article
source: https://www.langchain.com/blog/how-orange-business-built-live-intelligence-on-langchain-and-langsmith
source_aliases: []
original_title: "How Orange Business Built Live Intelligence on LangChain and LangSmith"
authors:
- Sofia Sulikowski
authors_source: 原文页首署名
published: '2026-10-13'
published_source: 原文页首及官方博客列表
published_evidence: October 13, 2026
collected: '2026-10-14'
updated: '2026-10-14'
last_checked: '2026-10-23'
category: 工程与Agent/评估与可靠性
source_section: LangChain 官方博客技术说明
tags:
- lc
- AI
- 评估与可靠性
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
---

# Orange Business 用 LangChain 与 LangSmith 构建企业级 Live Intelligence

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#评估与可靠性)

> [原文：How Orange Business Built Live Intelligence on LangChain and LangSmith](https://www.langchain.com/blog/how-orange-business-built-live-intelligence-on-langchain-and-langsmith) · 发布于 2026-10-13 · 收录于 2026-10-14  
> 作者：Sofia Sulikowski · LangChain 官方博客技术说明  
> 中文摘要与重点图文节选；示例代码未执行，案例和厂商基准按原文限定理解。

## 摘要

Orange Business 在约20家云与AI厂商中选择 LangChain 作为模型中立、可移植的 Agent 基础，并用 LangSmith 负责评估与可观测性。其 Live Intelligence 将 Studio、Portal、Console 与 Agent/MCP Registry 组合起来：工程师构建跨系统流程，员工使用受治理的 Agent，管理员监控用量和合规。平台在生产中分别评估 RAG 检索与依据、Agent 行为及 trace 的延迟和失败，并在发布前回放历史轨迹做回归检查；这些是 Orange 的产品案例和自述，没有公开受控准确率或成本对照。

## 重点文字解读

### 选型与平台分工

Orange Innovation 比较约 20 家云与 AI 厂商后选择模型中立的 LangChain，以保留 Agent 架构控制权并适应欧洲数据主权要求；LangSmith 承担评估和可观测性。文中“自建会延迟 12–18 个月”来自 Orange 负责人估计，不能视为实际对照结果。

### Studio、Portal 与 Console

Studio 供工程师搭建跨系统工作流，Portal 把已构建的 Agent 交给业务员工，Console 让管理员监控使用、性能和安全合规。Agent Registry 管理 Agent 与提示词的发现、复用和版本；MCP Registry 集中登记可信工具与连接器，避免各团队把认证和治理逻辑反复塞进提示词。

### 三层评估与发布前回归

Orange 用黄金问答和预期来源检查 RAG 召回、依据与忠实度；用工具选择、任务完成、拒答及注入鲁棒性检查 Agent 行为；用生产 trace 查看延迟、成本、失败与升级。版本发布前回放历史轨迹，比较 Agent 版本，并把好坏案例积累成离线数据集。文章报告覆盖约 12 万员工和 150 多个客户，但没有披露这些指标的统计口径，也没有受控质量提升数字。

## 适用条件与局限

这是 Orange Business 的部署案例和负责人自述；约 12 万员工、150 多客户是覆盖规模，不能据此计算准确率提升。原文未列出受控实验、评估样本量或成本基线；迁移时需核对数据主权、工具权限、版本回归集与生产 trace 留存。

## 怎样理解与应用（AI 解读）

**AI 解读：**如果迁移到自己的平台，可把权限和工具目录放在统一注册层，再建立“黄金问答—Agent 行为—生产 trace”三层检查。先选一个跨系统流程，记录回归测试前后失败类型和人工升级率；这是一项建议，非原文已验证效果。

## 变更记录

- 2026-10-14：首次收录；完整读取正文，核对日期、作者和配图；摘要由同一执行者逐句核对原文并单独只读复核。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
