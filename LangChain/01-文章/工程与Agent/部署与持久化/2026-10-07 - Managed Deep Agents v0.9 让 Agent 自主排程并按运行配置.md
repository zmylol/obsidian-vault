---
type: article
source: https://www.langchain.com/blog/managed-deep-agents-schedules-per-run-configuration-slack
source_aliases: []
original_title: "Managed Deep Agents: Schedules, Per-Run Configuration, and Slack Reactions"
authors:
- Nathan Drezner
authors_source: 原文页首署名
published: '2026-10-07'
published_source: 原文页首及官方博客列表
published_evidence: October 7, 2026
collected: '2026-10-08'
updated: '2026-10-08'
last_checked: '2026-10-08'
category: 工程与Agent/部署与持久化
source_section: LangChain 官方博客产品发布
tags:
- lc
- AI
- 部署与持久化
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
---

# Managed Deep Agents v0.9：让 Agent 自主排程并按运行配置

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#部署与持久化)

> [原文：Managed Deep Agents: Schedules, Per-Run Configuration, and Slack Reactions](https://www.langchain.com/blog/managed-deep-agents-schedules-per-run-configuration-slack) · 发布于 2026-10-07 · 收录于 2026-10-08  
> 作者：Nathan Drezner · LangChain 官方博客产品发布  
> 中文摘要与重点图文节选；示例代码未执行，产品功能按文章发布日期理解。

## 摘要

Managed Deep Agents v0.9 新增三类能力：Agent 可在对话中创建一次性或周期排程，排程以发起者的权限运行并把结果返回原频道；同一部署可在每次运行开始时按用户、频道或仓库选择模型、指令、Skills、MCP 与沙箱；Slack 频道还能用反应表明已接收消息并按内容选择表情。文章展示了 SDK 和配置示例，但产品仍标为 Public Beta，权限继承、配置选择和消息渠道需要结合实际部署验证，示例没有提供性能或可靠性对照。

## 重点文字解读

### 机制与触发边界

原文先说明核心机制，再给出代码或配置示例。以下解读只保留与架构和部署直接相关的内容，不把产品发布说明写成通用性能结论。

图示：同一托管部署可依据本次运行的上下文选择模型、指令、Skills、MCP 服务器和沙箱；这是配置关系示意，不是性能结果。

*同一托管部署可依据本次运行的上下文选择模型、指令、Skills、MCP 服务器和沙箱；这是配置关系示意，不是性能结果。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6ac688d5a8939eacd9bab235_Managed%20Deep%20Agents%20configure%20agents%20per%20run.png) · [文章出处](https://www.langchain.com/blog/managed-deep-agents-schedules-per-run-configuration-slack)

### 适用方式与限制

排程会沿用创建者的权限和连接，并返回创建排程的频道；每次运行配置可在模型调用前限制可见的 Skills 与 MCP。Slack 反应是接收反馈，不代表任务已经完成。

## 适用条件与局限

Managed Deep Agents v0.9 在文章中标为 Public Beta；示例的 cron、权限、连接和 Slack 行为需要按实际账户与部署验证，文章没有给出生产稳定性数据。

## 怎样理解与应用（AI 解读）

**AI 解读：**可先为一个团队配置单一部署，分别记录排程执行身份、返回频道和每次运行的实际配置，再验证权限是否最小化；本次未部署或发送 Slack 消息。

## 变更记录

- 2026-10-08：首次收录；完整读取正文，核对日期、作者和采用的原文配图；摘要完成事实与可读性双遍复核。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
