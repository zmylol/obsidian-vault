---
type: article
source: https://www.anthropic.com/news/claude-sonnet-5
source_aliases: []
original_title: Introducing Claude Sonnet 5
published: '2026-06-30'
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
    source_sha256: 109e74f46b4e02df002ba7a68f24d9adb0ea72351b2e1700aacdea66e7c49642
    evidence:
    - location: source-4.txt L17–25
      support: 安全评估、网络安全能力、默认防护与价格。
    - location: source-4.txt L27–35
      support: 永久价格、tokenizer 与重算基准的说明。
    correction: 将“复杂网络能力”改为“复杂网络安全能力”，并补充永久价格、tokenizer 倍率和评测方法重算限定。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-10-06T09:20:00+08:00'
    method: 独立代理只看官方正文与摘要，逐句来源核对并单独复核可读性；主执行者最终单读定稿。
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-10-06T09:20:00+08:00'
---

# Claude Sonnet 5：更低成本的 Agent 能力

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%A8%A1%E5%9E%8B%E5%8F%91%E5%B8%83)

> [官方原文](https://www.anthropic.com/news/claude-sonnet-5) · Introducing Claude Sonnet 5 · 2026-06-30
> 中文摘要＋重点文字解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2026 年 6 月发布 Sonnet 5，定位为更具代理性的 Sonnet，在编码、工具使用、知识工作和长任务上接近 Opus 4.8，同时将价格降至每百万输入 2 美元、输出 10 美元。官方称其安全性整体优于 Sonnet 4.6，并默认启用网络安全防护；但在开发软件漏洞利用等复杂网络安全任务上明显弱于 Opus 级模型。页面还说明更新后的 tokenizer 可能让相同输入增加约 1.0–1.35 倍 token，部分旧基准也因评测方法变化而被重算。

## 重点文字解读

### 比较完整成本曲线而非一个最高分

BrowseComp 曲线中 Sonnet 5 在较低预算已有提升，提高 effort 后可接近 Opus 4.8。图的横轴是每任务美元成本且为对数刻度，纵轴为通过率。 [原文依据](https://www.anthropic.com/news/claude-sonnet-5)

图示：BrowseComp 的成本—通过率曲线：橙色 Sonnet 5、黄色 Opus 4.8、灰色 Sonnet 4.6。图使用 Sonnet 5 旧标准价，8 月价格调整后实际费用更低。

*BrowseComp 的成本—通过率曲线：橙色 Sonnet 5、黄色 Opus 4.8、灰色 Sonnet 4.6。图使用 Sonnet 5 旧标准价，8 月价格调整后实际费用更低。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/cd0df787f39b6408dcba539fba93f817f2f3c0b4-3840x2160.png) · [文章出处](https://www.anthropic.com/news/claude-sonnet-5)

### 价格与方法都曾修订

8 月 10 日更新把每百万输入 2 美元、输出 10 美元优惠价改为长期价格；图仍按 3/15 美元估算。6 月 30 日还修正 BrowseComp 方法，采用压缩与工具调用的标准长预算设置。 [原文依据](https://www.anthropic.com/news/claude-sonnet-5)

### 迁移与安全应分别验证

新 tokenizer 可能使输入 token 变为原先约 1.0–1.35 倍。行为审计总体优于 Sonnet 4.6，但仍弱于部分 Opus/Mythos；危险网络能力也较低。 [原文依据](https://www.anthropic.com/news/claude-sonnet-5)

## 适用条件与局限

旧价绘制的图不能直接作为当前精确账单。跨代 OSWorld 与 HLE 分数有重跑和评分器变化，不能只按发布日期连线比较。

## 怎样理解与应用（AI 解读）

为自己常用任务记录成功率和完整费用，再选 effort。知识库中保留图表计价前提，后续价格变化时就不会误读。

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
