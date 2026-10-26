---
type: article
title: "OpenJDK 移除 eMudhra 根证书"
source: "Hacker News"
published: "2026-10-24"
collected: "2026-10-25T10:57:43.892+08:00"
category: "安全与隐私/证书与信任"
original_title: "OpenJDK randomly(?) removes all eMudhra root CAs"
hn_item_id: 50227798
hn_author: "ktkaufman"
hn_submitted_at: "2026-10-25T02:47:45Z"
hn_score: 1
hn_comments: 2
hn_item_url: "https://news.ycombinator.com/item?id=50227798"
original_url: "https://github.com/openjdk/jdk/pull/33554"
---

# OpenJDK 移除 eMudhra 根证书

<!-- AUTO:BEGIN -->
## 摘要

该 OpenJDK PR 已合并一项 CA certificate improvements 变更，提交信息指向 eMudhra 根证书调整。页面展示了合并状态、评审者和 OpenJDK 的集成检查流程，但没有在可读正文中解释完整的撤销背景。

## 重点解读

- PR #33554 于 2026-10-24 合并，合并提交为 8e492bf；页面列出两名评审者。
- 正文说明变更来自 “8395690: CA certificate improvements”，并通过 OpenJDK 的评审、集成检查与 Reviewed-by 流程。
- 条目标题称“随机移除全部 eMudhra 根 CA”，但 PR 页面本身未充分说明哪些证书被移除、原因和影响版本。

## HN 讨论

HN 评论数很少；本轮只记录 GitHub PR 页面可确认的合并与评审信息，没有把标题中的“随机”当作已证实事实。

## 局限与待核验

需要查看完整 diff、CSR/CA 事件和受影响 JDK 版本才能判断证书变更的原因、范围与用户影响；本轮未做证书链验证。

## 原文链接

- [Hacker News 条目](https://news.ycombinator.com/item?id=50227798)
- [原文](https://github.com/openjdk/jdk/pull/33554)
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
