---
type: article
source: https://www.anthropic.com/news/claude-in-xcode
source_aliases: []
original_title: Claude is now generally available in Xcode
published: '2025-09-15'
collected: '2026-09-09'
updated: '2026-09-14'
last_checked: '2026-09-14'
category: 产品与生态/编程与开发工具
source_section: News
tags:
- products
- agents
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-09-11T09:13:15+08:00'
  source_read: true
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 已查看选取的 1 张原图并核对内容与图注；其余媒体保留原文入口。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep14
    source_sha256: fa9c913581f001e8aedbb836c6bdcf621fd13225cd20286cbaa6cca45085a8fa
    evidence:
    - location: 开头与 Using Claude in Xcode
      support: Xcode 26 集成 Sonnet 4，支持项目上下文、对话和附件以及内联编码工具。
    - location: Your Claude subscription usage limits 段
      support: 订阅使用限制跨平台共享，Xcode 可使用其中一部分。
    - location: Getting started
      support: 发布时为 Pro、Max，以及 Team、Enterprise 高级席位，文章未给出量化效果评测。
    correction: 补足集成功能、发布时套餐范围与共享额度，把历史可用条件写进摘要。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-09-14T09:16:35+08:00'
    method: independent_agent_then_author_standalone_read
    source_check: passed
    readability_check: passed
  last_content_review_at: '2026-09-14T09:16:35+08:00'
  last_figure_review_at: '2026-09-14T09:16:35+08:00'
---

# Claude 正式接入 Xcode 26

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E7%BC%96%E7%A8%8B%E4%B8%8E%E5%BC%80%E5%8F%91%E5%B7%A5%E5%85%B7)

> [官方原文](https://www.anthropic.com/news/claude-in-xcode) · Claude is now generally available in Xcode · 2025-09-15
> 中文摘要＋重点文字解读；关键内容及配图节选。

## 摘要

Anthropic 在 2025 年 9 月宣布 Claude Sonnet 4 正式接入 Xcode 26，开发者可在苹果的开发环境中用自然语言理解和修改项目代码。助手会收集项目上下文，并支持对话历史、附件、代码解释、文档生成及 SwiftUI 预览等功能。发布时支持包含 Claude Code 的 Pro、Max 订阅，以及 Team 和 Enterprise 的高级席位；Xcode 使用消耗跨平台共享额度的一部分。文章没有提供开发效率的量化测试，这些套餐和模型条件应按当时的发布快照理解。

## 重点文字解读

### 对话直接结合项目代码

编码助手自动收集项目上下文，并支持历史对话与附件；编码工具提供解释、文档生成、SwiftUI 预览和编辑。

图示：原文界面左侧是 Sonnet 4 对 SwiftUI 导航代码的解释，右侧是编辑器；它说明问答嵌入 IDE 的交互位置，不代表生成代码已通过测试。

*原文界面左侧是 Sonnet 4 对 SwiftUI 导航代码的解释，右侧是编辑器；它说明问答嵌入 IDE 的交互位置，不代表生成代码已通过测试。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/b980278079eb3c3ca177b99adf55e257696c13fd-1920x1080.png) · [出处](https://www.anthropic.com/news/claude-in-xcode)

### 账户与额度沿用既有订阅

发布时面向包含 Claude Code 的 Pro、Max 以及 Team、Enterprise 高级席位；Xcode 使用占共享额度的一部分。

## 适用条件与局限

这是发布时的产品快照，当前支持范围与设置应以最新官方文档为准；文章没有给出性能基准。

## 怎样理解与应用（AI 解读）

可以选一个小型 SwiftUI 界面，先让助手解释导航状态再修改，并自己运行预览验证。将上下文问答与实际编译结果分开记录，学习收益会更清楚。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：补充原文配图节选及来源。
- 2026-09-11：核对官方正文与重点配图，完成中文摘要和重点解读。
- 2026-09-14：完整审读官方正文，经独立代理逐句核对并单独检查摘要可读性；补足集成功能、发布时套餐范围与共享额度，把历史可用条件写进摘要。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
