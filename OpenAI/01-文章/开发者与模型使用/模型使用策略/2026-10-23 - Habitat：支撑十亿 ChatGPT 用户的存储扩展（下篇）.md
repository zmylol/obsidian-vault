---
type: article
source: "https://openai.com/index/scaling-storage-one-billion-users-part-two/"
source_aliases: ["https://openai.com/zh-Hans-CN/index/scaling-storage-one-billion-users-part-two/"]
title: "Habitat：支撑十亿 ChatGPT 用户的存储扩展（下篇）"
original_title: "Rapidly scaling online storage to serve over 1 billion ChatGPT users (Part II)"
authors: ["Jon Lee", "Hrachya Hakobyan", "Chaomin Yu"]
authors_source: "官方文章 Author 段"
published: "2026-10-23"
published_source: "官方文章页首与栏目列表"
collected: "2026-10-24T11:38:10+08:00"
updated: "2026-10-24"
last_checked: "2026-10-24"
category: "开发者与模型使用/模型使用策略"
source_section: "OpenAI News · Engineering"
tags: ["OpenAI", "Habitat", "Azure Cosmos DB", "基础设施"]
note_depth: "中文摘要与重点图文解读"
status: "saved"
detail_status: "pending"
summary_review_status: "passed"
media_status: "pending"
source_code_executed: false
papers_close_read: false
body_hash_type: "manual_full_official_page_capture_v1"
body_sha256: "87855091e6c6fc36850c0626a1781ec2d89dfa65d210c7de294295a4f8ad6b69"
---

# Habitat：支撑十亿 ChatGPT 用户的存储扩展（下篇）

<!-- AUTO:BEGIN -->
[← 首页](../../../00-%E9%A6%96%E9%A1%B5.md) · [本分类文章](../../../99-%E7%AE%A1%E7%90%86/%E6%94%B6%E5%BD%95%E6%B8%85%E5%8D%95.md#%E6%A8%A1%E5%9E%8B%E4%BD%BF%E7%94%A8%E7%AD%96%E7%95%A5)

> 原文：[Rapidly scaling online storage to serve over 1 billion ChatGPT users (Part II)](https://openai.com/index/scaling-storage-one-billion-users-part-two/) · 发布：2026-10-23 · 署名：Jon Lee、Hrachya Hakobyan、Chaomin Yu · 来源：Engineering

## 摘要

OpenAI 介绍 Habitat 如何支撑 ChatGPT、API、Codex 等产品在 40 个地区访问超过 500 PB 数据。团队从共享容器、专用容器再回到默认多租户，通过热点限流、请求优先级和改进的无服务器模式降低噪声邻居风险；复制、缓存、CDC 与 Rust 重写把全球读延迟中位数从约 120 毫秒降至约 10 毫秒。文中经验依赖 Azure Cosmos DB 与 OpenAI 规模，容量和地域约束仍需单独评估。

## 重点图文解读

### 从隔离到多租户

1. Habitat 先使用共享容器，再为关键工作负载分配专用容器，最后回到默认多租户，并保留必要的数据移动与隔离能力。

### 用服务机制控制噪声邻居

2. 热点限流、请求优先级和改进的无服务器模式共同处理逻辑分区、物理分区和容量波动，减少一个租户拖累其他产品的风险。

### 读性能与数据变更

3. 通过就近放置、少量关键数据的广泛复制、Valkey 缓存和 Cosmos DB 变更数据捕获降低跨区域延迟；Rust 重写进一步减少代理开销。

### 规模带来的共同运营

4. Habitat 与 Azure 团队用生产规模的非生产账户、共享仪表盘和联合故障演练验证控制面、网关和 CDC；文章称最大账户已达数十 PB、超过每秒 2,000 万次查询。

## 适用条件与局限

文章是 OpenAI 对自身 Azure Cosmos DB 运营经验的工程总结；容量、云区域、电力和数据驻留约束会改变方案取舍，公开的延迟和规模数字也不能直接外推到其他架构。

## 怎样理解与应用（AI 解读）

这篇文章把“先可靠、再变快、最后降运维成本”落实为存储平台决策顺序。面对高增长产品，可先用限流、隔离和可观测性控制故障半径，再用缓存、复制和数据变更链路优化用户延迟，同时保留容量与地域约束作为上线评审条件。

## 媒体核对

正文含 Habitat 架构、分区、流量和延迟图示及交互内容；页面媒体尚未独立导出与逐张目视核验，保留 pending。

## 变更记录

- 2026-10-24：首次收录；完成正文事实核对与摘要可读性复核，媒体保留待核验。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
