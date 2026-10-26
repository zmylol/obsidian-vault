---
type: article
source: https://www.anthropic.com/news/enabling-claude-code-to-work-more-autonomously
source_aliases: []
original_title: Enabling Claude Code to work more autonomously
published: '2025-09-29'
collected: '2026-09-09'
updated: '2026-10-04'
last_checked: '2026-10-04'
category: 产品与生态/编程与开发工具
source_section: News
tags:
- agents
- reliability
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-10-04T09:23:21+08:00'
  source_read: true
  source_read_scope: 完整读取官方正文；外链论文、附件、视频或交互日志未作为本篇正文单独精读；网页指令与代码未执行。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 已查看所选原图，逐一核对图中对象、比较条件及正文位置；本笔记只节选相关关键图。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: 2bc1d49e03dda68fd758e462322c65d0ff4334809e3f3c993db5b95ad1665a47
    evidence:
    - location: source-4.txt L4–12
      support: VS Code 扩展、终端更新及 Agent SDK 的工具、上下文、权限、子代理和 hooks。
    - location: source-4.txt L14–17
      support: 检查点在每次模型修改前保存，可恢复代码、对话或两者，但不覆盖用户改动与 bash 命令。
    - location: source-4.txt L18–28
      support: 子代理、hooks、后台任务与版本控制建议共同支撑长期任务。
    correction: 无需修改，定稿与草稿一致。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-10-04T09:23:21+08:00'
    method: 独立代理只看官方正文与摘要，逐句核对事实后单独复核可读性；主执行者最终单读定稿。
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-10-04T09:23:21+08:00'
  last_figure_review_at: '2026-10-04T09:23:21+08:00'
---

# Claude Code 增强自主执行能力

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E7%BC%96%E7%A8%8B%E4%B8%8E%E5%BC%80%E5%8F%91%E5%B7%A5%E5%85%B7)

> [官方原文](https://www.anthropic.com/news/enabling-claude-code-to-work-more-autonomously) · Enabling Claude Code to work more autonomously · 2025-09-29
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2025 年 9 月为 Claude Code 增加 VS Code 扩展、终端 2.0、检查点和 Agent SDK，让同一套工具、上下文与权限框架支持更长的自主开发。扩展提供侧栏和行内 diff，SDK 加入子代理与 hooks，后台任务可并行运行。检查点不覆盖用户改动或 bash 外部副作用，仍需配合版本控制和权限审查。

## 重点图文解读

### 图形界面与终端共同展示工作状态

VS Code beta 提供侧栏与行内 diff；终端改进状态显示和 Ctrl+r 提示历史搜索。Agent SDK 提供同源工具、上下文管理和权限机制，并支持子代理与 hooks。 [原文依据](https://www.anthropic.com/news/enabling-claude-code-to-work-more-autonomously)

图示：Claude Code 2.0 终端示例显示最近活动、模型与功能入口，使长任务的状态更容易查看；截图中的路径和活动属于演示。

*Claude Code 2.0 终端示例显示最近活动、模型与功能入口，使长任务的状态更容易查看；截图中的路径和活动属于演示。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/3613f360926fae004521197488623465eb0cd751-1920x1035.png) · [文章出处](https://www.anthropic.com/news/enabling-claude-code-to-work-more-autonomously)

### 检查点的恢复范围有限

每次模型修改前保存状态，可用 Esc 两次或 /rewind 恢复代码、对话或两者。检查点不覆盖用户修改或 bash 命令，文章明确建议配合版本控制。 [原文依据](https://www.anthropic.com/news/enabling-claude-code-to-work-more-autonomously)

## 适用条件与局限

回退模型编辑不能撤销任意外部副作用。后台任务、子代理和 hooks 提供执行能力，仍需按项目定义检查与权限。

## 怎样理解与应用（AI 解读）

把可恢复性作为长任务前提：代码检查点、版本控制和外部操作日志各有不同作用，应分别安排。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：补充原文配图节选及来源。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-10-04：完成官方正文审读，经来源与摘要可读性独立复核；摘要按本篇机制、数字与限制修订。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
