---
type: "article"
title: "PS2 Web Recomp：将 EE 代码静态重编译为 WebAssembly"
source: "Hacker News"
published: null
collected: "2026-10-13T11:09:26+08:00"
category: "系统与基础设施/WebAssembly 与游戏运行时"
original_title: "Show HN: PS2 games statically recompiled to WebAssembly"
original_author: "snuri00（仓库维护者）"
hn_item_id: 50052251
hn_author: "deadxwarrior"
hn_submitted_at: "2026-10-12T06:46:53+00:00"
hn_score: 279
hn_comments: 146
hn_item_url: "https://news.ycombinator.com/item?id=50052251"
original_url: "https://github.com/snuri00/ps2-web-recomp"
normalized_original_url: "https://github.com/snuri00/ps2-web-recomp"
original_read_at: "2026-10-13T11:09:26+08:00"
original_read_status: "readable"
collection_window: "recent_24h"
---

# PS2 Web Recomp：将 EE 代码静态重编译为 WebAssembly

<!-- AUTO:BEGIN -->
## 摘要

项目将 PS2 主处理器游戏代码转为 C++，再编译为 WebAssembly，配合系统与硬件运行时在浏览器运行。EE 静态重编译与 IOP 解释执行等机制并存，因此不能把它概括成完全没有模拟。

## 重点解读

- README 展示 GT4 与 God of War II，帧率属于作者在指定条件下的自测。
- EE 代码提前编译；IOP 模块解释执行，VU1 则结合提前编译与即时转换。
- WebGPU、批次合并、纹理缓存和线程调度共同处理图形与运行开销。
- 探索运行用于补充静态分析遗漏的入口，新游戏仍可能缺少系统调用或硬件功能实现。

## HN 讨论

HN 讨论重编译与模拟的边界、时序准确性、浏览器转换、控制器输入、性能及分发问题；作者明确它不是周期精确模拟。

## 局限与待核验

仅两款游戏已被带起来，未独立复现帧率，部分向量运算可能与真机不同。仓库不含游戏资产，原文要求转换产物留作私人使用。README 无明确发布日期。

## 原文链接

- [Hacker News 条目](https://news.ycombinator.com/item?id=50052251)
- [原文](https://github.com/snuri00/ps2-web-recomp)
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
