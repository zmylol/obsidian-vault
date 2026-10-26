---
type: article
source: https://www.anthropic.com/research/attack-navigator
source_aliases: []
original_title: 'Mapping AI-enabled cyber threats: Insights from the LLM ATT&CK Navigator'
published: '2026-06-03'
collected: '2026-09-09'
updated: '2026-09-23'
last_checked: '2026-09-23'
category: 安全与对齐/网络防御与滥用追踪
source_section: Research
tags:
- cybersecurity
- evaluations
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-09-23T09:17:38+08:00'
  source_read: true
  source_read_scope: 官方正文；关联论文、附件及引用文献不视作单独精读。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 实际查看前 25 类技术的原图及正文：13,873 为观察次数，577 次恶意软件观察不是 560 个账户。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: 6f98394542080bcec019afafb809f3d51f187c9333152f9d91244451dc146ae3
    evidence:
    - location: 第 8–18 行
      support: 2025 年 3 月至 2026 年 3 月的 832 个账户是被封禁账户的一个可充分映射子集，不能等同全部恶意账户或 13,873
        次行为观察。
    - location: 第 20–31 行
      support: ARiES 综合威胁、模型帮助和影响，以加法保留调查信号，用于确定值得关注的对象，不预测攻击是否成功。
    - location: 第 49–59 行
      support: 真实网内操作与较高风险分数相关，技术熟练程度及技术数量关联较弱；中等及以上约 33.5% 升至 56.1%，检测改进可能贡献变化。
    - location: 第 62–78 行
      support: 代理串联行为及实时决策不能由技术频次表完整表达，作者建议扩展 ATT&CK，并与 MITRE 讨论。
    correction: 补清样本、风险变化及评分用途，避免把相关趋势写成因果
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-09-23T09:17:38+08:00'
    method: Independent reviewer read full source and checked final summary claim
      by claim, then standalone readability; author separately inspected selected
      figures and performed final card read
    source_check: passed
    readability_check: passed
  last_content_review_at: '2026-09-23T09:17:38+08:00'
  last_figure_review_at: '2026-09-23T09:17:38+08:00'
  last_figure_review:
    at: '2026-09-23T09:17:38+08:00'
    method: local_original_and_official_media_comparison
    details: 实际查看前 25 类技术的原图及正文：13,873 为观察次数，577 次恶意软件观察不是 560 个账户。
---

# LLM ATT&CK Navigator 的威胁分析方法

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E7%BD%91%E7%BB%9C%E9%98%B2%E5%BE%A1%E4%B8%8E%E6%BB%A5%E7%94%A8%E8%BF%BD%E8%B8%AA)

> [官方原文](https://www.anthropic.com/research/attack-navigator) · Mapping AI-enabled cyber threats: Insights from the LLM ATT&CK Navigator · 2026-06-03
> 中文摘要＋重点文字解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 将 2025 年 3 月至 2026 年 3 月间 832 个被封禁恶意账户的活动，映射到网络攻击技术分类 ATT&CK，并设计 ARiES 分数来安排调查优先级。样本中，中等及以上风险账户占比从前半年约 33% 升至后半年约 56%；参与真实网络操作与较高风险相关，单看技术数量或操作者熟练程度则解释有限。作者认为还需记录代理如何串联行动和自主决策。封禁样本有选择偏差，检测改进也可能影响趋势；分数不是攻击成功概率，变化不能证明 AI 导致了风险上升。

## 重点文字解读

### 样本只覆盖足够可分析的封禁账户

研究选择 832 个账户，记录 13,873 项观察，覆盖 14 类战术与 482 个独特技术及子技术；不是所有 Claude 用户或全部网络攻击的代表样本。 [原文依据](https://www.anthropic.com/research/attack-navigator)

图示：前 25 类技术按观察次数排序，分母为 13,873 项观察。图中恶意软件开发的 577 次不是涉及该行为的 560 个账户，二者统计单位不同。

*前 25 类技术按观察次数排序，分母为 13,873 项观察。图中恶意软件开发的 577 次不是涉及该行为的 560 个账户，二者统计单位不同。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/874b2d4a58a39facdf11e94d3a5a5b738b97f9eb-1920x1080.png) · [文章出处](https://www.anthropic.com/research/attack-navigator)

### 风险分数有明确设计目的

ARiES 将威胁（最高 35 分）、模型使能程度（最高 35 分）与影响（最高 30 分）相加，用于确定调查优先级。它不是攻击成功概率；技术数量相近的账户可能有很不相同的编排能力。 [原文依据](https://www.anthropic.com/research/attack-navigator)

### 活动呈现向更深操作迁移的迹象

前后半年中风险及以上占比约由 33% 到 56%，但检测改进也可能影响变化。作者主张增加对多步骤自主执行与决策的观察。 [原文依据](https://www.anthropic.com/research/attack-navigator)

## 适用条件与局限

已封禁且信息充分的样本具有选择偏差；自定义分数含模型判断，变化不能单独证明 AI 导致风险增长的因果关系。

## 怎样理解与应用（AI 解读）

建立威胁分类时把账户、行为次数与事件分开，并补充谁在决策、代理执行到哪一步等跨技术信息。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-09-23：完整审读官方正文，经独立逐句核查与单独可读性检查；补清样本、风险变化及评分用途，避免把相关趋势写成因果。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
