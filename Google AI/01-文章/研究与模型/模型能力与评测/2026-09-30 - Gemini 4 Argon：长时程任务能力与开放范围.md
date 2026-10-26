---
type: "article"
source: "https://blog.google/innovation-and-ai/models-and-research/gemini-models/gemini-4-argon/"
source_aliases: ["https://blog.google/innovation-and-ai/models-and-research/gemini-models/gemini-4-argon"]
original_title: "Gemini 4 Argon: our next era of frontier intelligence"
authors: ["Koray Kavukcuoglu"]
authors_source: "原文署名"
published: "2026-09-30"
published_source: "原文页首与 JSON-LD"
published_evidence: "https://blog.google/innovation-and-ai/models-and-research/gemini-models/gemini-4-argon/；正文标题、作者、发布日期"
collected: "2026-10-13T13:27:40+08:00"
updated: "2026-10-15T17:07:08+08:00"
last_checked: "2026-10-15T17:07:08+08:00"
category: "研究与模型/模型能力与评测"
source_section: "Google Blog · Gemini models"
tags: ["Google DeepMind", "Gemini", "模型评测", "长时程任务"]
status: "saved"
detail_status: "completed"
note_depth: "中文摘要与重点文字解读"
source_updates: ["https://blog.google/innovation-and-ai/models-and-research/gemini-models/introducing-gemini-4-argon/", "https://blog.google/innovation-and-ai/technology/developers-tools/build-with-gemini-4-argon/", "https://blog.google/innovation-and-ai/products/gemini-app/gemini-4-argon-availability/", "https://cloud.google.com/blog/products/ai-machine-learning/gemini-4-argon-available-on-google-cloud"]
---

# Gemini 4 Argon：长时程任务能力与开放范围

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%A8%A1%E5%9E%8B%E8%83%BD%E5%8A%9B%E4%B8%8E%E8%AF%84%E6%B5%8B)

> [原文链接](https://blog.google/innovation-and-ai/models-and-research/gemini-models/gemini-4-argon/) · 原题：Gemini 4 Argon: our next era of frontier intelligence · 发布日期：2026-09-30 · 作者：Koray Kavukcuoglu · 来源：Google Blog · Gemini models

> 本次补入 2026-10-13、14 后续官方发布；保留 9 月 30 日主文、原路径与首次收录时间。

## 摘要

Google 的 Gemini 4 Argon 从早期受限测试扩展为全球开放：开发者可通过 Gemini API 付费层使用，消费端按 AI Pro/Ultra 套餐开放。10 月 13 日新公告将 API 长任务额度表述为 100 万统一输入输出 token，并提示开发者参考新的续接协议配置；这与 9 月 30 日预告的“输出上限”口径不同。官方展示代码重构与专业工作案例，但效果属于发布方自述，本次未接入或复现。

## 重点文字解读

### 从受限预告到进一步开放

9 月 30 日主文先面向 Fairwind 可信防御者。10 月 13 日后续公告开放付费 Gemini API，以及按 Pro、Ultra 套餐提供的消费端入口；Antigravity 入口对应 Ultra。10 月 14 日 Cloud 公告补充企业入口。

### token 上限的表述已变化

旧预告写输出 64K→1M；新公告写 Gemini API 的 1M 统一输入输出上限，并提示参考续接协议。两种口径不能直接当成同一个参数，接入前需核对当前规格；本次未实测协议。

### 原预告基准保留历史归属

下表来自 9 月 30 日预告，DeepSWE v1.1 的 77.9% 对应长时程软件工程任务。新公告主要补充开放与案例，不能把旧表标成新增评测。

图示：9 月 30 日 Gemini 4 Argon 预告中的官方基准表。

*图：发布方历史基准表，实际一帧；不同任务各有比较条件；[原图](https://storage.googleapis.com/gweb-uniblog-publish-prod/original_images/gemini-4-argon_table_blog.gif)。*

## 适用条件与局限

- 官方工程与专业工作案例属于公司自述；本次未接入模型、复现、观看新增视频或精读模型卡。
- 公开模型与 Fairwind 限定防御者访问有不同约束；具体地区、套餐与限额依对应服务规则。

## 怎样理解与应用（AI 解读）

测试长任务时应同时记录输入、思考和输出的额度消耗，检查续接后是否保留任务状态，并用同一测试集评估返工率与完成率。更长额度不能直接证明交付更可靠。

## 后续官方来源

- [2026-10-13 · 进一步开放公告](https://blog.google/innovation-and-ai/models-and-research/gemini-models/introducing-gemini-4-argon/) · Koray Kavukcuoglu。
- [2026-10-13 · 开发者入口](https://blog.google/innovation-and-ai/technology/developers-tools/build-with-gemini-4-argon/)。
- [2026-10-13 · Gemini app 入口](https://blog.google/innovation-and-ai/products/gemini-app/gemini-4-argon-availability/)。
- [2026-10-14 · Google Cloud 企业入口](https://cloud.google.com/blog/products/ai-machine-learning/gemini-4-argon-available-on-google-cloud)。

## 变更记录

- 2026-10-13：历史内容首次收录，完整读取正文并通过独立事实与可读性复核，保存相关技术配图。
- 2026-10-15：补充后续官方开放公告与 token 新口径；独立复核摘要，保留旧预告来源与历史基准归属。原主文未据此判定为改写。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
