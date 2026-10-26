---
type: article
source: https://www.anthropic.com/research/project-fetch-robot-dog
source_aliases: []
original_title: 'Project Fetch: Can Claude train a robot dog?'
published: '2025-11-12'
collected: '2026-09-09'
updated: '2026-10-14'
last_checked: '2026-10-14'
category: 科学与具身智能/机器人与物理控制
source_section: Research
tags:
- cybersecurity
- agents
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-10-14T12:37:50+08:00'
  source_read: true
  source_read_scope: 官方正文；关联论文、附件及引用文献不视作单独精读。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 已查看所选原图，逐一核对图中对象、比较条件及正文位置；本笔记只节选相关关键图。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: 主执行者第二遍审阅
    source_sha256: 8a746852b078bd068d0d546955354b86b9442d18b3e6fe27dfb39f44f1604aeb
    evidence:
    - location: 7e61e3d8245b71dd.txt L3–20
      support: 正文对象、方法与主要结果。
    - location: 7e61e3d8245b71dd.txt L21–60
      support: 正文条件、限制与适用范围。
    correction: 重新完整读取正文，补充具体结果与条件；独立代理不可用，按规则记录主执行者第二遍审阅。
    unresolved: []
    reviewed_at: '2026-10-14T12:37:50+08:00'
    method: 主执行者完整读取官方正文后逐句核对，再脱离标题和正文单读摘要；独立审阅代理本次不可用。
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-10-10T09:20:00+08:00'
---

# Project Fetch：Claude 辅助机器狗编程

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%9C%BA%E5%99%A8%E4%BA%BA%E4%B8%8E%E7%89%A9%E7%90%86%E6%8E%A7%E5%88%B6)

> [官方原文](https://www.anthropic.com/research/project-fetch-robot-dog) · Project Fetch: Can Claude train a robot dog? · 2025-11-12
> 中文摘要＋重点文字解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

八名非机器人专家分为有无 Claude 的两队编程控制机器狗，实验显示 AI 能帮助连接硬件和处理传感器，但未完成自主取球。

## 重点文字解读

### 在共同完成的任务上约节省一半时间

两队分别完成 8 项中的 7 项和 6 项；六项共同任务总时间为 193 与 392 分钟，较大差异来自连接和传感器工作。 [原文依据](https://www.anthropic.com/research/project-fetch-robot-dog)

图示：六项共同完成任务的总耗时比较：193 分钟对 392 分钟。图未包含任何一方都未完成的最终自主取球，不能说明端到端任务已经成功。

*六项共同完成任务的总耗时比较：193 分钟对 392 分钟。图未包含任何一方都未完成的最终自主取球，不能说明端到端任务已经成功。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/0d073513d5be90d96cfe696c6b15f4501bfbacfc-4584x2580.png) · [文章出处](https://www.anthropic.com/research/project-fetch-robot-dog)

### 更快不意味着每项都领先

无 AI 团队在部分手动控制和定位子任务更快；有 AI 团队做出的界面更丰富，也出现坐标处理、检测和运动指令错误。 [原文依据](https://www.anthropic.com/research/project-fetch-robot-dog)

### 团队互动也随工具变化

无 AI 团队更常相互提问，情绪分析更负面；有 AI 团队更多与模型配合。这是表现之外值得继续研究的学习与协作变化。 [原文依据](https://www.anthropic.com/research/project-fetch-robot-dog)

## 适用条件与局限

仅两队、一天、熟悉 AI 的公司员工便利样本，且部分任务获得提示或硬件条件不同，不能推算一般人的平均收益。

## 怎样理解与应用（AI 解读）

用 AI 学硬件时，每个动作先确认坐标、单位和实际距离；完成代码之后还需检验物理反馈与操作安全。

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
