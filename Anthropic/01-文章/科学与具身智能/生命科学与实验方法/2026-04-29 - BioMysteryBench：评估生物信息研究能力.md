---
type: article
source: https://www.anthropic.com/research/Evaluating-Claude-For-Bioinformatics-With-BioMysteryBench
source_aliases: []
original_title: Evaluating Claude’s bioinformatics research capabilities with BioMysteryBench
published: '2026-04-29'
collected: '2026-09-09'
updated: '2026-09-24'
last_checked: '2026-09-24'
category: 科学与具身智能/生命科学与实验方法
source_section: Research
tags:
- science
- evaluations
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-09-24T09:18:38+08:00'
  source_read: true
  source_read_scope: 官方正文；关联论文、附件及引用文献不视作单独精读。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 已查看原图 1、2、3，核对 76/23 题分组、82.6%/29.6% 五次均值及成功次数分布；图 3 横轴为题数，不误写为百分比。其余配图未全部收录。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: b13d90a6327dfbc5d2e5cc5864eadfc7c3eb91605511ae91510fa50a42ff16eb
    evidence:
    - location: 6c5ade233b3666fd.txt:22–26、36（基准构造）
      support: 99 题来自真实生物信息数据，有实验或元数据等依据的答案；模型可用工具与数据库，按最终答案评分；作者提供验证笔记本说明信号存在。
    - location: 6c5ade233b3666fd.txt:39–49（人类基线及模型试验）
      support: 每题最多由五位专家独立尝试，76 题至少一人解出；剔除 4 道有问题的题后保留 23 道困难题，准确率按每题五次试验平均。
    - location: 原图 0d8d5c75106a5d53a1ea.png（Human-solvable set，已实际查看）；原图 aca11a8b02c7712f69b4.png（Human-difficult
        set，已实际查看）
      support: 图中分别标注 76 题组 Mythos Preview 82.6% 与 23 题组 29.6%；摘要的“约 30%”是正确四舍五入。
    - location: 6c5ade233b3666fd.txt:59、62–69（不确定性与重复成功率）
      support: 验证笔记本不保证模型或人类可从头找到答案；困难题更常只在五次中的一两次成功；作者仍希望构建更长、更真实的科研任务。
    correction: 补清两组分母、重复试验与专家困难的范围；将“模型各运行五次”明确为“模型对每题各尝试五次”，避免将重复次数误读为整个模型或整个基准的统计单位。；补充困难题的实质限制：验证数据含有信号并不保证可从头求出答案；继续限定为受试专家未解出，保留重复成功率与完整科研流程的边界。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-09-24T09:18:38+08:00'
    method: Independent reviewer read full source and checked final summary claim
      by claim, then standalone readability; author separately inspected selected
      figures and performed final card read
    source_check: passed
    readability_check: passed
  last_content_review_at: '2026-09-24T09:18:38+08:00'
  last_figure_review_at: '2026-09-24T09:18:38+08:00'
  last_figure_review:
    at: '2026-09-24T09:18:38+08:00'
    method: local_original_and_official_media_comparison
    details: 已查看原图 1、2、3，核对 76/23 题分组、82.6%/29.6% 五次均值及成功次数分布；图 3 横轴为题数，不误写为百分比。其余配图未全部收录。
---

# BioMysteryBench：评估生物信息研究能力

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E7%94%9F%E5%91%BD%E7%A7%91%E5%AD%A6%E4%B8%8E%E5%AE%9E%E9%AA%8C%E6%96%B9%E6%B3%95)

