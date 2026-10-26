---
type: article
source: https://www.langchain.com/blog/introducing-openwiki-brains-general-purpose-wiki-memory-for-agents
source_aliases: []
original_title: Introducing OpenWiki Brains, general-purpose wiki memory for agents
authors:
- Brace Sproul
authors_source: 原文页首署名
published: '2026-07-10'
published_source: 官方博客列表
published_evidence: July 10, 2026
collected: '2026-09-13'
updated: '2026-09-13'
last_checked: '2026-09-27'
category: 工程与Agent/上下文管理
source_section: LangChain 官方博客署名文章
tags:
- lc
- AI
- 上下文管理
detail_status: completed
note_depth: 中文摘要与重点文字解读
translation_status: not_requested
---

# 用 OpenWiki Brains 把多源信息维护成 Agent 记忆

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E4%B8%8A%E4%B8%8B%E6%96%87%E7%AE%A1%E7%90%86)

> [原文：Introducing OpenWiki Brains, general-purpose wiki memory for agents](https://www.langchain.com/blog/introducing-openwiki-brains-general-purpose-wiki-memory-for-agents) · 发布于 2026-07-10 · 收录于 2026-09-13  
> 作者：Brace Sproul · LangChain 官方博客  
> 中文摘要与重点图文节选；示例代码未执行，外链论文与实验报告未单独复现。产品能力按文章发布日期理解。

## 摘要

OpenWiki 0.1.0 把原有的代码仓库文档能力扩展为通用记忆：Personal Brain 根据用户关注范围，从已连接的信息源提取内容，写成本地 Markdown 知识库并按计划刷新。邮件和代码提交等来源可按固定方式拉取，Notion 与网页搜索则由 Agent 带着目标检索；Code Brain 仍单独负责仓库知识。发布时首批连接器包括 Gmail、Notion、Git、X、Hacker News 和网页搜索，Slack 及更完善的检索仍是后续计划，不能把路线图当作已有功能。

## 重点文字解读

### 先指定记忆应关心什么

Personal Brain 依据用户关注范围选择信息；它可主动从已连接来源取材，不必等待每次对话显式要求记住。

### 固定拉取与带目标检索并存

邮件和提交记录可按固定规则拉取；Notion 与网页搜索缺少统一相关信息流，需要在摄取时提供工具和目标。

图示：Personal Brain 从连接器取得资料，依次执行摄取任务并更新 wiki；右侧回路表示持续刷新，不表示自动拥有所有外部账户访问权。

*Personal Brain 从连接器取得资料，依次执行摄取任务并更新 wiki；右侧回路表示持续刷新，不表示自动拥有所有外部账户访问权。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6a5121d3278e8d2d001a4475_openwiki_brain_langchain_dark%201.png) · [文章出处](https://www.langchain.com/blog/introducing-openwiki-brains-general-purpose-wiki-memory-for-agents)

### 本地定时刷新，区分两类知识

Personal Brain 保存跨工具工作信息，Code Brain 维护仓库文档；两者更新规则不同，发布时都以 Markdown 为可见载体。

已检查正文媒体清单（静态图片 1 张、表格 0 处、视频嵌入 0 处），节选与上述重点相关的 1 张图片。

## 适用条件与局限

按 0.1.0 发布时理解：Slack、语义检索等仍属后续方向。本文未安装连接器或访问私人信息源。

## 怎样理解与应用（AI 解读）

**AI 解读：**维护个人知识库时，先明确保留哪些项目事实、如何发现变动及如何去重，再决定连接多少来源；新增连接器不会自动解决相关性问题。

## 变更记录

- 2026-09-13：历史收录；核验 Personal/Code Brain 区分、连接器方式与当时路线图。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
