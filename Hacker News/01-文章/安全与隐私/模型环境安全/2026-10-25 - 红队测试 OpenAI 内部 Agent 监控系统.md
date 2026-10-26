---
type: article
title: "红队测试 OpenAI 内部 Agent 监控系统"
source: "Hacker News"
published: "2026-10-22"
collected: "2026-10-25T10:57:43.892+08:00"
category: "安全与隐私/模型环境安全"
original_title: "Red-Teaming OpenAI's Internal Agent Monitoring Systems"
hn_item_id: 50227655
hn_author: "gmays"
hn_submitted_at: "2026-10-25T02:20:59Z"
hn_score: 1
hn_comments: 0
hn_item_url: "https://news.ycombinator.com/item?id=50227655"
original_url: "https://metr.org/blog/2026-10-22-red-teaming-openai-agent-monitoring/"
---

# 红队测试 OpenAI 内部 Agent 监控系统

<!-- AUTO:BEGIN -->
## 摘要

METR 与 Redwood Research 介绍一次为期三周的高权限红队演练，测试 OpenAI 内部 misalignment monitoring 的覆盖范围和可被绕过的路径。文章强调，公开版本只是对 61 页内部报告的高层摘要，描述的是 7 月 21 日前后的历史系统。

## 重点解读

- 演练人员访问内部代码、监控提示词和文档，并访谈约十余名研究与安全人员；设备留在现场且有陪同。
- 估计当时 Responses API 中约 75–94% 的 Agent 流量具备监控资格，内部 Codex Agent 子集约 99.2%；这些数字存在较大不确定性。
- 未监控 compaction 事件可能让约 10% 的合资格内部 Codex 流量缺少监控；系统在 Agent 将控制权交回用户时才触发，也留下延迟监控窗口。
- 红队发现可绕过 Codex sandbox/Auto-Review、让大量近期动作不被监控、用序列化差异让监控失败，以及两个可由客户端控制的禁用监控 header；细节部分被删减。

## HN 讨论

HN 条目本轮没有稳定评论内容；本文来自独立红队对历史系统的有限评估，不能把公开摘要当作 OpenAI 当前监控覆盖率。

## 局限与待核验

文章明确说系统在演练期间正在扩展，当前状态未被本次评估建立；部分 exploit 细节被编辑或未验证，比例是估计值。

## 原文链接

- [Hacker News 条目](https://news.ycombinator.com/item?id=50227655)
- [原文](https://metr.org/blog/2026-10-22-red-teaming-openai-agent-monitoring/)
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
