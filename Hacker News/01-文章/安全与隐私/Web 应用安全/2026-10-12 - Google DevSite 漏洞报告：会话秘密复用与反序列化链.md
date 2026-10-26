---
type: "article"
title: "Google DevSite 漏洞报告：会话秘密复用与反序列化链"
source: "Hacker News"
published: "2026-10-12"
collected: "2026-10-13T11:09:26+08:00"
category: "安全与隐私/Web 应用安全"
original_title: "I Found a $90k Remote Code Execution Vulnerability in Google"
original_author: "Simon Koeck"
hn_item_id: 50052638
hn_author: "soeckly"
hn_submitted_at: "2026-10-12T07:28:53+00:00"
hn_score: 186
hn_comments: 96
hn_item_url: "https://news.ycombinator.com/item?id=50052638"
original_url: "https://simonkoeck.com/writeups/google-devsite-flask-session-pickle-rce"
normalized_original_url: "https://simonkoeck.com/writeups/google-devsite-flask-session-pickle-rce"
original_read_at: "2026-10-13T11:09:26+08:00"
original_read_status: "readable"
collection_window: "recent_24h"
---

# Google DevSite 漏洞报告：会话秘密复用与反序列化链

<!-- AUTO:BEGIN -->
## 摘要

作者称 Google DevSite 把敏感 OAuth 对象放进客户端会话，并复用其中的秘密签署会话，使伪造输入可能触发不安全反序列化。他报告延时测试及对照结果，并称漏洞已于 10 月 7 日修复、获奖 9 万美元；本轮未独立确认这些说法。

## 重点解读

- 作者从异常大的会话中识别出敏感认证对象。
- 其签名对照实验指向同一个秘密被用于不同用途。
- 作者以延时和失败对照支持代码执行判断，随后讨论影响范围。
- 文末建议分离密钥、把状态留在服务端，并使用纯数据格式。

## HN 讨论

HN 讨论不安全反序列化如何通过审查、漏洞奖金的作用，以及文章是否由 AI 撰写和研究功劳归属。后两项属于争论，没有独立证据可据此确认文章真假。

## 局限与待核验

未执行任何示例、漏洞请求或访问凭据。修复、奖金与漏洞仅作者报告；开头声称影响七个域，正文列举不足以完整支持该数量。未取得厂商公告或独立复现。

## 原文链接

- [Hacker News 条目](https://news.ycombinator.com/item?id=50052638)
- [原文](https://simonkoeck.com/writeups/google-devsite-flask-session-pickle-rce)
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
