---
type: article
title: "Parser Combinators：用组合器构建可读解析器"
source: "Hacker News"
published: "2026-10-17"
collected: "2026-10-19T11:04:44.139+08:00"
category: "编程语言与工具/解析器"
original_title: "Parser Combinators"
hn_item_id: 50139067
hn_author: "schindlabua"
hn_submitted_at: "2026-10-18T08:19:53Z"
hn_score: 221
hn_comments: 80
hn_item_url: "https://news.ycombinator.com/item?id=50139067"
original_url: "https://t3.at/blog/2026-10-17-parser-combinators/"
---

# Parser Combinators：用组合器构建可读解析器

<!-- AUTO:BEGIN -->
## 摘要

这篇交互式文章用 TypeScript 从一个返回“解析值 + 剩余输入”的 partial parser 出发，逐步组合序列、映射和重复操作，最后解析 ping 输出。它展示了介于正则表达式和完整解析器生成器之间的一种函数式组织方式。

## 重点解读

- 基础 Parser<T> 接受字符串并返回 T 与剩余输入，后续解析器消费前一个解析器留下的部分。
- pSeq、pMap、pRepeat 等组合器把小解析器拼成更大的语法，并用映射把嵌套结果转换成领域对象。
- 示例从“Hello 100”开始，逐步扩展到带头部、数据包和统计字段的 ping 文本解析。
- 文章把 parser combinator 定位为比大型 parser generator 更轻、比复杂 regex 更有结构的中间方案；代价是错误处理和结果解包可能增加。

## HN 讨论

评论肯定动画和逐步演示让概念易懂，也指出 TypeScript 中的元组解包、失败类型和返回值设计会变复杂。讨论比较了 Haskell/OCaml 的 monad、Rust 的 winnow/nom，以及文章分页式界面在窄屏和浏览器历史上的问题。

## 局限与待核验

文章以教学示例为主，没有系统比较性能、错误恢复或大规模语法；分页式交互页面的可读性和移动端体验也受到评论质疑。

## 原文链接

- [Hacker News 条目](https://news.ycombinator.com/item?id=50139067)
- [原文](https://t3.at/blog/2026-10-17-parser-combinators/)
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
