---
type: article
source: https://www.anthropic.com/news/enterprise-frontier-safeguards
source_aliases: []
original_title: Developing Enterprise Frontier Safeguards with our customers
published: '2026-09-01'
collected: '2026-09-09'
updated: '2026-09-19'
last_checked: '2026-10-01'
category: 安全与对齐/攻击与模型防护
source_section: News
tags:
- alignment
- policy
- products
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-09-19T09:11:25+08:00'
  source_read: true
  source_read_scope: 官方正文；关联论文、附件及引用文献不视作单独精读。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 实际查看已有 3840×4644 PNG：请求、客户云存储、滚动监测、客户安全团队与 Anthropic 告警元数据分支对应；说明为拟议产品流程，正文另保留各项控制可选的条件。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: 175d752d727fa1b7f2cbb12f90be9b76debf0589bb882d3ab6aeac881dedb7e0
    evidence:
    - location: 2026-09-19 正文缓存 b085c7f1762bfee8.txt，第 4、10–12 行
      support: EFS 仍计划秋季分阶段推出；跨时间与账户检测需要保留可关联的数据。
    - location: 2026-09-19 正文缓存 b085c7f1762bfee8.txt，第 19、21–25 行
      support: 客户可在自身云账户存储监测数据、掌握密钥与访问规则；异常交客户审核，不要求 Anthropic 员工人工查看。
    - location: 2026-09-19 正文缓存 b085c7f1762bfee8.txt，第 28–32 行
      support: 客户存储、客户密钥、自动审核分别 opt-in；Anthropic 不收费，客户承担云商的存储、读写与出站流量费。
    correction: 补齐日志在客户环境留存、三个分别可选的控制和历史推出阶段，避免把 ZDR 当作全面无日志。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-09-19T09:11:25+08:00'
    method: full_source_read_then_independent_sentence_source_review_and_standalone_readability_rereview_then_primary_final_card_read
    source_check: passed
    readability_check: passed
  last_content_review_at: '2026-09-19T09:11:25+08:00'
  last_figure_review_at: '2026-09-19T09:11:25+08:00'
  last_figure_review:
    at: '2026-09-19T09:11:25+08:00'
    method: local_original_and_official_media_comparison
    details: 实际查看已有 3840×4644 PNG：请求、客户云存储、滚动监测、客户安全团队与 Anthropic 告警元数据分支对应；说明为拟议产品流程，正文另保留各项控制可选的条件。
---

# 与客户共同开发 Enterprise Frontier Safeguards

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%94%BB%E5%87%BB%E4%B8%8E%E6%A8%A1%E5%9E%8B%E9%98%B2%E6%8A%A4)

> [官方原文](https://www.anthropic.com/news/enterprise-frontier-safeguards) · Developing Enterprise Frontier Safeguards with our customers · 2026-09-01
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2026 年 9 月提出 Enterprise Frontier Safeguards，试图兼顾企业数据控制与跨会话滥用检测。方案允许监测日志保存在客户云账户，由客户掌握密钥和访问策略；自动系统分析一段时间内的活动，将异常交给客户人员审核，无须 Anthropic 员工人工查看。客户存储、客户密钥和全自动审核分别自愿启用，因此零留存并非整个系统不保存日志。发布时仍计划于当年秋季分阶段推出；Anthropic 不另收费，但客户云端存储及读写等费用仍由云商收取。

## 重点图文解读

### 跨会话监测需要一定的数据窗口

单条请求可能无法显示严重滥用模式，因此方案分析滚动窗口中的活动、输入和输出。选择相应控制时，数据可保存在客户云账户，使用客户密钥、访问策略和审计控制。 [原文依据](https://www.anthropic.com/news/enterprise-frontier-safeguards)

### 企业审查内容，供应商接收告警元数据

自动监测向企业安全团队发出告警；示意流程中 Anthropic 接收类别与严重性，不接收客户内容，也不要求由 Anthropic 人工审查内容。 [原文依据](https://www.anthropic.com/news/enterprise-frontier-safeguards)

图示：请求活动进入客户云内的滚动监测流程，告警由客户安全团队审查；通往 Anthropic 的另一条路径只传递告警类别和严重性。图示为拟议产品流程。

*请求活动进入客户云内的滚动监测流程，告警由客户安全团队审查；通往 Anthropic 的另一条路径只传递告警类别和严重性。图示为拟议产品流程。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/021fdfc765d03eaac26f5d2aa9cb06111b7a9297-3840x4644.png) · [文章出处](https://www.anthropic.com/news/enterprise-frontier-safeguards)

### 发布时仍是分阶段落地计划

9 月 1 日公告称当年秋季稍后分阶段推出，过渡期符合资格的客户可在 Fable 5 和 5.1 使用 ZDR。客户自有存储、客户密钥与全自动审核分别自愿启用，不改变模型行为、API 价格或限速；EFS 本身不另收费，客户云端存储、读写与传出费用另计。 [原文依据](https://www.anthropic.com/news/enterprise-frontier-safeguards)

## 适用条件与局限

公告不代表所有账户当日可用。供应商侧零保留不等于任何位置都不留数据，部署前仍须核对客户侧保存范围和云服务安排。

## 怎样理解与应用（AI 解读）

评估企业 AI 数据方案时，逐项记录谁存储、谁解密、谁审查、保存多久以及谁承担费用，比只看‘零保留’标签更清楚。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-09-19：完整审读官方正文，经独立逐句核查与单独可读性检查；补齐日志在客户环境留存、三个分别可选的控制和历史推出阶段，避免把 ZDR 当作全面无日志。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
