---
type: article
source: https://www.anthropic.com/news/claude-opus-4-8
source_aliases: []
original_title: Introducing Claude Opus 4.8
published: '2026-05-28'
collected: '2026-09-09'
updated: '2026-10-06'
last_checked: '2026-10-06'
category: 产品与生态/模型发布
source_section: News
tags:
- products
- agents
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-10-06T09:20:00+08:00'
  source_read: true
  source_read_scope: 官方正文；关联论文、附件及引用文献不视作单独精读。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 已查看所选原图，逐一核对图中对象、比较条件及正文位置；本笔记只节选相关关键图。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: 独立审阅代理 summary_review_oct5
    source_sha256: eedc931fe5205292e65bbf48b88be0d17e51c85cc88daaa67a6bfb66bb37ef00
    evidence:
    - location: source-2.txt L2–9
      support: 发布日期、动态工作流、Fast Mode 与价格。
    - location: source-2.txt L11–16
      support: 代码工作流与受控评测说明。
    - location: source-2.txt L20–24
      support: 安全和不对齐行为比较。
    correction: 保留动态工作流和 Fast Mode 为预览/计费选项，并说明评测受配置限制。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-10-06T09:20:00+08:00'
    method: 独立代理只看官方正文与摘要，逐句来源核对并单独复核可读性；主执行者最终单读定稿。
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-10-06T09:20:00+08:00'
---

# Claude Opus 4.8 与动态工作流更新

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%A8%A1%E5%9E%8B%E5%8F%91%E5%B8%83)

> [官方原文](https://www.anthropic.com/news/claude-opus-4-8) · Introducing Claude Opus 4.8 · 2026-05-28
> 中文摘要＋重点文字解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2026 年 5 月发布 Opus 4.8，常规价格保持每百万输入 5 美元、输出 25 美元，并加入努力程度控制、Claude Code 动态工作流和更快的 Fast Mode。动态工作流可在研究预览中并行运行数百个子代理，帮助完成大规模代码迁移；官方还称它让模型更少放过自己代码中的缺陷，并在对齐评估中较 Opus 4.7 有更低的不对齐行为。Fast Mode 提速约 2.5 倍，按每百万输入 10 美元、输出 50 美元计费；相关评测和安全结论仍取决于具体配置与评测环境。

## 重点文字解读

### 能力改善并非每个榜单都领先

发布表中 SWE-Bench Pro 为 69.2%，高于 Opus 4.7 的 64.3%；Terminal-Bench 2.1 为 74.6%，低于图中 GPT-5.5 的 78.2%。比较时要逐任务看条件。 [原文依据](https://www.anthropic.com/news/claude-opus-4-8)

图示：Opus 4.8 发布表逐项比较编码、推理、电脑使用和知识工作。HLE 分为有工具与无工具两种条件，各行指标不能互换。

*Opus 4.8 发布表逐项比较编码、推理、电脑使用和知识工作。HLE 分为有工具与无工具两种条件，各行指标不能互换。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/a9007019094f217e98cb8261a2765d7646c01708-2600x1392.png) · [文章出处](https://www.anthropic.com/news/claude-opus-4-8)

### 诚实性改善关系到能否发现失败

文章称其约为前代四分之一的概率会对自己写的代码缺陷不作说明，并更愿意标明不确定性。这比单纯输出更多内容更关系到协作可信度。 [原文依据](https://www.anthropic.com/news/claude-opus-4-8)

### 长任务与费用控制一起推出

动态工作流研究预览支持大量子代理，网页与 Cowork 可选择 effort。发布时普通输入/输出为每百万 5/25 美元，fast mode 为 10/50 美元，文章称约 2.5 倍速度。 [原文依据](https://www.anthropic.com/news/claude-opus-4-8)

## 适用条件与局限

客户内部基准和产品证言口径各异，动态工作流规模不保证有效协同。图中 OSWorld 历史分数还存在版本及重跑说明，不能和早期文章直接拼接。

## 怎样理解与应用（AI 解读）

代理验收应检查是否主动发现缺失输入、是否承认失败，以及最终成果能否复核；更好的协作不只是更快生成。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
