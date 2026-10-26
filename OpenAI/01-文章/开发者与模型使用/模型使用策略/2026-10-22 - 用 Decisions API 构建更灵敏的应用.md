---
type: article
source: "https://openai.com/index/decisions-api/"
source_aliases: ["https://openai.com/zh-Hans-CN/index/decisions-api/"]
title: "用 Decisions API 构建更灵敏的应用"
original_title: "Build more responsive apps with the Decisions API"
authors: ["OpenAI"]
authors_source: "官方文章 Author 段"
published: "2026-10-22"
published_source: "官方文章日期与栏目列表"
collected: "2026-10-23T10:24:17+08:00"
updated: "2026-10-23"
last_checked: "2026-10-23"
category: "开发者与模型使用/模型使用策略"
source_section: "OpenAI News · Product"
tags: ["OpenAI", "Decisions API", "GPT-6 Luna", "API"]
note_depth: 中文摘要与重点文字解读
status: "saved"
detail_status: "pending"
summary_review_status: "passed"
media_status: "pending"
source_code_executed: false
papers_close_read: false
body_hash_type: "manual_full_official_page_capture_v1"
body_sha256: "6f7506369692937012cad57e07826857ae0b3b20b448ea135acc4845bb46fb71"
---

# 用 Decisions API 构建更灵敏的应用

<!-- AUTO:BEGIN -->
[← 首页](../../../00-%E9%A6%96%E9%A1%B5.md) · [本分类文章](../../../99-%E7%AE%A1%E7%90%86/%E6%94%B6%E5%BD%95%E6%B8%85%E5%8D%95.md#%E6%A8%A1%E5%9E%8B%E4%BD%BF%E7%94%A8%E7%AD%96%E7%95%A5)

> 原文：[Build more responsive apps with the Decisions API](https://openai.com/index/decisions-api/) · 发布：2026-10-22 · 署名：OpenAI · 来源：Product

## 摘要

OpenAI 宣布 Decisions API 正式可用，用 GPT‑6 Luna 处理答案范围受限的判断，面向文本、图像和结构化输入，官方称相较 Responses API 可快至 10 倍。接口支持概率、选项和评分三类结果，并加入 GPT‑Live、提示缓存、原生 JSON、美国与欧盟推理驻留及每次最多 400 个问题。定价只收输入 token，实际效果仍取决于问题定义、候选答案和业务评测。

## 重点文字解读

### API 定位与速度

1. 一般可用的 Decisions API 用 GPT‑6 Luna 聚焦有界答案；官方称相对 Responses API 最快可达 10 倍，并新增 GPT‑Live 集成、提示缓存和区域推理驻留。

### 输入、输出与应用

2. 开发者定义问题和允许答案，输入可为文本、图像或原生 JSON；返回 predicate 概率、choice 选择或 score 评分，适合分类、路由、风险判断和下一步动作。

### 成本与示例

3. 官方给出 Box、Datadog、Ramp、Sierra、Speak 的早期案例；价格为每百万输入 token 0.10 美元、缓存输入 0.01 美元，不收输出 token 费用。

## 适用条件与局限

接口适合答案空间可预先约束的判断，不等同于开放式生成；官方速度、准确率和成本案例来自各团队自报或特定评测，不能直接外推到所有业务。GPT‑Live、区域处理、缓存和 Zero Data Retention 受当前产品资格与数据控制条件限制。

## 怎样理解与应用（AI 解读）

它把模型调用从“生成一段回答”收窄为可评估的决策函数。落地时应先固定问题、答案集合和置信度阈值，再用真实分布测试误判、回退和人工复核；官方案例可作为设计线索，不能替代自己的延迟、成本和风险评测。

## 媒体核对

正文已完整读取。正文含 GPT‑Live 语音演示、表情交互和示例代码；尚未独立导出与逐项目视核验，保留 pending，不把演示界面当作关键证据图。

## 变更记录

- 2026-10-23：首次收录；完成正文事实核对与摘要可读性复核，媒体保留待核验。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->

