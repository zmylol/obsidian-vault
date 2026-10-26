---
type: article
source: https://www.anthropic.com/research/glasswing-initial-update
source_aliases:
- https://www.anthropic.com/news/glasswing-initial-update
original_title: 'Project Glasswing: An initial update'
published: '2026-05-22'
collected: '2026-09-09'
updated: '2026-09-25'
last_checked: '2026-09-25'
category: 安全与对齐/网络防御与滥用追踪
source_section: Research
tags:
- cybersecurity
- reliability
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-09-25T09:25:15+08:00'
  source_read: true
  source_read_scope: 官方正文；关联论文、附件及引用文献不视作单独精读。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 实际查看既有原始漏斗图；1,900→1,726 是全部严重级别复核，区别于正文高危或严重子集 1,752→1,587；1,129
    直接报告项可能含误报，97 是上游补丁而非部署总数。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: 9cfde418a986e4a125aee50d9b43336d3f3b413ce310c6d1e6ace03ab2f62227
    evidence:
    - location: 9d44573c198f670a.txt:3–10（公告时间与披露边界）
      support: 这是 2026 年 5 月的初期进展；公开披露滞后于发现和修补，不能按公布候选数推定实际安全效果。
    - location: 9d44573c198f670a.txt:22–24（开源扫描与复核）
      support: 逾千项目、23,019 总候选、6,202 模型高危/严重候选；1,752 由六家独立公司或少量内部复核，1,587 有效、1,094
        确认高危/严重，约 3,900 是按现有比例外推。
    - location: 9d44573c198f670a.txt:26–35（验证、披露与修补瓶颈）
      support: 验证、披露和修补均需人力，且部署修复仍有滞后；披露、修补和公告数量与发现数明显不同。
    correction: 补清外部复核分母、有效漏洞与高严重性确认的区别及外推条件；将“外部研究者复核了 1,752 个”收紧为“主要由独立安全公司完成”，保留少量案例由
      Anthropic 自行复核的事实。；明确扫描模型为 Mythos Preview，并保留有效漏洞与高危/严重漏洞两个不同数量，以及外推值非逐项验证。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-09-25T09:25:15+08:00'
    method: Independent reviewer read full source and checked final summary claim
      by claim, then standalone readability; author separately inspected selected
      figures and performed final card read
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-09-25T09:25:15+08:00'
  last_figure_review_at: '2026-09-25T09:25:15+08:00'
  last_figure_review:
    at: '2026-09-25T09:25:15+08:00'
    method: local_original_and_official_media_comparison
    details: 实际查看既有原始漏斗图；1,900→1,726 是全部严重级别复核，区别于正文高危或严重子集 1,752→1,587；1,129 直接报告项可能含误报，97
      是上游补丁而非部署总数。
---

# Project Glasswing 的初步进展

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E7%BD%91%E7%BB%9C%E9%98%B2%E5%BE%A1%E4%B8%8E%E6%BB%A5%E7%94%A8%E8%BF%BD%E8%B8%AA)

> [官方原文](https://www.anthropic.com/research/glasswing-initial-update) · Project Glasswing: An initial update · 2026-05-22
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 汇报 Project Glasswing 的早期进展：Mythos Preview 在一千多个开源项目中报告 23,019 个候选漏洞，其中 6,202 个被模型评为高危或严重。该组中有 1,752 个已获复核，主要由独立安全公司完成；其中 1,587 个确认有效，1,094 个达到高危或严重等级。按当前复核比例外推的约 3,900 个高危或严重漏洞并非逐一确认。发现、验证、披露及部署修复之间仍有瓶颈，候选数量不能当作已实现的防护效果。

## 重点图文解读

### 候选与已确认不能混写

开放源码扫描产生 23,019 个候选，其中模型估为高或严重的有 6,202 个。在主要由独立安全公司、少量由 Anthropic 复核的 1,752 个高／严重候选中，1,587 个为真问题，1,094 个确认达到该严重性。 [原文依据](https://www.anthropic.com/research/glasswing-initial-update)

### 修复漏斗揭示积压

截至 5 月 22 日，流程图列出 1,596 个已向维护者报告、1,451 个已获回应、97 个已在上游修复；这与最初发现数相差很大。 [原文依据](https://www.anthropic.com/research/glasswing-initial-update)

![流程图覆盖全部严重级别：1,900 个外部复核候选中 1,726 个有效，另有按要求直接报告的路径。这个 90.8% 与正文高／严重子集的 90.6% 口径不同。](../../../98-附件/原文配图/6fdc241c59c6cfaaedd3.png)

*流程图覆盖全部严重级别：1,900 个外部复核候选中 1,726 个有效，另有按要求直接报告的路径。这个 90.8% 与正文高／严重子集的 90.6% 口径不同。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/7af1880d305b982764cfefc7dce87c677f1b0254-1634x1008.png) · [文章出处](https://www.anthropic.com/research/glasswing-initial-update)

### 需要把资源转向后续处理

项目与外部安全研究者、开源支持机构合作分诊，同时提供公开模型工具。合作伙伴报告的上万高／严重发现与开放源码扫描统计有不同范围。 [原文依据](https://www.anthropic.com/research/glasswing-initial-update)

## 适用条件与局限

未复核发现仍可能误报或严重性被高估，按样本推算约 3,900 个高／严重漏洞属于外推，不是全部人工确认。

## 怎样理解与应用（AI 解读）

安全项目看板应分列发现、验证、上游合并和用户安装四个阶段；用最后两项衡量实际风险下降。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：补充原文配图节选及来源。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-09-25：完整审读官方正文，经独立逐句核查与单独可读性检查；补清外部复核分母、有效漏洞与高严重性确认的区别及外推条件；将“外部研究者复核了 1,752 个”收紧为“主要由独立安全公司完成”，保留少量案例由 Anthropic 自行复核的事实。；明确扫描模型为 Mythos Preview，并保留有效漏洞与高危/严重漏洞两个不同数量，以及外推值非逐项验证。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
