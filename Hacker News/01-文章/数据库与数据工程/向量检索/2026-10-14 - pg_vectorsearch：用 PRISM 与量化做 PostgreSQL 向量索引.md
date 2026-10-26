---
type: "article"
title: "pg_vectorsearch：用 PRISM 与量化做 PostgreSQL 向量索引"
source: "Hacker News"
published: null
collected: "2026-10-15T11:08:09+08:00"
category: "数据库与数据工程/向量检索"
original_title: "Pg_vectorsearch: An index that is faster than pgvector's IVFFlat and HNSW"
original_author: "Timescale 与 pg_vectorsearch 维护者"
hn_item_id: 50086165
hn_author: "jascha_eng"
hn_submitted_at: "2026-10-14T11:47:53+00:00"
hn_score: 196
hn_comments: 49
hn_item_url: "https://news.ycombinator.com/item?id=50086165"
original_url: "https://github.com/timescale/pg_vectorsearch"
normalized_original_url: "https://github.com/timescale/pg_vectorsearch"
original_read_at: "2026-10-15T11:08:09+08:00"
original_read_status: "readable"
collection_window: "recent_24h"
---

# pg_vectorsearch：用 PRISM 与量化做 PostgreSQL 向量索引

<!-- AUTO:BEGIN -->
## 摘要

pg_vectorsearch 是 PostgreSQL 的近似最近邻扩展，PRISM 结合分层路由、RaBitQ 量化和全精度重排。README 声称在其基准中有速度与内存优势，也支持现有 pgvector 列；但明确标记为 alpha，仅供测试，不能把标题的比较当成所有工作负载的结论。

## 重点解读

- README 首先列出 alpha 状态、索引能力、SIMD 距离计算与动态更新。
- 查询先经过中心树和 posting list，再利用量化误差界过滤，最后回表做全精度重排。
- 可以使用原生 vec32/vec16 类型，也能在已有 vector/halfvec 列旁建立索引；算子和距离度量需要匹配。
- 列表增长需要维护和重平衡，构建要求 PostgreSQL 18 及相应工具链。

## HN 讨论

HN 评论讨论维度限制、PostgreSQL 版本与托管平台准入、过滤检索，以及为何采用独立扩展。维护者回应项目希望在 alpha 阶段快速试验，与稳定 pgvector 并存。

## 局限与待核验

已读完整 README，未安装扩展或复现比较基准。版本升级可能需要重建扩展及索引；未独立核验评论中的维度上限和各云平台支持情况。README 未给明确发表日期。

## 原文链接

- [Hacker News 条目](https://news.ycombinator.com/item?id=50086165)
- [原文](https://github.com/timescale/pg_vectorsearch)
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
