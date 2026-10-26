---
type: "article"
title: "Janas：从 SSD 按需读取专家，让模型突破 RAM 容量"
source: "Hacker News"
published: null
collected: "2026-10-13T11:09:26+08:00"
category: "AI 与 Agent/本地推理"
original_title: "Janas: Run LLMs larger than RAM by streaming experts from SSD"
original_author: "Maurizio “camauri” Cammalleri"
hn_item_id: 50063717
hn_author: "khalidkhair"
hn_submitted_at: "2026-10-12T22:05:43+00:00"
hn_score: 50
hn_comments: 20
hn_item_url: "https://news.ycombinator.com/item?id=50063717"
original_url: "https://github.com/prabanta-dev/janas"
normalized_original_url: "https://github.com/prabanta-dev/janas"
original_read_at: "2026-10-13T11:09:26+08:00"
original_read_status: "readable"
collection_window: "recent_24h"
---

# Janas：从 SSD 按需读取专家，让模型突破 RAM 容量

<!-- AUTO:BEGIN -->
## 摘要

Janas-LLM 通过缓存常用专家、从 NVMe 读取其余权重，在普通电脑运行比 RAM 更大的 MoE 模型。README 给出一台 32 GB 笔记本运行 48.4 GB Qwen 模型的速度比较，但这些数字属于作者自测，不是跨硬件的独立基准。

## 重点解读

- 作者报告 Qwen3-Next-80B 读取提示约 62 token/s、生成约 24；草稿预测的聊天测试约 37，三种指标不可混用。
- 权重留在磁盘，按 token 读取所需专家，将高频专家缓存到 RAM。
- 引擎按测量结果选择线程和处理路径，项目仍处于早期实验阶段。
- 文档另涵盖转换、聊天和服务接口，硬件及模型许可仍需分别考虑。

## HN 讨论

HN 讨论强调 prefill 与生成速度的区别，并比较长上下文延迟、模型版本、同类 SSD 流式项目和存储带宽。

## 局限与待核验

只有一套主要硬件，部分测试仅一轮，工具比较流程并非完全一致；作者报告内存压力、桌面迟滞与一次 GPU 驱动重置。未运行代码。README 无发表日期，测试日期不冒充发布日期。

## 原文链接

- [Hacker News 条目](https://news.ycombinator.com/item?id=50063717)
- [原文](https://github.com/prabanta-dev/janas)
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
