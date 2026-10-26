---
type: article
title: "DeepSeek Search 与 Fetch：面向 Agent 的实时网页能力"
source: "Hacker News"
published: null
collected: "2026-10-19T11:04:44.139+08:00"
category: "AI 与 Agent/搜索与抓取"
original_title: "DeepSeek search and fetch – $0.75 per 1000 successful requests"
hn_item_id: 50138531
hn_author: "fagnerbrack"
hn_submitted_at: "2026-10-18T06:50:36Z"
hn_score: 548
hn_comments: 257
hn_item_url: "https://news.ycombinator.com/item?id=50138531"
original_url: "https://api-docs.deepseek.com/guides/search/"
---

# DeepSeek Search 与 Fetch：面向 Agent 的实时网页能力

<!-- AUTO:BEGIN -->
## 摘要

DeepSeek 文档介绍两组面向 Agent 与 RAG 应用的只读网页 API：Search 根据查询返回结构化结果，Fetch 把单个网页转成 Markdown。两者都使用 Bearer API key，按成功请求计费；文档还给出查询语法、返回字段、错误码和 QPS 限制。

## 重点解读

- Search 通过 POST /v1/tools/search 接收 1–128 个 Unicode 字符的 query，可设置 1–50 条结果，并用 need_content 请求网页正文；结果包含标题、URL、snippet、summary、content、date、authority 和 rerank_score。
- Fetch 通过 POST /v1/tools/fetch 接收一个 HTTP(S) URL，返回 title 与 Markdown content；文档明确说明目标站点可用性和访问策略会影响结果。
- 查询支持 site、-site、短语、lang、after、before 等操作符；Search 与 Fetch 各自有 5 QPS，Fetch 还受单域名 QPS 限制。
- 价格为 Search 和 Fetch 各 0.75 美元/1000 次成功请求；文档称 Codex 等服务端调用在 2026-11-01 前暂不收费。

## HN 讨论

HN 评论主要比较 SearXNG、Exa、Tavily、Brave、Kagi 等方案的价格、覆盖率和延迟。讨论集中在企业机密是否能交给托管搜索、索引自托管的硬件成本，以及网页抓取的限流、合规和隐私边界。

## 局限与待核验

文档是服务方说明，未提供独立的召回率、延迟或内容质量基准；价格、免费期和限额可能变化。需要 API key，实际可取内容仍取决于目标站点的访问策略。

## 原文链接

- [Hacker News 条目](https://news.ycombinator.com/item?id=50138531)
- [原文](https://api-docs.deepseek.com/guides/search/)
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
