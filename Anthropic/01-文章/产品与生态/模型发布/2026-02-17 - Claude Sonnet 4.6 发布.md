---
type: article
source: https://www.anthropic.com/news/claude-sonnet-4-6
source_aliases: []
original_title: Introducing Claude Sonnet 4.6
published: '2026-02-17'
collected: '2026-09-09'
updated: '2026-10-05'
last_checked: '2026-10-05'
category: 产品与生态/模型发布
source_section: News
tags:
- products
- agents
- context-engineering
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-10-05T09:20:00+08:00'
  source_read: true
  source_read_scope: 官方正文；关联论文、附件及引用文献不视作单独精读。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 已查看所选原图，逐一核对图中对象、比较条件及正文位置；本笔记只节选相关关键图。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: 独立审阅代理 summary_review_oct5
    source_sha256: b9b9e023f9549f2848b5c984b0233072fce13368f657901dfe95090a4c61be66
    evidence:
    - location: source-2.txt L2–7
      support: 发布、价格、能力与 1M beta。
    - location: source-2.txt L16–20
      support: Claude Code 约 70% 与 59% 偏好比较。
    - location: source-2.txt L11–15、L36
      support: OSWorld 受控条件与提示注入限制。
    correction: 将价格表述收窄为“从每百万输入 3 美元、输出 15 美元起”。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-10-05T09:20:00+08:00'
    method: 独立代理只看官方正文与摘要，逐句来源核对并单独复核可读性；主执行者最终单读定稿。
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-10-05T09:20:00+08:00'
---

# Claude Sonnet 4.6 发布

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%A8%A1%E5%9E%8B%E5%8F%91%E5%B8%83)

> [官方原文](https://www.anthropic.com/news/claude-sonnet-4-6) · Introducing Claude Sonnet 4.6 · 2026-02-17
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2026 年 2 月发布 Sonnet 4.6，升级编程、电脑操作和长上下文推理，提供百万 token 上下文测试版，起价仍为每百万输入 3 美元、输出 15 美元。在公司早期 Claude Code 测试中，用户约 70% 的比较偏好它而非 Sonnet 4.5，59% 偏好它而非 Opus 4.5；这些是偏好结果，不是任务成功率。电脑操作基准仍局限于受控任务，模型尚落后于最熟练的人类，实际部署仍须防范提示注入。

## 重点图文解读

### 电脑操作进步但仍有真实环境差距

发布图中 OSWorld/OSWorld-Verified 系列分数从 Sonnet 4.5 的 61.4% 到 Sonnet 4.6 的 72.5%。任务在受控软件环境中运行，真实网页与工作流程更复杂。 [原文依据](https://www.anthropic.com/news/claude-sonnet-4-6)

图示：Sonnet 电脑使用成绩随发布时间变化；图中混列 OSWorld 与 OSWorld-Verified 历史阶段，反映评测趋势，不能视为现实操作成功率保证。

*Sonnet 电脑使用成绩随发布时间变化；图中混列 OSWorld 与 OSWorld-Verified 历史阶段，反映评测趋势，不能视为现实操作成功率保证。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/1206645ef5a618dabce8587b472b21c67a30a0db-3840x1948.png) · [文章出处](https://www.anthropic.com/news/claude-sonnet-4-6)

### 开发体验强调先理解再修改

早期 Claude Code 测试中约 70% 偏好它而非 Sonnet 4.5，59% 偏好它而非 Opus 4.5。反馈集中在指令遵循、减少过度设计与较少虚报成功。 [原文依据](https://www.anthropic.com/news/claude-sonnet-4-6)

### 平台功能扩大有效任务范围

支持一百万 token beta、自适应及扩展思考、上下文压缩；搜索与抓取可用代码筛选结果，Excel 插件也加入 MCP 连接器。 [原文依据](https://www.anthropic.com/news/claude-sonnet-4-6)

## 适用条件与局限

偏好率不等于客观正确率。后续模型文章重跑了部分旧基准，引用本篇数字时应保留本篇方法与时间。

## 怎样理解与应用（AI 解读）

这篇适合与 Opus 4.6 并读：日常任务成本与高难度推理质量是不同选择维度，应用自己的代表性任务验证。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：补充原文配图节选及来源。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
