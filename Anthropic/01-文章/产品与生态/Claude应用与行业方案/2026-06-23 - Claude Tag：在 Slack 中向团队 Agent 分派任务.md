---
type: article
source: https://www.anthropic.com/news/introducing-claude-tag
source_aliases: []
original_title: Introducing Claude Tag
published: '2026-06-23'
collected: '2026-09-09'
updated: '2026-10-01'
last_checked: '2026-10-01'
category: 产品与生态/Claude应用与行业方案
source_section: News
tags:
- agents
- tool-use
- products
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-10-01T09:23:51+08:00'
  source_read: true
  source_read_scope: 官方完整主文与同页脚注；外链论文、政策和附件未单独精读，网页代码未执行或复现。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_no_key_figures
  figure_evidence: 核对封面、缩略图和嵌入视频；实际点击 Play video，观察正常播放的产品介绍片段并保存两帧证据，未声称完整转录视频。无独立静态结果图表。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: 139597950dbf41f95115201f307b9cffa815dbb77cde0ef60afc803254bfb6d1
    evidence:
    - location: 64748ac3266300d1.txt 第 3–7 行
      support: 6 月 23 日发布 Slack 上的 Claude Tag 测试版，面向 Team 与 Enterprise；内部产品团队代码比例是公司自身使用报告。
    - location: 64748ac3266300d1.txt 第 9–15 行
      support: 多人接续同一频道工作；有权限才记忆其他来源；主动更新需启用 ambient；支持异步及未来任务安排。
    - location: 64748ac3266300d1.txt 第 17–26 行
      support: 管理员按频道限制工具、数据和记忆，可设组织/频道 token 支出上限并查操作日志；原公告给出测试版及迁移条件。
    correction: 无需修改，定稿与草稿一致。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-10-01T09:23:51+08:00'
    method: 独立代理逐句核对官方完整正文，再单独复核摘要可读性；修订后重查，主执行者最终单读定稿。
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-10-01T09:23:51+08:00'
  last_figure_review_at: '2026-10-01T09:23:51+08:00'
  last_figure_review:
    at: '2026-10-01T09:23:51+08:00'
    method: official_body_and_media_structure
    details: 核对封面、缩略图和嵌入视频；实际点击 Play video，观察正常播放的产品介绍片段并保存两帧证据，未声称完整转录视频。无独立静态结果图表。
---

# Claude Tag：在 Slack 中向团队 Agent 分派任务

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#Claude%E5%BA%94%E7%94%A8%E4%B8%8E%E8%A1%8C%E4%B8%9A%E6%96%B9%E6%A1%88)

> [官方原文](https://www.anthropic.com/news/introducing-claude-tag) · Introducing Claude Tag · 2026-06-23
> 中文摘要＋重点文字解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2026 年 6 月推出 Claude Tag 测试版，让 Team 和 Enterprise 客户在 Slack 频道里向 Claude 分派任务，并由多人接续同一工作。代理可记住获授权频道的相关信息、异步执行和安排后续任务，主动提醒则需要开启相应选项。管理员按频道限定数据、工具与记忆范围，并设置费用上限及查看日志；文中的内部使用比例是公司自述，不能直接证明其他团队也能获得相同效率。

## 重点文字解读

### 共同上下文支持多人接续

同一频道的成员可查看任务并继续交流；启用 ambient 行为后，Claude 会主动提示相关信息、跟进未解决的线程，也可执行跨小时或跨天任务。 [原文依据](https://www.anthropic.com/news/introducing-claude-tag)

### 记忆和工具按管理员边界隔离

管理员配置频道身份、数据与工具权限，并设置组织和频道花费上限、查看请求者及行动日志。不同身份不共享记忆，私信使用个人工具；首发基于 Opus 4.8。 [原文依据](https://www.anthropic.com/news/introducing-claude-tag)

配图核对：已打开原文嵌入的 Claude Tag 产品视频并查看介绍片段；视频与正文说明团队协作方式，没有独立静态结果图表，内部采用比例不是产品效果对照实验。

## 适用条件与局限

内部产品团队 65% 代码由内部版本产生是公司自身观察，不代表其他团队的生产率。频道权限与记忆范围需要分别配置，主动行为也依赖启用条件。

## 怎样理解与应用（AI 解读）

团队代理的核心是可共享的工作状态和清楚的权限范围。知识库可以记录任务来源、当前状态和交接上下文，避免只留下最终回答。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-10-01：完整审读正文，通过独立摘要与可读性复核；区分频道身份、个人私信权限与内部代码比例的证明范围。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
