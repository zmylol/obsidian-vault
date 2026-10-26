---
type: article
source: https://www.anthropic.com/research/project-fetch-phase-two
source_aliases: []
original_title: 'Project Fetch: Phase two'
published: '2026-06-18'
collected: '2026-09-09'
updated: '2026-09-22'
last_checked: '2026-09-22'
category: 科学与具身智能/机器人与物理控制
source_section: Research
tags:
- cybersecurity
- agents
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-09-22T09:16:37+08:00'
  source_read: true
  source_read_scope: 官方正文；关联论文、附件及引用文献不视作单独精读。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 实际查看原文四任务总用时图，核对 9:35 为分秒、三次平均、181/361 分钟、18.9 倍与无 AI 团队提示条件。任务视频未逐段审阅，实验未复现。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: 56516fd8ff709f3246e104f478033bf65def34c696a17ca1b36b5eacd245cb71
    evidence:
    - location: 开头方法段与四任务总用时原图
      support: 三次试验、四项共同完成任务；图示 9:35、181 分钟、18.9 倍，旧团队最高版本 Opus 4.1。
    - location: Researcher involvement 段
      support: 人工连接设备、初始提示、审批命令和允许下一任务，非完全无人操作。
    - location: 自主取球段（After Opus 4.7 was finished…）
      support: 模型能移动到球后，但对球位置的精细控制失败，没有把球推回起点。
    correction: 补齐四项任务与三次试验的比较口径，明确人工审批及最终取球失败，保留软件编程进展与可靠物理控制之间的区别。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-09-22T09:16:37+08:00'
    method: Independent reviewer checked full source and selected original figures,
      then standalone readability; author final card read
    source_check: passed
    readability_check: passed
  last_content_review_at: '2026-09-22T09:16:37+08:00'
  last_figure_review_at: '2026-09-22T09:16:37+08:00'
  last_figure_review:
    at: '2026-09-22T09:16:37+08:00'
    method: local_original_and_official_media_comparison
    details: 实际查看原文四任务总用时图，核对 9:35 为分秒、三次平均、181/361 分钟、18.9 倍与无 AI 团队提示条件。任务视频未逐段审阅，实验未复现。
---

# Project Fetch 第二阶段：机器狗自主控制的进展

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%9C%BA%E5%99%A8%E4%BA%BA%E4%B8%8E%E7%89%A9%E7%90%86%E6%8E%A7%E5%88%B6)

> [官方原文](https://www.anthropic.com/research/project-fetch-phase-two) · Project Fetch: Phase two · 2026-06-18
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Project Fetch 第二阶段让 Claude Opus 4.7 通过电脑编写程序，连接并控制一只机器狗。在此前两个人类团队都完成的四项任务上，模型三次试验平均用时 9 分 35 秒，约为使用旧版 Claude 的团队耗时的十九分之一。不过，研究者仍需接入设备、审批命令和推进任务；模型也没能完成自主将球推回起点。结果说明这组软件接入和控制编程任务进步明显，不能据此认为机器狗已能可靠地独立行动。

## 重点图文解读

### 比较的是明确的任务子集

对摄像头、激光雷达、控制程序和定位四项共同任务，模型三次平均约 9 分 35 秒，旧有 AI 团队为 181 分钟，无 AI 团队为 361 分钟。旧团队使用的最高版本是 Opus 4.1；四项之外的最终自主推球返回任务仍失败。 [原文依据](https://www.anthropic.com/research/project-fetch-phase-two)

图示：四项共同完成的任务总用时：Opus 4.7 三次平均 9 分 35 秒，旧 Team Claude 为 181 分钟，无 AI 团队为 361 分钟；后者含一次提示。18.9 倍对比限于这四项任务，不包含自主取球。

*四项共同完成的任务总用时：Opus 4.7 三次平均 9 分 35 秒，旧 Team Claude 为 181 分钟，无 AI 团队为 361 分钟；后者含一次提示。18.9 倍对比限于这四项任务，不包含自主取球。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/0424a5a4ed31f7891e4048d091aefa52f36862cf-1999x1092.png) · [文章出处](https://www.anthropic.com/research/project-fetch-phase-two)

### 自主仍有人类设置和批准

研究者连接笔记本、提供初始任务、批准命令和进入下一任务；模型负责软件实现，实验没有重新训练底层关节控制策略。 [原文依据](https://www.anthropic.com/research/project-fetch-phase-two)

### 接通硬件与闭环操控有距离

模型较快获取传感器和写出有效代码，却难以根据球的位移持续微调动作，最终取球任务仍未成功。 [原文依据](https://www.anthropic.com/research/project-fetch-phase-two)

## 适用条件与局限

模型只做三次试验，与上一阶段历史团队比较；不代表所有机器人任务或底层控制获得同样提升。

## 怎样理解与应用（AI 解读）

评估物理代理应把软件准备、感知、规划和持续控制拆开，避免把前期连接速度当成完整机器人能力。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：补充原文配图节选及来源。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-09-22：完整审读官方正文，经独立逐句核查与单独可读性检查；补齐四项任务与三次试验的比较口径，明确人工审批及最终取球失败，保留软件编程进展与可靠物理控制之间的区别。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
