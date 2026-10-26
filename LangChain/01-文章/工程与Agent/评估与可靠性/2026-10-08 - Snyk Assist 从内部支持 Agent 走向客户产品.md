---
type: article
source: https://www.langchain.com/blog/how-snyk-turned-an-internal-support-agent-into-a-customer-feature
source_aliases: []
original_title: "How Snyk Turned an Internal Support Agent into a Customer Feature"
authors:
- Oliver Armstrong
authors_source: 原文页首署名
published: '2026-10-08'
published_source: 原文页首及官方博客列表
published_evidence: October 8, 2026
collected: '2026-10-09'
updated: '2026-10-09'
last_checked: '2026-10-13'
category: 工程与Agent/评估与可靠性
source_section: LangChain 官方博客案例
tags:
- lc
- AI
- 评估与可靠性
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
---

# Snyk Assist：从内部支持 Agent 走向客户产品

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#评估与可靠性)

> [原文：How Snyk Turned an Internal Support Agent into a Customer Feature](https://www.langchain.com/blog/how-snyk-turned-an-internal-support-agent-into-a-customer-feature) · 发布于 2026-10-08 · 收录于 2026-10-09  
> 作者：Oliver Armstrong · LangChain 官方博客案例  
> 中文摘要与重点图文节选；示例代码未执行，企业案例和产品能力按文章发布日期理解。

## 摘要

Snyk 将基于 LangChain、LangGraph 和 LangSmith 的 Snyk Assist 从内部客服工具逐步推向支持门户和核心产品，并用同一运行时服务 Slack、网页和 API。系统按用户权限在请求时注册工具，用 PostgreSQL checkpointer 保存会话状态，再以离线问答与红队集、CI 阈值和线上定时评估构成发布门槛。公司称自2026年4月面向客户后已处理6万多次查询，85%以上会话未产生支持工单，但这些是企业案例自述，不能外推为通用 Agent 效果。

## 重点文字解读

### 运行机制与证据范围

原文给出产品架构和案例流程；以下只保留可以由正文直接支持的机制、指标和限制。

图示：Snyk Assist 以同一 LangGraph 运行时承载多种入口，并把权限工具、middleware、checkpointer 与 LangSmith 评估接在运行框架周围。

*Snyk Assist 以同一 LangGraph 运行时承载多种入口，并把权限工具、middleware、checkpointer 与 LangSmith 评估接在运行框架周围。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6ac8102db53bcadc6cc0f006_snyk-assist-architecture%404x.png) · [文章出处](https://www.langchain.com/blog/how-snyk-turned-an-internal-support-agent-into-a-customer-feature)

### 适用方式与限制

Snyk 的离线评估、CI 阈值和线上评分组成其发布流程；6万次查询、500多个客户账户和85%以上免工单会话是公司案例自述，未提供受控对照。

## 适用条件与局限

文章没有公开评估集规模、阈值或具体错误率，不能据此证明所有客户场景都安全或准确；权限配置和数据隔离仍需部署方验证。

## 怎样理解与应用（AI 解读）

**AI 解读：**可先让内部用户使用真实问题建立评估集，再把拒答、权限越界和答案质量设成 CI 门槛，并单独观察线上分类分布；本次未部署 Snyk Assist。

## 变更记录

- 2026-10-09：首次收录；完整读取正文，核对日期、作者和采用的原文配图；摘要完成事实与可读性双遍复核。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
