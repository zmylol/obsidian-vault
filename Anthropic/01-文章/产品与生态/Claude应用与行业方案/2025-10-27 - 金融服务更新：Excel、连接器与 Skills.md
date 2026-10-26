---
type: article
source: https://www.anthropic.com/news/advancing-claude-for-financial-services
source_aliases: []
original_title: Advancing Claude for Financial Services
published: '2025-10-27'
collected: '2026-09-09'
updated: '2026-10-04'
last_checked: '2026-10-04'
category: 产品与生态/Claude应用与行业方案
source_section: News
tags:
- products
- tool-use
note_depth: 中文摘要与重点图文解读
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
    source_sha256: 3044c64c787e48a90a28d16ea51469c0173270dfe1d24fdf16bdce07f418528c
    evidence:
    - location: source-2.txt L4–11
      support: 公告列出 Excel 研究预览、Finance Agent 55.3% 及 1,000 名初始用户反馈计划。
    - location: source-2.txt L13–21
      support: Aiera、LSEG、Moody’s 等连接器提供实时或受控金融资料。
    - location: source-2.txt L22–30、L32–33
      support: 六类金融 Skills 面向 Max、Enterprise、Teams 预览，客户反馈为公司或合作方陈述。
    correction: 将 55.3% 归因修正为 Vals AI 的 Finance Agent 基准；客户反馈另来自公司或合作方。
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

# 金融服务更新：Excel、连接器与 Skills

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#Claude%E5%BA%94%E7%94%A8%E4%B8%8E%E8%A1%8C%E4%B8%9A%E6%96%B9%E6%A1%88)

> [官方原文](https://www.anthropic.com/news/advancing-claude-for-financial-services) · Advancing Claude for Financial Services · 2025-10-27
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2025 年 10 月扩展 Claude for Financial Services，推出 Excel 研究预览、市场连接器和 6 个金融 Skills，覆盖 DCF、可比公司、尽调和盈利分析。Claude for Excel 可读取、修改和创建工作簿；LSEG、Moody’s、Aiera 等连接器提供金融数据。55.3% 是 Vals AI 基准，客户反馈来自公司或合作方，不能代表所有任务。

## 重点图文解读

### 在单元格层面解释修改

Excel 插件研究预览可读写工作簿、追踪变更并用单元格引用解释工作。截图把硬编码输入标蓝、公式保留黑色，方便分析师区分数据与计算。 [原文依据](https://www.anthropic.com/news/advancing-claude-for-financial-services)

图示：Excel 示例展示 ACME GRILLE 利润表及右侧修改说明：输入与公式按颜色区分，并可定位到具体单元格区域。

*Excel 示例展示 ACME GRILLE 利润表及右侧修改说明：输入与公式按颜色区分，并可定位到具体单元格区域。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/450687b3c7a1189eb1a650ade77588c56ca01461-2560x1440.png) · [文章出处](https://www.anthropic.com/news/advancing-claude-for-financial-services)

### 数据与专业流程一起接入

新增 Aiera、Third Bridge、LSEG、Moody’s 等来源；Skills 覆盖可比公司、DCF、尽调资料包、公司简介、财报分析和覆盖研究。文中 Sonnet 4.5 的 Finance Agent 基准得分为 55.3%。 [原文依据](https://www.anthropic.com/news/advancing-claude-for-financial-services)

## 适用条件与局限

首发 Excel 预览面向前 1,000 名符合条件的 Max、Enterprise、Teams 用户。基准成绩不代表任意工作簿正确，估值假设、公式和来源仍需复核。

## 怎样理解与应用（AI 解读）

金融笔记应把数据来源、模型假设和计算结果分开。最值得模仿的是单元格溯源与变更检查，而不是直接接受生成的估值。

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
