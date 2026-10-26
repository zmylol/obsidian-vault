---
type: article
source: https://www.langchain.com/blog/slack-sdk-managed-deep-agents
source_aliases: []
original_title: "Build great out-of-the-box user experiences with Managed Deep Agents"
authors:
- Nathan Drezner
authors_source: 原文页首署名
published: '2026-10-09'
published_source: 原文页首及官方博客列表
published_evidence: October 9, 2026
collected: '2026-10-13'
updated: '2026-10-13'
last_checked: '2026-10-19'
category: 工程与Agent/运行架构
source_section: LangChain 官方博客产品与工程说明
tags:
- lc
- AI
- 运行架构
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
---

# 让 Managed Deep Agents 用反应表情反馈等待状态

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#运行架构)

> [原文：Build great out-of-the-box user experiences with Managed Deep Agents](https://www.langchain.com/blog/slack-sdk-managed-deep-agents) · 发布于 2026-10-09 · 收录于 2026-10-13  
> 作者：Nathan Drezner · LangChain 官方博客产品与工程说明  
> 中文摘要与重点图文节选；示例代码未执行，产品功能按文章发布日期理解。

## 摘要

LangChain 在 Managed Deep Agents v0.9 的 Slack channel 中加入 reactions 属性，让 Agent 根据消息上下文返回固定表情或由函数动态选择表情，以便在长任务等待时向用户确认已收到请求。文章给出静态规则和 Jev TypeSafe Classifier 两种做法：用描述定义 bug、事故、代码审查、阻塞等类别，并在置信度低于 0.25 时回退到 👀；同一表情的含义仍取决于工作区语境。示例是产品设计与代码说明，没有提供用户信任、延迟或质量的对照实验。

## 重点图文解读

### 反应表情作为 Agent 的等待反馈

原文把 Slack reactions 作为长任务的界面反馈：静态字符串适合固定规则，函数则可读取消息上下文后决定表情。配图展示了反应状态在用户界面中的位置，未提供效果对照。

![Slack 中用户请求 Content Studio 为视频建议推文标题，下方显示自定义表情反应；截图并不展示任务完成进度。](../../../98-附件/原文配图/3c9c3aef8e7a9c1d.png)

*Slack 中用户请求 Content Studio 为视频建议推文标题，下方显示自定义表情反应；截图并不展示任务完成进度。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6ac8344140d93b440491e6a2_Content%20Studio%201.png) · [文章出处](https://www.langchain.com/blog/slack-sdk-managed-deep-agents)

### 结构化分类与回退

Jev TypeSafe Classifier 可以从预设词汇中选择表情，类别描述比表情名称更重要；示例设置置信度阈值，低于 0.25 时回退到 👀，也可以选择不返回反应。自定义 Slack emoji 仍需要工作区已有定义。

## 适用条件与局限

该能力需要 Managed Deep Agents v0.9、Slack channel 和可用的决策模型或规则函数；文章没有衡量反应是否提升信任、减少重复询问或增加延迟，同一表情在不同团队里的含义也可能相反。

## 怎样理解与应用（AI 解读）

**AI 解读：**可先把反应表情限定为“已收到、等待外部条件、需要人工关注”等少量状态，并记录分类置信度和回退比例，再通过用户反馈验证它是否帮助理解任务进度；本次未部署示例。

## 变更记录

- 2026-10-13：首次收录；完整读取正文，核对日期、作者和采用的原文配图；摘要完成事实与可读性双遍复核。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
