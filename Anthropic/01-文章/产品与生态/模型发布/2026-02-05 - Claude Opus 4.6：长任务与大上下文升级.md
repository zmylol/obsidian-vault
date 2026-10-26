---
type: article
source: https://www.anthropic.com/news/claude-opus-4-6
source_aliases: []
original_title: Introducing Claude Opus 4.6
published: '2026-02-05'
collected: '2026-09-09'
updated: '2026-10-05'
last_checked: '2026-10-05'
category: 产品与生态/模型发布
source_section: News
tags:
- products
- context-engineering
- agents
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
    source_sha256: 18f4e0f01223f0873ac303260c8667301104bf0e856d33a1f74a56a15f587586
    evidence:
    - location: source-1.txt L3–16
      support: 发布日期、能力升级、1M beta、价格和平台。
    - location: source-1.txt L23–27
      support: MRCR v2 8-needle 76% 与 Sonnet 4.5 18.5%。
    - location: source-1.txt L48–57
      support: adaptive thinking、compaction 与 agent teams。
    correction: 将“八目标检索测试”改为“8-needle（八针）检索测试”，并明确高价条件属于 Claude Platform。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-10-05T09:20:00+08:00'
    method: 独立代理只看官方正文与摘要，逐句来源核对并单独复核可读性；主执行者最终单读定稿。
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-10-05T09:20:00+08:00'
---

# Claude Opus 4.6：长任务与大上下文升级

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%A8%A1%E5%9E%8B%E5%8F%91%E5%B8%83)

> [官方原文](https://www.anthropic.com/news/claude-opus-4-6) · Introducing Claude Opus 4.6 · 2026-02-05
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2026 年 2 月发布 Opus 4.6，改进长程编程，并在发布时仅向 Claude 开发平台提供百万 token 上下文测试版。官方在 MRCR v2 百万上下文、八目标检索测试中报告得分 76%，Sonnet 4.5 为 18.5%，不等于所有长文任务的准确率。配套推出自适应思考、上下文压缩和代理团队预览；普通 API 单价保持每百万输入 5 美元、输出 25 美元，超过 20 万 token 的提示另收高价。

## 重点图文解读

### 知识工作与长上下文均有改善

GDPval-AA 的 Elo 为 1606，高于图中 Opus 4.5 的 1416；8-needle、1M 的 MRCR v2 得分为 76%，说明指定长文本检索任务改善。Elo 与正确率不是同一指标。 [原文依据](https://www.anthropic.com/news/claude-opus-4-6)

![GDPval-AA 知识工作 Elo 比较：Opus 4.6 为 1606。这是相对评判形成的分数，不是 1606 个任务或百分比准确率。](../../../98-附件/原文配图/cfbecd927462974bcc13.png)

*GDPval-AA 知识工作 Elo 比较：Opus 4.6 为 1606。这是相对评判形成的分数，不是 1606 个任务或百分比准确率。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/6e29759b50e8b3a8363b38b1f573d854df968671-3840x2160.png) · [文章出处](https://www.anthropic.com/news/claude-opus-4-6)

### 推理控制与压缩支持更长会话

API 提供 low、medium、high、max effort；自适应思考决定何时深入推理，压缩在接近阈值时替换旧上下文。首发超过 200K 的长提示采用额外价格档位。 [原文依据](https://www.anthropic.com/news/claude-opus-4-6)

### 评测结果包含后续修正

2 月 23 日改进作弊检测后，HLE with tools 从 53.1% 修订为 53.0%。安全评估新增用户福祉与更复杂恶意行为测试，但仍需结合系统卡。 [原文依据](https://www.anthropic.com/news/claude-opus-4-6)

## 适用条件与局限

一百万 token 容量不保证所有细节都正确使用。工具、压缩总预算和评测框架影响结果，不能跨不同运行条件直接排序。

## 怎样理解与应用（AI 解读）

长文知识库仍应维护索引、出处与局部核查；上下文变大能减少搬运，却不能取代证据组织。

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
