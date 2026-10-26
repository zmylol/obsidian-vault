---
type: article
source: https://www.anthropic.com/research/project-pilot
source_aliases: []
original_title: 'Project Pilot: Can AI control a drone?'
published: '2026-07-24'
collected: '2026-09-09'
updated: '2026-09-20'
last_checked: '2026-09-20'
category: 科学与具身智能/机器人与物理控制
source_section: Research
tags:
- agents
- evaluations
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-09-20T09:11:21+08:00'
  source_read: true
  source_read_scope: 官方正文；关联论文、附件及引用文献不视作单独精读。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 完整核对正文及 HTML 的图表与视频说明，实际查看既有分任务进展图，并下载、解码、查看最佳与平均表现对比原图；两图按原文先后就近解释。走廊视觉处理示意未选入，五段视频未逐段观看，不据静态说明声称已验证飞行过程。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: 180cc319f3ae87d3a1e45b6c8c7cf47517f720da7077e3262f2f4c2937b6e9fa
    evidence:
    - location: 2026-09-20 正文缓存 47fb1c35deeeb68f.txt · 第 11–25 行
      support: Drone-Bench 将任务拆成五部分，并用人类与 AI 共同开发、可完成整体任务的算法作为基线；该基线并非纯人类表现或最优能力上限。
    - location: 2026-09-20 正文缓存 47fb1c35deeeb68f.txt · 第 27–33 行
      support: 测试涵盖 15 个模型；Fable 5 的环境重建较弱，地图错误也使真实无人机不能自主跨房间导航。
    - location: 2026-09-20 正文缓存 47fb1c35deeeb68f.txt · 第 38–40 行
      support: 十次模拟中至少一次达到基线的任务有四项，而平均表现仅有三项；实验限于单一办公室、低速及少数人员。
    - location: 2026-09-20 正文缓存 47fb1c35deeeb68f.txt · 第 46 行
      support: 被跟随者知情同意，且属于实验团队。
    correction: 补出五项子任务、最佳与平均表现差异，以及真实飞行失败和单一场景的限制。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-09-20T09:11:21+08:00'
    method: 主执行者完整审读官方正文后起草；独立代理只依据正文逐句核查并单独检查中文可读性；修订稿再审，主执行者另做最终卡片阅读。
    source_check: passed
    readability_check: passed
  last_content_review_at: '2026-09-20T09:11:21+08:00'
  last_figure_review_at: '2026-09-20T09:11:21+08:00'
  last_figure_review:
    at: '2026-09-20T09:11:21+08:00'
    method: local_original_and_official_media_comparison
    details: 完整核对正文及 HTML 的图表与视频说明，实际查看既有分任务进展图，并下载、解码、查看最佳与平均表现对比原图；两图按原文先后就近解释。走廊视觉处理示意未选入，五段视频未逐段观看，不据静态说明声称已验证飞行过程。
---

# Project Pilot：语言模型能否驾驶无人机

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%9C%BA%E5%99%A8%E4%BA%BA%E4%B8%8E%E7%89%A9%E7%90%86%E6%8E%A7%E5%88%B6)

> [官方原文](https://www.anthropic.com/research/project-pilot) · Project Pilot: Can AI control a drone? · 2026-07-24
> 中文摘要＋重点文字解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 与 Andon Labs 用 Drone-Bench 将室内无人机寻找并跟随知情参与者的任务拆成五项，以人机共同开发的算法作基线。15 个模型的测试显示，Fable 5 在十次模拟中取最佳表现时有四项达到基线，按平均表现却只有三项达标；环境重建仍是主要短板。真实无人机也因地图错误无法自主跨房间导航，说明子任务成绩不能替代完整任务的可靠性。实验仅覆盖单一办公室、低速和少数人员，尚不足以判断复杂真实环境中的能力。

## 重点文字解读

### 基线是人机协作实现

Andon Labs 建立重建、定位、导航、检测和跟随五项子任务，用人类与 AI 共同开发的算法作基线，再测试 15 个模型。 [原文依据](https://www.anthropic.com/research/project-pilot)

### 子任务领先仍可能整体失败

原文称模型在十次模拟中取最好一次时，五项中有四项达到人机协作基线；即使 Fable 5 按平均表现也只有三项达标。它在真实无人机的检测与跟随中优于参考算法，但错误地图会传递到定位和导航，仍无法自主跨房间导航，文中演示说明出现把墙当门的情况。 [原文依据](https://www.anthropic.com/research/project-pilot)

图示：各子任务的前沿进展：横轴为模型发布时间，纵轴为相对人机协作基线的进展，图中绿色重建曲线明显落后。100% 表示该子任务达到基线，不是完整飞行任务的成功率，也不能据此前沿曲线认定同一个模型的平均表现全部达标。

*各子任务的前沿进展：横轴为模型发布时间，纵轴为相对人机协作基线的进展，图中绿色重建曲线明显落后。100% 表示该子任务达到基线，不是完整飞行任务的成功率，也不能据此前沿曲线认定同一个模型的平均表现全部达标。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/614042bcff1dd452489fcab83e880ed3f880efaf-1999x1446.png) · [文章出处](https://www.anthropic.com/research/project-pilot)

### 最佳一次与平均表现仍有差距

正文将当前 Fable 5 的平均水平与约半年前前沿模型的最佳水平作对比。这个差距说明重复运行的稳定性仍需验证，不能把一次成功当成可靠控制；这里比较的是本次基准的进展，尚未覆盖多种环境。

图示：最佳与平均表现对比：横轴为模型发布时间，纵轴为朝基线推进的程度；绿色表示最佳运行，橙色表示平均运行。图中约六个月的差距是这组模型的观察，不是所有机器人任务的固定规律；接近 100% 也不等于真实无人机全程成功。

*最佳与平均表现对比：横轴为模型发布时间，纵轴为朝基线推进的程度；绿色表示最佳运行，橙色表示平均运行。图中约六个月的差距是这组模型的观察，不是所有机器人任务的固定规律；接近 100% 也不等于真实无人机全程成功。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/7713a1ff0377744cfd0849e70c1c75a41ef8cd28-1999x1380.png) · [文章出处](https://www.anthropic.com/research/project-pilot)

### 测试范围与监督边界明确

实验在单一办公室、低速、少数参与者条件下运行，被跟随者知情同意。文章讨论性能提升后仍需有意决定人的监督角色。 [原文依据](https://www.anthropic.com/research/project-pilot)

## 适用条件与局限

未测试户外人群等复杂场景，评测由 Andon 执行；Anthropic 表示未获基准访问权限。本笔记节选并核对两张结果图，未独立访问或复现完整基准，五段视频未逐段审阅；真实演示行为依据正文和同页说明。

## 怎样理解与应用（AI 解读）

多阶段系统要关注误差如何向下游传播；最强的检测器也补不回错误环境地图带来的导航风险。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：补充原文配图节选及来源。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-09-20：完整审读官方正文，经独立逐句核查与单独可读性检查；补出五项子任务、最佳与平均表现差异，以及真实飞行失败和单一场景的限制。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
