---
type: article
source: https://www.langchain.com/blog/doubling-down-on-deepagents
source_aliases: []
original_title: Doubling down on Deep Agents
published: '2025-10-28'
published_source: 原文页首或作者订阅源
published_evidence: '原文页首: October 28, 2025'
collected: '2026-09-09'
updated: '2026-09-15'
last_checked: '2026-10-10'
category: 工程与Agent/运行架构
source_section: LangChain 官方博客署名文章
tags:
- lc
- AI
- 运行架构
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
authors:
- The LangChain Team
authors_source: 原文页首署名
---

# Deep Agents 的可插拔存储与框架分层

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E8%BF%90%E8%A1%8C%E6%9E%B6%E6%9E%84)

> [原文：Doubling down on Deep Agents](https://www.langchain.com/blog/doubling-down-on-deepagents) · 发布于 2025-10-28 · 收录于 2026-09-09  
> 作者：The LangChain Team · LangChain 官方博客署名文章  
> 中文摘要与重点图文解读，内容与配图为节选；示例代码未运行，关联论文未精读。历史文章中的产品状态与性能数据以原文条件为准。  

## 摘要

Deep Agents 0.2 将原先只存于 LangGraph 状态的虚拟文件系统改成可插拔后端，内置状态存储、跨线程存储和本地文件系统，并允许按目录组合不同后端。它同时加入大工具结果转存、旧对话压缩，以及对中断工具调用所留消息历史的修复，用于支撑更长的任务。文章把 Deep Agents、LangChain、LangGraph 分别定位为带现成能力的执行框架、核心 Agent 循环和底层运行时，三者逐层构建。S3 是自定义后端示例，跨会话保存取决于后端选择，不能由文件接口本身推定。

## 重点图文解读

### 文件接口可连接不同存储

后端可以使用线程状态、跨线程存储或本地文件；组合后端还能按目录把记忆与临时文件放在不同位置。

### 长任务需要整理执行历史

文章列出大工具结果转存、历史摘要，以及中断工具调用后的消息修复，处理长期运行中的上下文和状态问题。

### 按需要选择抽象层

Deep Agents 提供规划与文件等预设能力，建立在 LangChain Agent 抽象和 LangGraph 运行时之上。

图示：三层依赖关系说明：上层组合既有能力，下层负责 Agent 循环和运行状态。应按所需控制程度选择入口。

*三层依赖关系说明：上层组合既有能力，下层负责 Agent 循环和运行状态。应按所需控制程度选择入口。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/69cbaa51703c727fd28ad705_Visual-3-5.png) · [文章出处](https://www.langchain.com/blog/doubling-down-on-deepagents)

已检查正文配图与媒体，按原文顺序节选与本篇重点直接相关的图片；其他配图和演示见原文。

## 适用条件与局限

本文介绍 0.2 时期的设计，不作为当前接口手册；选择更高层组件也意味着接受更多默认行为。

## 怎样理解与应用（AI 解读）

把已确认的来源清单放入持久目录，把抓取临时文件放入会话目录。分别测试任务中断与重新开启会话时，哪些数据应该继续存在。

## 变更记录

- 2026-09-09：首次收录，核对正文、发布日期及媒体，整理中文摘要与重点解读。
- 2026-09-15：完整回读原文，补全摘要的主要机制、结果及必要条件，完成独立事实和可读性复核并同步卡片。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