> [官方原文](https://www.anthropic.com/research/Evaluating-Claude-For-Bioinformatics-With-BioMysteryBench) · Evaluating Claude’s bioinformatics research capabilities with BioMysteryBench · 2026-04-29
> 中文摘要＋重点文字解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

BioMysteryBench 用真实生物信息数据构建 99 道有可核验答案的问题，允许模型调用工具，并按最终答案评分。每题最多由五名专家尝试，76 题被至少一人解出，另 23 题经检查保留为专家困难题；模型对每题各尝试五次。Mythos Preview 在两组上的平均准确率分别为 82.6% 和约 30%，能解出部分受试专家未解出的题，但困难题上的成功更不稳定。验证数据含有信号并不能保证可从头求出答案，基准成绩也不代表开放式科研全流程已可靠。

## 重点文字解读

### 基准把数据分析落到可验证答案

每题由领域专家提供问题、数据、真实答案及验证分析，覆盖 DNA、RNA、蛋白质组等。模型可以调用分析工具和数据库；评测主要判断最终答案，不能据此确认整条分析路径都正确。 [原文依据](https://www.anthropic.com/research/Evaluating-Claude-For-Bioinformatics-With-BioMysteryBench)

### 分开看两组题的成绩

研究以参与测试的专家是否解出题目分组，每个模型每题重复五次。Mythos Preview 在两组的表现差距很大，说明一般分析能力提升与攻克困难研究问题仍是不同层次。 [原文依据](https://www.anthropic.com/research/Evaluating-Claude-For-Bioinformatics-With-BioMysteryBench)

图示：专家至少一人解出的 76 题：横轴为准确率，Mythos Preview 平均 82.6%；每题运行五次，误差线按题内重复抽样估计，反映本评测的不确定性。

*专家至少一人解出的 76 题：横轴为准确率，Mythos Preview 平均 82.6%；每题运行五次，误差线按题内重复抽样估计，反映本评测的不确定性。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/291077c3785708a54dbb4421db3751b1d1c4ba84-1920x1080.png) · [文章出处](https://www.anthropic.com/research/Evaluating-Claude-For-Bioinformatics-With-BioMysteryBench)

### 专家困难题的得分边界

困难题常只在部分尝试成功，研究讨论了领域知识与多种分析策略的组合。这里的人类困难是特定专家在给定条件下未解出，不能说所有人类都无法解决。 [原文依据](https://www.anthropic.com/research/Evaluating-Claude-For-Bioinformatics-With-BioMysteryBench)

图示：另 23 道专家困难题：Mythos Preview 平均准确率为 29.6%，每题运行五次；分母与上一图不同，不能把两组百分比直接相加。

*另 23 道专家困难题：Mythos Preview 平均准确率为 29.6%，每题运行五次；分母与上一图不同，不能把两组百分比直接相加。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/0aed26a846ccd67d813a2c14f78069216671c8e3-1920x1080.png) · [文章出处](https://www.anthropic.com/research/Evaluating-Claude-For-Bioinformatics-With-BioMysteryBench)

### 偶尔成功还不等于稳定复现

原图进一步分解每题五次尝试的成功次数：Mythos 在专家已解组有 60 题五次全对，困难组仅 4 题五次全对。分组大小不同，比较时需同时看题数与分母。

图示：每行对应一个模型，横轴为题数，颜色表示每题五次尝试成功 0–5 次；左侧共 76 题、右侧共 23 题，困难组中稳定成功的题目明显更少。

*每行对应一个模型，横轴为题数，颜色表示每题五次尝试成功 0–5 次；左侧共 76 题、右侧共 23 题，困难组中稳定成功的题目明显更少。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/3840cd87380589c9f00c31d5b9334639ebfb5303-1920x1080.png) · [文章出处](https://www.anthropic.com/research/Evaluating-Claude-For-Bioinformatics-With-BioMysteryBench)

## 适用条件与局限

99 题是人工构建且有客观答案的任务集；未覆盖所有开放式科研判断。已有分析能验证信号存在，也不保证求解者能从问题描述重新找出答案。专家参与、工具权限、尝试次数及评分方式都影响结果，关联数据和论文未独立复现。

## 怎样理解与应用（AI 解读）

学习重点是把探索和验证分开：允许模型尝试多条分析路线，但最终保留可重跑的分析、数据来源和独立核验结果。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：补充原文配图节选及来源。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-09-24：完整审读官方正文，经独立逐句核查与单独可读性检查；补清两组分母、重复试验与专家困难的范围；将“模型各运行五次”明确为“模型对每题各尝试五次”，避免将重复次数误读为整个模型或整个基准的统计单位。；补充困难题的实质限制：验证数据含有信号并不保证可从头求出答案；继续限定为受试专家未解出，保留重复成功率与完整科研流程的边界。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
