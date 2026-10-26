---
type: article
source: https://www.anthropic.com/features/project-deal
source_aliases: []
original_title: 'Project Deal: our Claude-run marketplace experiment'
published: '2026-04-24'
published_source: official_article_body
published_evidence: '专题正文明确 posted: April 24, 2026；December 2025 为实验时间，不是发布日期。通过 Project
  Swap 正文引用发现。'
collected: '2026-09-25'
updated: '2026-09-26'
last_checked: '2026-09-26'
category: 工程与Agent/长程与多智能体
source_section: Research
tags:
- agents
- multi-agent
- economics
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
quality_evidence:
  checked_at: '2026-09-26T09:24:56+08:00'
  source_read: true
  source_read_scope: 官方完整正文及同页脚注；外链论文、计算文件与附件未单独精读或复现。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 实际查看官方 HTML 流程动画的六个步骤与四场模型配置，以及折叠车价格对比；保存两张关键图区域节选，按原文顺序放置，说明唯一真实结算场及个例与总体比较的区别。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: 56c404817cc25c8dc579abb1425b1dfbe9cf77ec56b32ab62adf53f39056acf6
    evidence:
    - location: 67bcc7f0597adb97.txt:21、47–48、76–80
      support: 69 名员工各获 100 美元预算；四场中 A、D 全 Opus，B、C 混合；问卷后才公开只有 Run A 真实交换与结算，186
        笔、略超 4,000 美元。
    - location: 67bcc7f0597adb97.txt:103–107、158–161
      support: 混合场 Opus 平均多成交约两笔；价格比较基于已成交的配对或重复成交物品，脚注明确成交并非随机。摘要没有将模型差异说成所有物品都更易卖出。
    - location: 67bcc7f0597adb97.txt:111–112、163–164
      support: 公平性评分分别为 4.05、4.06，近乎相同；满意度和场次偏好另有未达显著的检验，摘要未把公平性错误写成显著性结论。
    - location: 67bcc7f0597adb97.txt:19、146–148
      support: 自选员工与补贴环境是试点限制；真实商业激励及对抗性可能不同，未证明普遍福利或损失。
    correction: 保留已通过事实复核的摘要，重核原文并补齐关键视觉。；价格图注只声明整个实验的真实结算场，避免把示例价格误认成已实际付款。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-09-26T09:24:56+08:00'
    method: Full-source drafting followed by independent sentence-source and standalone
      readability review; optional precision edits rechecked against source by the
      primary author, followed by final independent confirmation and card-only reread
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-09-26T09:24:56+08:00'
  last_figure_review_at: '2026-09-26T09:24:56+08:00'
  last_figure_review:
    at: '2026-09-26T09:24:56+08:00'
    method: official_browser_visual_capture
    details: 实际查看官方 HTML 流程动画的六个步骤与四场模型配置，以及折叠车价格对比；保存两张关键图区域节选，按原文顺序放置，说明唯一真实结算场及个例与总体比较的区别。
enriched_at: '2026-09-26'
---

# Project Deal：代理交易中的模型差异

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E9%95%BF%E7%A8%8B%E4%B8%8E%E5%A4%9A%E6%99%BA%E8%83%BD%E4%BD%93)

> [官方原文](https://www.anthropic.com/features/project-deal) · Project Deal: our Claude-run marketplace experiment · 发布于 2026-04-24
> 中文摘要与重点文字解读，关键内容与配图节选；关联论文、代码与附件未单独精读或复现。

## 摘要

Anthropic 的 Project Deal 让 69 名员工委托 Claude 代理买卖闲置物品，用四个平行市场比较模型能力。只有全 Opus 4.5 的 Run A 实际结算，共达成 186 笔交易，总额超过 4,000 美元。在混用 Opus 与 Haiku 的场次中，Opus 代理通常成交更多、议价结果更好，但参与者对交易公平性的评分几乎相同。混合场次未实际结算，价格分析也只覆盖已成交物品，不能把差异直接推广为现实市场中的普遍损失；员工样本和每人 100 美元补贴进一步限制了外推。

## 重点文字解读

### 四个市场只有一场实际结算

69 名员工获得每人 100 美元额度，向代理说明闲置物品与购买需求，代理自行在市场中交涉。A、D 场全部使用 Opus 4.5，B、C 场随机混用 Opus 与 Haiku 4.5；只有 A 场的付款和实物交易最终落实，其余用于反事实比较。

图示：原网页流程图节选：访谈、代理分配、四市场部署、议价、确认与实物交换。A/D 为全 Opus，B/C 混用 Opus 与 Haiku；图以一名参与者的代理说明分配，只有 A 场最终付款并交换实物。

*原网页流程图节选：访谈、代理分配、四市场部署、议价、确认与实物交换。A/D 为全 Opus，B/C 混用 Opus 与 Haiku；图以一名参与者的代理说明分配，只有 A 场最终付款并交换实物。* [原图来源](https://www.anthropic.com/features/project-deal)

### 交易数量与议价结果都要限定场次

实际结算场达成 186 笔交易、总额超过 4,000 美元。混合模型场次中，Opus 平均多成交约两笔；同一物品在两场都售出的 44 组配对中，Opus 卖方价格平均高 3.64 美元。这里的比较不代表较弱模型用户实际承担了同等金额损失。

图示：原网页价格图节选：纵轴为美元，同一辆需维修的折叠车、同一对人类买卖双方，由 Haiku 卖方议得 38 美元、Opus 卖方议得 65 美元。整个实验只有 Run A 真实结算；这是单件示例，不能当成全部物品的平均差距。

*原网页价格图节选：纵轴为美元，同一辆需维修的折叠车、同一对人类买卖双方，由 Haiku 卖方议得 38 美元、Opus 卖方议得 65 美元。整个实验只有 Run A 真实结算；这是单件示例，不能当成全部物品的平均差距。* [原图来源](https://www.anthropic.com/features/project-deal)


### 已成交价格不能代表全部市场机会

跨四场、对多次成交物品的回归也观察到 Opus 卖得更贵、买得更便宜。但是否成交并非随机，模型可能找到不同机会。作者也未发现更强硬提示在控制要价后的显著收益，提示措辞并非随机分配，不能据此断言它不起作用。

### 主观感受没有显著反映模型差距

参与者的公平性均值几乎相同，满意度评分差异不显著，说明本实验中感受与量化结果可以不一致。调查中的付费意愿属于自述；代理聊天中出现的人类生活描述也不能当成真实经历。

## 适用条件与局限

低风险、自选员工与补贴环境不同于日常商业市场，未测试成熟的对抗行为。混合场结果不实际结算；已成交样本存在选择问题，未显著的调查差异也不证明两模型完全等效。网页实验流程与价格图已实际核对，节选置于相应讨论旁。

## 怎样理解与应用（AI 解读）

代理交易记录可同时保存成交率、同类物品价格、失败机会和用户满意度；只看“大家感觉公平”会漏掉实际差异。正式付款前还应单独核对授权和交付条件，这一建议属于本笔记的应用理解。

## 变更记录

- 2026-09-25：年度历史补录；正文与摘要完成独立核查，网页关键视觉待重试。
- 2026-09-26：完整审读正文，通过独立摘要与可读性复核；保留已通过事实复核的摘要，重核原文并补齐关键视觉。；价格图注只声明整个实验的真实结算场，避免把示例价格误认成已实际付款。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
