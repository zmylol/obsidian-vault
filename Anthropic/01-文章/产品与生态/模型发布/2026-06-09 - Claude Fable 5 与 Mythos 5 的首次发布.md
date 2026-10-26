---
type: article
source: https://www.anthropic.com/news/claude-fable-5-mythos-5
source_aliases: []
original_title: Claude Fable 5 and Claude Mythos 5
published: '2026-06-09'
collected: '2026-09-09'
updated: '2026-10-06'
last_checked: '2026-10-06'
category: 产品与生态/模型发布
source_section: News
tags:
- products
- alignment
note_depth: 中文摘要与重点图文解读
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
    source_sha256: b2b82aa8d2757ce027deedbb7994e13189c722640ef1a1dda23eb7cb839a93a4
    evidence:
    - location: source-3.txt L3–12
      support: 发布范围、Fable/Mythos 定位与安全分流。
    - location: source-3.txt L13–22
      support: 科学与安全能力的评估限定。
    correction: 补充 Mythos 初期面向 Glasswing 网络安全伙伴，科学结果明确为内部评估或早期研究。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-10-06T09:20:00+08:00'
    method: 独立代理只看官方正文与摘要，逐句来源核对并单独复核可读性；主执行者最终单读定稿。
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-10-06T09:20:00+08:00'
---

# Claude Fable 5 与 Mythos 5 的首次发布

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%A8%A1%E5%9E%8B%E5%8F%91%E5%B8%83)

> [官方原文](https://www.anthropic.com/news/claude-fable-5-mythos-5) · Claude Fable 5 and Claude Mythos 5 · 2026-06-09
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2026 年 6 月推出 Fable 5 与受限访问的 Mythos 5，把更强的编码、科学和长程代理能力与新的安全分流机制一起发布。Fable 5 面向一般用户，标价每百万输入 10 美元、输出 50 美元；涉及网络安全、生物化学或模型蒸馏的请求可能由分类器转交 Opus 4.8，早期数据称超过 95% 会话无需回退。Mythos 5 初期通过 Project Glasswing 向网络安全伙伴开放，并计划向少量生物学研究者扩展；相关蛋白设计和科学假设结果仍属内部评估或早期研究，不能视作普遍成功率。

## 重点图文解读

### 能力表包含防护配置差异

发布表显示编码、知识工作和科研等多项进步，但合并列通常取两模型较高分；带星号项目的差距可能更大，Fable 回退后更接近 Opus 4.8，不能把全部分数都归给普通 Fable 使用。 [原文依据](https://www.anthropic.com/news/claude-fable-5-mythos-5)

![Fable 5/Mythos 5 合并基准表：顶部同列不表示所有使用配置相同。表下注明取较高分，星号项目受防护回退影响尤其明显。](../../../98-附件/原文配图/db05fe7524179386d0aa.png)

*Fable 5/Mythos 5 合并基准表：顶部同列不表示所有使用配置相同。表下注明取较高分，星号项目受防护回退影响尤其明显。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/1e65982497d7d4891219ed0e83141625a291b860-2600x2870.png) · [文章出处](https://www.anthropic.com/news/claude-fable-5-mythos-5)

### 分类器与回退构成发布防护

涉及受限网络、生物化学或蒸馏请求时，Fable 的分类器可让 Opus 4.8 接手并告知用户。Mythos 的放宽配置仅用于经过审核的专业访问计划。 [原文依据](https://www.anthropic.com/news/claude-fable-5-mythos-5)

### 访问与数据政策随后发生变化

原始发布提出 Mythos 级流量保留 30 天用于安全检测，不用于训练。页面更新另列 6 月 12 日暂停访问、7 月 1 日重新部署，因此首发订阅时段不可直接视为现行安排。 [原文依据](https://www.anthropic.com/news/claude-fable-5-mythos-5)

## 适用条件与局限

早期红队未发现通用越狱不是不可绕过证明。产品分数、模型本体能力和实际经过分类器的体验必须区分；后续数据政策另有 EFS 更新。

## 怎样理解与应用（AI 解读）

研究前沿模型发布时，至少同时记下底层模型、允许访问的能力、回退行为和当时政策，才能解释使用体验与基准为何不同。

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
