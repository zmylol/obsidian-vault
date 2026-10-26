---
type: article
source: https://www.anthropic.com/news/claude-opus-4-5
source_aliases: []
original_title: Introducing Claude Opus 4.5
published: '2025-11-24'
collected: '2026-09-09'
updated: '2026-10-04'
last_checked: '2026-10-04'
category: 产品与生态/模型发布
source_section: News
tags:
- products
- agents
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
    source_sha256: a1fa2f76cf6e10925ae53267243530888cb4d568cc5235ac56ae657f9a09029e
    evidence:
    - location: source-8.txt L4–5、L41–46
      support: Opus 4.5 的任务定位、effort、上下文管理、记忆与子代理协作。
    - location: source-8.txt L13–20、L43–46、L53–59
      support: 文章称其在多项领域达到 state-of-the-art；medium effort 匹配 Sonnet 4.5 的 SWE-bench
        Verified 最佳成绩并少用 76% 输出 token，high effort 再高 4.3 个百分点并少用 48%，这些口径依赖指定评测方法。
    - location: source-8.txt L21–40
      support: τ2-bench 的策略案例被评分为失败，并引出 reward hacking 与安全评估边界。
    correction: 按本次正文可核对内容删除无法核对的精确分数，改为“官方称在 SWE-bench Verified 达到领先表现”。
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

# Claude Opus 4.5 发布

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%A8%A1%E5%9E%8B%E5%8F%91%E5%B8%83)

> [官方原文](https://www.anthropic.com/news/claude-opus-4-5) · Introducing Claude Opus 4.5 · 2025-11-24
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2025 年 11 月发布 Claude Opus 4.5，主打复杂编码、长程代理和电脑使用，并加入 effort、上下文压缩、记忆与子代理协作。官方称其在 SWE-bench Verified 达到领先表现；中等 effort 匹配 Sonnet 4.5 最佳成绩且少用 76% 输出 token，高 effort 再高 4.3 个百分点并少用 48%，均依赖指定配置。τ2-bench 的越界式解法同时显示创造性与 reward hacking 风险。

## 重点图文解读

### 编程提升需要连同计算条件阅读

SWE-bench Verified 图显示 Opus 4.5 处于领先位置；当前正文抓取未保留图中可核对的精确分数，不能在此复述具体数值。内部两小时招聘测验超过历史候选人的结果使用了并行测试时计算，且不测协作等完整工程能力。 [原文依据](https://www.anthropic.com/news/claude-opus-4-5)

![Opus 4.5 发布页的 SWE-bench Verified 主结果比较；纵轴使用断轴，柱高视觉差异不能直接当作能力倍数。](../../../98-附件/原文配图/6344bfdf0cf6dad09948.png)

*Opus 4.5 发布页的 SWE-bench Verified 主结果比较；纵轴使用断轴，柱高视觉差异不能直接当作能力倍数。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/7022a87aeb6eab1458d68412bc927306224ea9eb-3840x2160.png) · [文章出处](https://www.anthropic.com/news/claude-opus-4-5)

### effort 让推理投入成为可调变量

官方在指定评测中发现中等 effort 可匹配 Sonnet 4.5 最佳成绩且减少 76% 输出 token；更高 effort 继续改善分数。上下文压缩、记忆和子代理也影响端到端表现。 [原文依据](https://www.anthropic.com/news/claude-opus-4-5)

### 产品侧支持持续工作

发布价为每百万输入 5 美元、输出 25 美元；Claude Code 计划模式、桌面多会话、长对话自动摘要，以及 Excel 与 Chrome 扩展共同更新。 [原文依据](https://www.anthropic.com/news/claude-opus-4-5)

## 适用条件与局限

输出 token 节省比例来自特定评测，不等于所有任务账单同比下降。自动安全审计与注入测试也只覆盖已测情景。

## 怎样理解与应用（AI 解读）

实际选择 effort 时应同时看成功率、耗时、token 和返工。复杂任务先定义验收条件，才能判断额外推理是否值得。

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
