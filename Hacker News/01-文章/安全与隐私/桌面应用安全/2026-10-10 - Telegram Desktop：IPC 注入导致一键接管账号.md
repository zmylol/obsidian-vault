---
type: article
title: "Telegram Desktop：IPC 注入导致一键接管账号"
source: "Hacker News"
published: 2026-10-03
collected: 2026-10-11T10:58:30+08:00
category: "安全与隐私/桌面应用安全"
hn_item_id: 50029123
hn_author: "g-b-r"
hn_submitted_at: "2026-10-10T03:02:47Z"
hn_score: 426
hn_comments: 273
hn_item_url: "https://news.ycombinator.com/item?id=50029123"
original_url: "https://beaksec.github.io/posts/telegram-desktop-one-click-account-takeover/"
---

# Telegram Desktop：IPC 注入导致一键接管账号

<!-- AUTO:BEGIN -->
## 摘要

安全研究者 beaksec 报告，Telegram Desktop 的进程间通信解析缺陷与内部文件发送功能组合，可能在用户点击链接后泄露本地文件；未设置本地口令时，泄露的会话资料还可能用于接管账户。作者在 Windows 6.9.3 上确认问题，称影响版本直到 7.2.8，7.2.9 已修复。攻击需要用户点击，浏览器也可能追加确认，并非零点击漏洞。

## 重点解读

- 漏洞链从单实例 socket 命令中的未转义分号开始，攻击者再利用 interpret: URI 触发文件读取和发送。
- 自动下载的附件和会话文件会放大影响；本地口令只能降低被盗会话的可用性，不能修复本地文件读取。
- 作者建议升级到 7.2.9，并在保存文件、群组邀请和本地口令方面采取额外限制。

## HN 讨论

HN 讨论主要核对攻击前提、浏览器确认和版本修复范围，也讨论桌面应用把 IPC 暴露给链接处理器的风险。评论可补充背景，但不替代原文的复现和修复说明。

## 局限与待核验

摘要依据公开技术文章和 HN 条目整理，未在本机复现漏洞；版本、CVE 和 CVSS 信息应以厂商公告和上游修复记录再次核验。

## 原文链接

- [Hacker News 条目](https://news.ycombinator.com/item?id=50029123)
- [原文](https://beaksec.github.io/posts/telegram-desktop-one-click-account-takeover/)
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
