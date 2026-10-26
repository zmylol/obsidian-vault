---
type: article
source: https://www.anthropic.com/claude-sonnet-5-5
source_aliases: []
original_title: Claude Sonnet 5.5
published: '2026-09-28'
published_source: official_article
published_evidence: 官网正文显示 September 28, 2026，News 推荐卡片日期一致。
collected: '2026-09-29'
updated: '2026-09-29'
last_checked: '2026-10-04'
category: 产品与生态/模型发布
source_section: News
tags:
- Anthropic
- Claude
- 模型发布
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-29'
quality_evidence:
  checked_at: '2026-09-29T09:15:52+08:00'
  source_read: true
  source_read_scope: 官方完整主文与同页脚注；外链论文、政策和附件未单独精读，网页代码未执行或复现。
  summary_and_interpretation: true
  evidence_and_limits: true
  standard: summary-key-figures-v1
  figure_status: verified_key_figures
  figure_evidence: 实际查看官网 Terminal-Bench 4.0 图、图例和设置；保存原始 SVG 坐标与曲线，核对当前 CSS 颜色并离线渲染查看。蓝色Sonnet5.5、橙色Opus5.5、浅绿Sonnet5、灰色GPT-5.6
    Sol；其余评测图和演示视频仅按同页说明核对，不作为独立实验结论。
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: 209adf1006b3cc5bf98e13af5cf03d5822c974877c87ad90260de956aeb83a54
    evidence:
    - location: 4e3ca8a95d366330.txt:2,4–13
      support: 2026年9月28日发布；日常边界清晰任务定位，复杂开放工作Opus5.5更强；输出30%以上提速、测试每任务最多省30%，token价不变。
    - location: 4e3ca8a95d366330.txt:33–34,100–115
      support: 节省来自较少token，成本与性能随任务及effort变化，应用默认Medium、平台默认High。
    - location: 4e3ca8a95d366330.txt:118–124
      support: 网络安全防护针对较高风险任务并回退Sonnet5；常规开发不受影响，安全测试不是全面无风险证明。
    - location: 4e3ca8a95d366330.txt:125–132
      support: 已在各平台提供；关闭thinking者迁移须用between_tools；同页脚注列出评测设置及部分基准版本限制，摘要未将具体基准无条件外推。
    correction: 改为“高风险网络安全任务会回退到 Sonnet 5”。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-09-29T09:15:52+08:00'
    method: 独立审阅代理逐句核对完整官方主文，脱离标题与正文单独复核可读性；三处修订后再核验，主执行者最后单读定稿。
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-09-29T09:15:52+08:00'
  last_figure_review_at: '2026-09-29T09:15:52+08:00'
  last_figure_review:
    at: '2026-09-29T09:15:52+08:00'
    method: local_original_and_official_media_comparison
    details: 实际查看官网 Terminal-Bench 4.0 图、图例和设置；保存原始 SVG 坐标与曲线，核对当前 CSS 颜色并离线渲染查看。蓝色Sonnet5.5、橙色Opus5.5、浅绿Sonnet5、灰色GPT-5.6
      Sol；其余评测图和演示视频仅按同页说明核对，不作为独立实验结论。
---

# Claude Sonnet 5.5：日常任务的速度与成本

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%A8%A1%E5%9E%8B%E5%8F%91%E5%B8%83)

> [官方原文](https://www.anthropic.com/claude-sonnet-5-5) · Claude Sonnet 5.5 · 发布于 2026-09-28
> 中文摘要与重点图文解读，关键内容与配图节选；关联论文、代码与附件未单独精读或复现。

## 摘要

Anthropic 于 2026 年 9 月 28 日发布 Sonnet 5.5，定位日常编程与知识工作，复杂开放任务仍更适合 Opus 5.5。公司报告新模型输出速度比 Sonnet 5 快逾 30%，测试中每任务费用最多低 30%，原因是用量减少，token 单价未变。模型已在主要平台提供；高风险网络安全任务会回退到 Sonnet 5，原先关闭思考的开发者迁移时须改用 between_tools 设置。这些性能和成本收益取决于任务及推理设置。

## 重点图文解读

### 分数要与推理强度、任务成本一起看

原文用成本曲线比较各档设置。低强度适合日常迭代，提高强度通常会增加成本；个别评测也可能因超时或额外修改而降分，不能据最高分推断所有任务都更好。

![Terminal-Bench 4.0：横轴为每次尝试成本（美元，对数刻度），纵轴为得分百分比。蓝色 Sonnet 5.5、橙色 Opus 5.5、浅绿 Sonnet 5、灰色 GPT-5.6 Sol；蓝线标记推理强度。Sonnet 5.5 的 Med 与 Max 是不同成本和得分的设置，不能合并比较。](../../../98-附件/原文配图/73b50d2d01fe5ab78ea6.svg)

*Terminal-Bench 4.0：横轴为每次尝试成本（美元，对数刻度），纵轴为得分百分比。蓝色 Sonnet 5.5、橙色 Opus 5.5、浅绿 Sonnet 5、灰色 GPT-5.6 Sol；蓝线标记推理强度。Sonnet 5.5 的 Med 与 Max 是不同成本和得分的设置，不能合并比较。* [原图所在章节](https://www.anthropic.com/claude-sonnet-5-5#performance) · [文章出处](https://www.anthropic.com/claude-sonnet-5-5)

### 省费用来自较少用量

发布时每百万输入、输出 token 分别为 2、10 美元，缓存读取为 0.20 美元，与 Sonnet 5 相同。Claude 应用及 Claude Code 默认 Medium，开发平台默认 High，比较账单时应保持设置一致。

### 安全回退与迁移条件影响实际体验

高风险网络安全请求会交给 Sonnet 5；生物防护也可能误拦正常请求。原先关闭思考的开发者须迁移到 `between_tools`，不能照搬旧参数。

## 适用条件与局限

收益来自公司测试与特定基准，客户评价不是统一对照实验。安全评估无法排除所有失败；同页脚注披露部分外部评测使用了存在结构化输出问题的预发布部署。系统卡、迁移文档和演示视频未单独精读或复现。

## 怎样理解与应用（AI 解读）

用自己的代表任务同时记录质量、耗时、费用和实际响应模型，再决定是否迁移；特别区分输出速度与完成整项任务的时间。

## 变更记录

- 2026-09-29：首次完整审读官方正文，经独立摘要复核后收录，核对配图与分类。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
