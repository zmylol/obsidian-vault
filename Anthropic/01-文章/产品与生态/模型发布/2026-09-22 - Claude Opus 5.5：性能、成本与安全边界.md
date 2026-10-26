---
type: article
source: https://www.anthropic.com/claude-opus-5-5
source_aliases: []
original_title: Claude Opus 5.5
published: '2026-09-22'
published_source: official_article
published_evidence: 官方正文标题下明确显示 September 22, 2026。
collected: '2026-09-23'
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
enriched_at: '2026-09-23'
quality_evidence:
  checked_at: '2026-09-23T09:17:38+08:00'
  source_read: true
  source_read_scope: 官方完整正文及同页图表说明；关联代码、论文和附件未单独复现或精读。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 实际查看官网 Terminal-Bench 4.0 图表、图例与邻近说明，提取原始 SVG 并保留原坐标、曲线和标签；将原站
    CSS 变为离线样式，浏览器再次实际查看。图例在邻近中文图注明示，未复现所有其他评测或视频。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: 215e34209577d4d9b173dfc86fce55d601126880800d3eb25b94b386c45f26c8
    evidence:
    - location: 第 4–11、39–46 行
      support: 9 月 22 日发布；典型工作负载默认设置费用低 40%，输入/输出单价低 20%、缓存读取低 60%，并减少 token 用量，输出更快。
    - location: 第 35–38 行
      support: 评测包含特定推理设置及生产防护；触发防护时网络任务由 Opus 4.8 接管，生物及前沿模型研发任务由 Opus 5 接管，部分外部评测不使用回退。
    - location: 第 221–228 行
      support: 部署包含网络、生物及反蒸馏防护；多数网络任务重定向，生物研发更宽访问需组织验证，网络验证计划当时尚待扩展。
    - location: 第 232–233 行
      support: 当时已在全部平台提供，包括 AWS、Google Cloud、Microsoft Azure 及 Claude Platform。
    correction: 补清发布时间、成本口径、评测条件与高风险任务访问边界
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
    details: 实际查看官网 Terminal-Bench 4.0 图表、图例与邻近说明，提取原始 SVG 并保留原坐标、曲线和标签；将原站 CSS 变为离线样式，浏览器再次实际查看。图例在邻近中文图注明示，未复现所有其他评测或视频。
---

# Claude Opus 5.5：性能、成本与安全边界

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%A8%A1%E5%9E%8B%E5%8F%91%E5%B8%83)

> [官方原文](https://www.anthropic.com/claude-opus-5-5) · Claude Opus 5.5 · 发布于 2026-09-22
> 中文摘要与重点图文解读，关键内容与配图节选；关联论文、代码与附件未单独精读或复现。

## 摘要

Anthropic 于 2026 年 9 月 22 日发布 Opus 5.5，称其在多数工作任务上接近 Fable 5.1，同时降低成本、加快输出。公司估计，典型工作负载采用默认设置时，费用比 Opus 5 低约 40%；这包含单价和用量变化，并非所有 token 单价都降 40%。模型已在 Claude、API 及主要云平台提供，高风险网络、生物与前沿模型研发任务仍受专门防护或较早模型接管。性能比较来自特定评测设置，不能保证所有实际任务都有同等收益。

## 重点图文解读

### 降成本包含单价与用量两部分

发布时标准输入、输出分别为每百万 token 4、20 美元，较 Opus 5 降 20%；缓存读取降至 0.20 美元。典型任务约降 40% 是公司默认设置测试的综合结果，实际账单还取决于任务和缓存使用。

### 性能应结合成本和推理强度阅读

下图节选原文内嵌图表；保留数据与坐标，离线字体采用系统替代。不同推理强度对应不同成本，不能把最高得分与默认价格拼成一个结果。

![Terminal-Bench 4.0：横轴为单次尝试成本（美元，对数刻度），纵轴为得分百分比。橙色 Opus 5.5、绿色 Fable 5.1、黄色 Opus 5、深灰 GPT-6 Astra、浅灰 GPT-5.6 Sol；橙线标出推理强度。默认 med 与高强度点不同，曲线不代表所有业务任务的成本。](../../../98-附件/原文配图/88b0ddda613993453234.svg)

*Terminal-Bench 4.0：横轴为单次尝试成本（美元，对数刻度），纵轴为得分百分比。橙色 Opus 5.5、绿色 Fable 5.1、黄色 Opus 5、深灰 GPT-6 Astra、浅灰 GPT-5.6 Sol；橙线标出推理强度。默认 med 与高强度点不同，曲线不代表所有业务任务的成本。* [原图所在章节](https://www.anthropic.com/claude-opus-5-5#performance-and-cost-effectiveness) · [文章出处](https://www.anthropic.com/claude-opus-5-5)

### 能力发布同时保留访问边界

多数网络安全任务转交 Opus 4.8，生物与前沿模型研发的防护可能转交 Opus 5。生命科学验证计划当时已接受申请，扩展网络验证仍是随后数周的计划。API 名称为 `claude-opus-5-5`。

## 适用条件与局限

公司评测、客户案例与现实普遍效果应分开。主评测启用生产防护；AutomationBench 特别不使用后备模型，触发防护计为失败。安全评估仍受模型可能识别测试环境等限制，不能据高分推断绝对安全。系统卡、链接论文和视频未单独精读或复现。

## 怎样理解与应用（AI 解读）

选型时用同一任务同时记录完成质量、总费用和实际执行模型，尤其检查防护是否触发了转交。

## 变更记录

- 2026-09-23：首次完整审读官方正文，经独立摘要复核后收录，核对配图与分类。
- 2026-09-29：回查发现官网 Computer use 表将 OSWorld 2.0 修正为 OSWorld 2.1；81.8% 等得分及 partial 标记未变。曲线推理标签仅调整大小写，既有摘要与所选 Terminal-Bench 图的数值不受影响。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
