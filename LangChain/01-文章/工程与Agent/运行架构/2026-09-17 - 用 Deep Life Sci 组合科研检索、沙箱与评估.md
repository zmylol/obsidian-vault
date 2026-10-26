---
type: article
source: https://www.langchain.com/blog/agent-harness-life-sciences
source_aliases: []
original_title: 'Building an Agent Harness for Life Sciences: Introducing Deep Life
  Sci'
authors:
- Michael Cunningham
- Prab Singh
authors_source: 原文页首署名
published: '2026-09-17'
published_source: 原文页首及官方博客列表
published_evidence: September 17, 2026
collected: '2026-09-19'
updated: '2026-09-19'
last_checked: '2026-10-01'
category: 工程与Agent/运行架构
source_section: LangChain 官方博客署名技术文章
tags:
- lc
- AI
- 运行架构
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
---

# 用 Deep Life Sci 组合科研检索、沙箱与评估

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E8%BF%90%E8%A1%8C%E6%9E%B6%E6%9E%84)

> [原文：Building an Agent Harness for Life Sciences: Introducing Deep Life Sci](https://www.langchain.com/blog/agent-harness-life-sciences) · 发布于 2026-09-17 · 收录于 2026-09-19  
> 作者：Michael Cunningham、Prab Singh · LangChain 官方博客署名技术文章  
> 中文摘要与重点图文节选；代码和示例未执行，关联论文未精读。

## 摘要

Deep Life Sci 是基于 Deep Agents 的开源生命科学助手模板，将临床试验记录检索、文献检索、文件处理和沙箱分析组合到同一工作流。它可把文档阅读分给子 Agent，并允许机构接入内部资料、更换模型和加入审批环节。运行过程记录到用户自己的 LangSmith 账户，附带可扩展的默认评估集，用于比较提示词或模型修改前后的表现。文章给出研究与文档处理示例，没有报告量化评估结果；这些能力和日志不等于已完成临床或合规验证。

## 重点图文解读

### 把领域资料交给专职分析角色

模板连接 ClinicalTrials.gov、PubMed 和 PMC，支持上传文档、表格及序列文件，并把阅读任务分给子 Agent。架构图进一步区分摘要、全文、试验记录、图片和上传文档五类分析角色，由根 Agent 汇总；沙箱用于运行分析代码。

![原图展示根 Agent、五类只读分析角色，以及 PubMed、PMC、ClinicalTrials.gov 与网页检索工具。数据库规模是原图标注，本笔记未实测覆盖量；PMC全文与开放获取子集的口径说明见下文。](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/36d20efcc1edc2baba04.png)

*原图展示根 Agent、五类只读分析角色，以及 PubMed、PMC、ClinicalTrials.gov 与网页检索工具。数据库规模是原图标注，本笔记未实测覆盖量；PMC全文与开放获取子集的口径说明见下文。* [原图](<https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6aab29a6fca89c643a61f39e_inside-deep-life-sci-agent.png>) · [文章出处](https://www.langchain.com/blog/agent-harness-life-sciences)

### 用共同字段组织检索和分析产物

工作流示例包括上传筛选结果表后分析并查找文献，以及按标准筛选试验记录、提取终点、样本量、受试者特征和随访时间。重点在于把不同来源整理成可核对的结构化表格；界面产物属于示例，不能替代逐项检查原始研究。

![界面示例把试验来源、终点和样本信息整理进表格。截图位于原文上传分析段之后，实际展示的是试验记录提取；其中研究数字未由本任务复核，不作为医疗判断依据。](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/b6ede6782efb93e2e27d.png)

*界面示例把试验来源、终点和样本信息整理进表格。截图位于原文上传分析段之后，实际展示的是试验记录提取；其中研究数字未由本任务复核，不作为医疗判断依据。* [原图](<https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6aab29d09a13262062d8e0f1_Deef%20Life%20Sci%20UI%201.png>) · [文章出处](https://www.langchain.com/blog/agent-harness-life-sciences)

### 接入内部知识后持续检查版本变化

开源代码允许接入公司资料、更换模型和加入审批环节。每次运行在用户自己的 LangSmith 账户保留检索、子 Agent 阅读和代码执行轨迹；默认评估集可随新用例扩充，用于比较模型或提示词变更是否引入退步。

**配图范围：**正文共4张静态图片，本笔记节选2张支撑上述机制与示例的原图；其余图片保留原文入口。正文未发现 SVG、视频、嵌入框架、画布或独立 HTML 表格。

## 适用条件与局限

本文是模板发布介绍，没有给出节省时间或研究质量提升的量化评估。正文的PMC全文数与图中的开放获取论文数使用不同口径；[PMC官方说明](https://pmc.ncbi.nlm.nih.gov/tools/openftlist/)确认开放获取集合只是PMC的一部分。本笔记不将两组数字直接比较，也未验证工具的实际检索覆盖或许可适用范围。保留日志和默认测试集本身不等于完成临床或合规验证。

## 怎样理解与应用（AI 解读）

**AI 解读：**可先选少量公开试验记录，人工制定字段和证据位置，再检查助手能否正确提取、标记缺项并回链来源。替换模型后回放同一组材料，比较遗漏和无依据补全；这用于测试文档工作流，不用于判断治疗效果。本次未运行模板或复现示例。

## 变更记录

- 2026-09-19：首次正式收录；原文发表于 2026-09-17。重新读取原文，摘要经独立事实与可读性复核通过，配图及出处已核对。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
