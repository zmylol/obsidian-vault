---
type: "article"
title: "用 C、CGI 与 SQLite 构建现代 Web 产品"
source: "Hacker News"
published: null
collected: "2026-10-13T11:09:26+08:00"
category: "编程语言与工具/C 与 Web 开发"
original_title: "A Modern Web App in C"
original_author: "Corey Prophitt"
hn_item_id: 50058528
hn_author: "prophittcorey"
hn_submitted_at: "2026-10-12T16:13:10+00:00"
hn_score: 420
hn_comments: 172
hn_item_url: "https://news.ycombinator.com/item?id=50058528"
original_url: "https://prophitt.me/writing/a-modern-web-app-in-c"
normalized_original_url: "https://prophitt.me/writing/a-modern-web-app-in-c"
original_read_at: "2026-10-13T11:09:26+08:00"
original_read_status: "readable"
collection_window: "recent_24h"
---

# 用 C、CGI 与 SQLite 构建现代 Web 产品

<!-- AUTO:BEGIN -->
## 摘要

作者介绍以 OpenBSD、C、httpd 和 SQLite 构建商业 Web 产品的经验：每个请求启动 CGI 进程，静态资源编入二进制，通过少量库处理支付、邮件与认证。部署与依赖管理变得简单，但请求解析、验证和输出转义等工作需要自己承担。

## 重点解读

- 技术栈采用 BCHS，无独立数据库服务；每请求启动进程，新请求可直接使用替换后的二进制。
- libcurl、libsodium 与 libcjson 分担外部请求、密码处理和 JSON；静态资源也由同一程序返回。
- 作者重视明确的 HTTP 边界、调试便利、成熟工具和较少依赖，并使用 OpenBSD 的隔离机制。
- 不足是缺少框架提供的 Cookie、参数、表单验证和转义工具；作者对自写辅助库也持保留态度。

## HN 讨论

HN 评论比较 CGI 与 FastCGI、Go/Rust 等单二进制方案，讨论 SQLite 写并发、进程开销、内存安全，以及少依赖是否真的意味着较低供应链风险。

## 局限与待核验

已读全文，未审计商业产品或测量吞吐。文章的性能、部署和风险判断来自作者经验，不能推广为所有网站的选型结论；页面未明确标注发布日期。

## 原文链接

- [Hacker News 条目](https://news.ycombinator.com/item?id=50058528)
- [原文](https://prophitt.me/writing/a-modern-web-app-in-c)
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
