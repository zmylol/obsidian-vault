---
type: article
title: "Grokking：777 参数 Transformer 学会真正的数学"
source: "Hacker News"
published: "2026-02-24"
collected: "2026-10-26T11:03:33.055+08:00"
category: "AI 与 Agent/模型发布与评估"
original_title: "Grokking: How a 777-Parameter Transformer Learned Real Math"
hn_item_id: 50237920
hn_author: "unknown"
hn_submitted_at: "2026-10-26T01:27:16Z"
hn_score: 4
hn_comments: 2
hn_item_url: "https://news.ycombinator.com/item?id=50237920"
original_url: "https://themenonlab.blog/blog/grokking-777-parameter-transformer"
---

# Grokking：777 参数 Transformer 学会真正的数学

<!-- AUTO:BEGIN -->
## 摘要

Menon Lab 介绍一个只有 777 个参数的 Transformer 在十位数加法上达到 99.69% 准确率的实验，并用 grokking 解释模型如何先记忆训练集、再在长时间训练后突然学到可泛化算法。

## 重点解读

- 模型一层、隐藏维度 7、单头注意力、FFN 维度 14、上下文长度 35；输入输出嵌入共享权重。
- 实验观察到训练准确率先达到 100%，测试仍接近随机，经过很长平台期后突然跃升；作者称约 800 参数存在明显容量门槛。
- 较高学习率、权重衰减、可学习位置编码和分隔符是有效配置；RMSNorm、RoPE、去掉分隔符和更小隐藏维度会破坏泛化。
- 文章把机制解释归因于权重衰减推动表示压缩，并引用 Fourier features 与可解释性研究；同时提供 10 万 epoch 的复现实验代码。

## HN 讨论

HN 评论本轮只有少量评论，未形成可概括的社区争论；正文结论仍应与原始论文和代码实验区分。

## 局限与待核验

文章是实验性科普和复现指南，777 参数结果、阈值与“真正学会算法”的判断需要检查代码、随机种子和数据划分。

## 原文链接

- [Hacker News 条目](https://news.ycombinator.com/item?id=50237920)
- [原文](https://themenonlab.blog/blog/grokking-777-parameter-transformer)
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
