---
type: article
source: https://www.langchain.com/blog/deep-agents-vs-langchain-vs-langgraph
source_aliases: []
original_title: Deep Agents vs LangChain vs LangGraph
authors:
- Sydney Runkle
authors_source: 原文页首署名
published: '2026-08-06'
published_source: 官方博客列表
published_evidence: August 6, 2026
collected: '2026-09-11'
updated: '2026-09-14'
last_checked: '2026-10-03'
category: 工程与Agent/运行架构
source_section: LangChain 官方博客署名文章
tags:
- lc
- AI
- 运行架构
detail_status: completed
note_depth: 中文摘要与重点图文解读
translation_status: not_requested
---

# 按控制程度理解 Deep Agents、LangChain 与 LangGraph

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E8%BF%90%E8%A1%8C%E6%9E%B6%E6%9E%84)

> [原文：Deep Agents vs LangChain vs LangGraph](https://www.langchain.com/blog/deep-agents-vs-langchain-vs-langgraph) · 发布于 2026-08-06 · 收录于 2026-09-11  
> 作者：Sydney Runkle · LangChain 官方博客  
> 中文摘要与重点图文节选；示例代码未执行，外链论文与实验报告未单独复现。产品能力按文章发布日期理解。

## 摘要

LangChain 团队把三套工具解释为可以组合的不同层次：Deep Agents 内置文件系统、子 Agent、技能和记忆等上下文管理能力，LangChain 提供较轻的模型与工具循环，LangGraph 则负责可自定义的图式运行流程。一般任务可从现成能力起步，需要控制循环时加中间件，需要明确规定流程分支时再使用自定义图。上层 Agent 能嵌入图中，图也能作为子 Agent 使用，不必一次选定后放弃其他层。这是维护团队按控制需求提出的选型建议，不能当作性能或可靠性排名。

## 重点图文解读

### 预设能力与最小循环

Deep Agents 组合文件系统、按需 Skills、记忆与子任务等上下文管理能力；LangChain 的 create_agent 提供模型与工具循环。前者本身建立在后者及一组 middleware 上。

### middleware 在循环周围插入规则

钩子可在模型、工具和 Agent 前后加入审批、摘要或校验。需要超出钩子表达范围的控制流时，再用 LangGraph 自定义图。

![middleware 钩子围绕 Agent、模型和工具调用布置，使开发者可在标准循环内插入规则；更复杂的流程结构由 LangGraph 表达。](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/ed2aaffa9dc27776d71c.png)

*middleware 钩子围绕 Agent、模型和工具调用布置，使开发者可在标准循环内插入规则；更复杂的流程结构由 LangGraph 表达。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6a74c8b56383b9c1a6301dbd_middleware_hooks.png) · [文章出处](https://www.langchain.com/blog/deep-agents-vs-langchain-vs-langgraph)

### 看工作流是否需要固定结构

原文建议一般构建从 Deep Agents 起步，但需要轻量检索循环或确定流程时分别考虑 LangChain 与 LangGraph。上层 Agent 可以成为图中节点，自定义图也可成为子 Agent。

已检查正文媒体清单（静态图片 4 张、表格 0 处、视频嵌入 0 处），节选与上述重点相关的 1 张图片。

## 适用条件与局限

选型建议来自框架维护团队；抽象层高低不是能力或可靠性的统一排名，默认组件随版本变化，需结合实际任务测试。

## 怎样理解与应用（AI 解读）

先列出哪些步骤必须按规则执行、哪些需要模型选择，再判断标准循环加钩子是否足够；只有流程拓扑本身有价值时才增加自定义图结构。

## 变更记录

- 2026-09-11：首次收录；核对正文、日期、作者和采用的配图。
- 2026-09-14：按现行摘要门槛补全主要机制、结果与必要条件，完成独立事实和可读性复核；同步摘要卡片。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
