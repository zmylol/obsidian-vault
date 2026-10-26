---
type: article
source: https://www.anthropic.com/engineering/april-23-postmortem
source_aliases: []
original_title: An update on recent Claude Code quality reports
published: '2026-04-23'
collected: '2026-09-09'
updated: '2026-09-14'
last_checked: '2026-09-14'
category: 工程与Agent/评估与可靠性
source_section: Engineering
tags:
- reliability
- evaluations
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
    source_sha256: f490cfd8a0a40b49f3d07f8107f2851a40af9ad34a41f7317e42d108089bd68e
    evidence:
    - location: 开头三项问题与修复时间
      support: 涉及 Code、SDK、Cowork；公司明确 API 与推理层未受影响，4 月 20 日 v2.1.116 已处理。
    - location: A caching optimization that dropped prior reasoning
      support: 会话闲置超过一小时后，本应一次清理却变成每轮清理，造成遗忘、重复与缓存未命中。
    - location: Going forward
      support: 改进公开版本试用、跨仓库代码审查，以及逐模型评测、消融与渐进发布。
    correction: 明确受影响产品、三项改动的因果链和历史修复版本，避免把 API 与产品运行框架混为一谈；独立复核后补回一小时触发条件，明确持续清除属于实现故障。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-09-14T09:16:35+08:00'
    method: independent_agent_then_author_standalone_read
    source_check: passed
    readability_check: passed
  last_content_review_at: '2026-09-14T09:16:35+08:00'
  last_figure_review_at: '2026-09-14T09:16:35+08:00'
---

# Claude Code 近期质量问题复盘

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E8%AF%84%E4%BC%B0%E4%B8%8E%E5%8F%AF%E9%9D%A0%E6%80%A7)

> [官方原文](https://www.anthropic.com/engineering/april-23-postmortem) · An update on recent Claude Code quality reports · 2026-04-23
> 中文摘要＋重点文字解读；关键内容及配图节选。

## 摘要

Anthropic 将 2026 年春季 Claude Code、Agent SDK 和 Cowork 的部分质量下降追溯到三项产品改动：降低默认推理强度、会话闲置超过一小时后因故障在每轮持续清除旧推理，以及压缩回复长度的系统提示。它们影响的模型和时间段不同，总体表现为遗忘、重复和编码质量波动；公司称 API 与推理服务层未受影响。相关改动已回退或修复，截至 4 月 20 日在 v2.1.116 中全部处理。后续措施包括扩大公开版本内部试用、跨仓库审查和逐模型提示词评测，这次复盘不能解释所有质量波动。

## 重点文字解读

### 默认强度改变了质量与延迟取舍

团队为减少等待把默认强度从 high 改为 medium，随后因反馈回退。

图示：横轴为总 token，纵轴为内部编码评估得分；两条线比较 Opus 4.6 与 4.7 的推理档位。相同档位不等于相同耗费，图中没有直接绘制用户等待时间。

*横轴为总 token，纵轴为内部编码评估得分；两条线比较 Opus 4.6 与 4.7 的推理档位。相同档位不等于相同耗费，图中没有直接绘制用户等待时间。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/de3bcf9733b61f57234d8c45e663b1bd48677ea1-3840x2160.png) · [出处](https://www.anthropic.com/engineering/april-23-postmortem)

### 一次性清理变成每轮遗忘

闲置超过一小时后，本应只清理一次的旧推理被持续丢弃，带来重复行为和缓存未命中。

### 提示词也需要回归与消融

限制简洁度的指令在更广评估中暴露质量下降并被撤回；后续增加逐模型评估与公开版本内部试用。

## 适用条件与局限

复盘涉及当时的产品版本和内部评估，不能推断所有质量波动都是同一原因。

## 怎样理解与应用（AI 解读）

遇到“模型变笨”，先记录模型版本、推理档位、会话是否闲置及提示词版本。用同一任务分别重开会话和延续会话，可帮助区分产品状态问题与模型能力变化。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：扩充摘要、具体要点与应用解读。
- 2026-09-11：核对官方正文与重点配图，完成中文摘要和重点解读。
- 2026-09-14：完整审读官方正文，经独立代理逐句核对并单独检查摘要可读性；明确受影响产品、三项改动的因果链和历史修复版本，避免把 API 与产品运行框架混为一谈；独立复核后补回一小时触发条件，明确持续清除属于实现故障。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
