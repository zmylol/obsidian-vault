---
type: article
source: https://www.anthropic.com/news/claude-haiku-4-5
source_aliases: []
original_title: Introducing Claude Haiku 4.5
published: '2025-10-15'
collected: '2026-09-09'
updated: '2026-10-04'
last_checked: '2026-10-04'
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
    source_sha256: 861dcfbbc59ba87ceeb5a5fbfc4b65cd9188ff4e2bce5c804e6fae2b0671879e
    evidence:
    - location: source-5.txt L4–9
      support: Haiku 4.5 的速度、成本、API 价格和 Sonnet 协作定位。
    - location: source-5.txt L11、L20–28
      support: SWE-bench 73.3% 的 500 题、50 次、无测试时计算和 128K 思考预算方法。
    - location: source-5.txt L13–18
      support: 安全评估、ASL-2 及可用平台范围。
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

# Claude Haiku 4.5：小模型的速度与成本取舍

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%A8%A1%E5%9E%8B%E5%8F%91%E5%B8%83)

> [官方原文](https://www.anthropic.com/news/claude-haiku-4-5) · Introducing Claude Haiku 4.5 · 2025-10-15
> 中文摘要＋重点文字解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2025 年 10 月发布 Claude Haiku 4.5，把接近 Sonnet 4 的编码水平放到更低成本档位：API 价格为每百万输入 1 美元、输出 5 美元，官方称速度超过两倍。SWE-bench Verified 报告 73.3%，基于 500 题平均 50 次、无测试时计算和 128K 思考预算；文章还提出 Sonnet 拆解计划、多个 Haiku 并行执行。安全评估按 ASL-2 发布，仍需按工作负载验证。

## 重点文字解读

### 成本下降与能力接近同时出现

发布价为每百万输入 1 美元、输出 5 美元。SWE-bench Verified 得分 73.3%，使用 500 题、50 次试验平均及 128K 思考预算；图中 Sonnet 4 为 72.7%。 [原文依据](https://www.anthropic.com/news/claude-haiku-4-5)

图示：Haiku 4.5 在指定 SWE-bench Verified 设置下达到 73.3%，接近图中 Sonnet 4 的 72.7%；这是编程任务成绩而非所有能力等价。

*Haiku 4.5 在指定 SWE-bench Verified 设置下达到 73.3%，接近图中 Sonnet 4 的 72.7%；这是编程任务成绩而非所有能力等价。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/1a27d7a85f953c5a0577dc19b507d6e1b93444d5-1920x1080.png) · [文章出处](https://www.anthropic.com/news/claude-haiku-4-5)

### 不同模型可按任务分工

文章提出 Sonnet 4.5 制定复杂计划、多个 Haiku 4.5 执行子任务的模式；安全评估将 Haiku 4.5 归为 ASL-2，自动行为审计上的风险低于其前代。 [原文依据](https://www.anthropic.com/news/claude-haiku-4-5)

## 适用条件与局限

速度与成本比依赖工作负载，不能把客户测试的倍数当作统一指标。ASL-2 是特定风险分级，也不是所有场景的可靠性认证。

## 怎样理解与应用（AI 解读）

轻量模型适合边界清晰且易验证的任务。把复杂判断留给协调者，并测量整个流程的质量和总成本，比单看每 token 价格更有用。

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
