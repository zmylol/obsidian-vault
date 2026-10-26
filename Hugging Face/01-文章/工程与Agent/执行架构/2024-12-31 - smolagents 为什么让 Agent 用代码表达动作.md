---
type: article
source: https://huggingface.co/blog/smolagents
source_aliases: []
original_title: Introducing smolagents , a simple library to build agents
published: '2024-12-31'
published_source: 原文页首或作者订阅源
published_evidence: '原文页首: December 31, 2024'
collected: '2026-09-09'
updated: "2026-09-15"
last_checked: "2026-09-15"
category: 工程与Agent/执行架构
source_section: Hugging Face 博客署名技术文章
tags:
- hf
- AI
- 执行架构
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
authors:
- Aymeric Roucher
- Merve
- Thomas Wolf
authors_source: 原文页首署名
---

# smolagents 为什么让 Agent 用代码表达动作

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%89%A7%E8%A1%8C%E6%9E%B6%E6%9E%84)

> [原文：Introducing smolagents , a simple library to build agents](https://huggingface.co/blog/smolagents) · 发布于 2024-12-31 · 收录于 2026-09-09  
> 作者：Aymeric Roucher、Merve、Thomas Wolf · Hugging Face 博客署名技术文章  
> 中文摘要与重点文字解读，内容与配图为节选；示例代码未运行，关联论文未精读。历史文章中的产品状态与性能数据以原文条件为准。

## 摘要

Hugging Face 在 2024 年底发布 smolagents，让语言模型用 Python 代码组合工具、保存中间对象并控制多步任务，也保留 JSON 式工具调用。作者展示了旅行规划等示例，并在混合任务基准中报告开放模型可与领先闭源模型竞争，但这不表示所有任务或今天的版本都有同样表现。代码执行可接入 E2B 沙箱；若流程能预先确定，作者建议直接编写固定流程，只有需要动态决定下一步时才引入 Agent。

## 重点文字解读

### 先判断是否需要自主决策

文章从固定代码到模型控制流程区分不同自主程度；步骤确定的任务未必需要完整 Agent。

### 代码可以组合多个动作

循环、变量和对象能表达连续工具操作，减少逐条描述动作的负担；工具仍需明确的输入输出契约。

图示：代码动作与 JSON 工具动作的对比，展示代码如何直接表达组合与流程控制。

*代码动作与 JSON 工具动作的对比，展示代码如何直接表达组合与流程控制。* [原图](https://huggingface.co/datasets/huggingface/documentation-images/resolve/main/transformers/code_vs_json_actions.png) · [文章出处](https://huggingface.co/blog/smolagents)

### 执行环境承担边界控制

模型生成代码意味着要限制可执行操作和资源，运行隔离不能仅靠提示词约定。

已检查正文配图与媒体，按原文顺序节选与本篇重点直接相关的图片；其他配图和演示见原文。

## 适用条件与局限

这是 2024 年末的框架介绍，基准与接口属于当时版本。生成代码的灵活性不会自动带来正确性或安全性。

## 怎样理解与应用（AI 解读）

抓取、去重、路径生成等确定步骤适合固定程序；选文和重点解释可以交给模型，但保存结果前应有明确校验。

## 变更记录

- 2026-09-09：首次收录，核对正文、发布日期及媒体，整理中文摘要与重点解读。
- 2026-09-15：补写摘要，完整读文后完成事实与独立可读性复核；不计为今日新增。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
