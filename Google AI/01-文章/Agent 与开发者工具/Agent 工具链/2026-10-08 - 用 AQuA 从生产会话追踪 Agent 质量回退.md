---
type: "article"
source: "https://developers.googleblog.com/en/the-outer-loop-insights-first-an-ambient-quality-agent-that-diagnoses-your-production-agent/"
source_aliases: []
original_title: "The Outer Loop, Insights First: An Ambient Quality Agent That Diagnoses Your Production Agent"
authors: ["Dima Melnyk", "Elia Secchi"]
authors_source: "官方正文署名"
published: "2026-10-08"
published_source: "官方正文页首"
published_evidence: "2026-10-08"
collected: "2026-10-12T10:56:46+08:00"
updated: "2026-10-12T10:56:46+08:00"
last_checked: "2026-10-15T17:07:08+08:00"
category: "Agent 与开发者工具/Agent 工具链"
source_section: "Google Developers Blog · AI"
tags: ["AQuA", "Agent", "质量评测"]
status: "saved"
detail_status: "completed"
note_depth: "中文摘要与重点文字解读"
---

# 用 AQuA 从生产会话追踪 Agent 质量回退

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-%E7%AE%A1%E7%90%86/%E6%94%B6%E5%BD%95%E6%B8%85%E5%8D%95.md#agent-%E5%B7%A5%E5%85%B7%E9%93%BE)

> [原文链接](https://developers.googleblog.com/en/the-outer-loop-insights-first-an-ambient-quality-agent-that-diagnoses-your-production-agent/) · 原题：The Outer Loop, Insights First: An Ambient Quality Agent That Diagnoses Your Production Agent · 发布日期：2026-10-08 · 作者：Dima Melnyk、Elia Secchi · 来源：Google Developers Blog · AI

## 摘要

Google Developers 开源 AQuA，作为旁路质量 Agent 抽样读取生产会话，经审阅、聚类、独立模型核验和问题跟踪，发现健康检查仍正常时的任务失败。按需诊断会结合部署时的源码快照提出有行号依据的修复建议，但不会自动修改代码。作者在 32 个脚本重放会话中演示，人工修改两处提示后通过会话由 5 个升至 13 个；该案例本次未独立复现，抽样与有限核验也不能证明所有会话都可靠。

## 重点文字解读

### 旁路读取生产证据

AQuA 从 Cloud Trace、Cloud Logging 或 BigQuery 抽样读取轨迹，并用部署时保存的源码快照支持诊断。它运行在请求链路之外，向问题库写入发现，原始会话与快照留在用户的 Google Cloud 项目内。

图示：旁路读取生产证据

*AQuA 从会话遥测和部署源码快照取得证据，将发现写入 BigQuery；不在请求路径中回写生产 Agent。* [原图](https://storage.googleapis.com/gweb-developer-goog-blog-assets/images/Figure-4-AQuA-Sidecar-Architecture.original.png) · [原文](https://developers.googleblog.com/en/the-outer-loop-insights-first-an-ambient-quality-agent-that-diagnoses-your-production-agent/)

### 从候选问题到核验发现

五阶段为抽样、审阅、聚类、核验、跟踪。独立模型检查每簇最多三份完整会话，证据不足的簇被丢弃；根因诊断按需触发，只提出对应源码位置的建议。

图示：从候选问题到核验发现

*核验位于聚类与问题跟踪之间。有限抽样确认的是问题模式，不能证明每个簇成员均已核查。* [原图](https://storage.googleapis.com/gweb-developer-goog-blog-assets/images/Figure-5-Five-Stage-Sweep-and-Verification-Pipe.original.png) · [原文](https://developers.googleblog.com/en/the-outer-loop-insights-first-an-ambient-quality-agent-that-diagnoses-your-production-agent/)

### 改提示后再重放

旅行助手演示使用同一批 32 个脚本重放会话。修正座位确认与饮食约束两处提示后，通过数从 5 升到 13；这属于作者案例，不代表所有生产任务都会获得同幅度改善。

## 适用条件与局限

- 随机抽样可能漏掉低频故障；模型裁判、有限核验和领域目标需要人工校准。
- 开源参考实现未在本次部署，脚本重放未独立复现；其自动问题关闭也不等同于证明修复。

## 怎样理解与应用（AI 解读）

可先把一个关键不变量写成领域目标，例如“座位必须经工具确认后才能落入会话状态”。让问题附带失败轨迹，再把该轨迹转成回归用例；这比只追踪 HTTP 错误率更直接检验任务质量。

## 变更记录

- 2026-10-12：首次收录；属于此前发布文章的补录，独立摘要复核通过。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
