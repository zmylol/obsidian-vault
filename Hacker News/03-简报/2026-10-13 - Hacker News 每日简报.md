# Hacker News 每日简报｜2026-10-13

<!-- AUTO:BEGIN -->
## 今日概览

本次新增 6 篇：最近 24 小时提交 6 篇，重叠窗口补漏 0 篇；累计 19 篇，原文待重试 7 篇。

当前 24 小时窗口：2026-10-12T02:55:35.501000+00:00 至 2026-10-13T02:55:35.501000+00:00；增量重叠窗口从 2026-10-11T02:58:36.555000+00:00 开始。按 HN 提交时间筛选，原文发布日期可早于提交日期。

## 1. 用 C、CGI 与 SQLite 构建现代 Web 产品

一个少依赖的商业 Web 产品案例，展示简单部署的收益与自行实现输入处理的代价。

- 原文限制：已读全文，未审计商业产品或测量吞吐。文章的性能、部署和风险判断来自作者经验，不能推广为所有网站的选型结论；页面未明确标注发布日期。
- [[01-文章/编程语言与工具/C 与 Web 开发/2026-10-12 - 用 C、CGI 与 SQLite 构建现代 Web 产品|完整笔记]]
- [原文](https://prophitt.me/writing/a-modern-web-app-in-c) · [HN 420 分 / 172 评论](https://news.ycombinator.com/item?id=50058528)

## 2. Janas：从 SSD 按需读取专家，让模型突破 RAM 容量

将 MoE 的稀疏激活变成磁盘与内存分层策略；速度数字需连同阶段、硬件和内存压力一起看。

- 原文限制：只有一套主要硬件，部分测试仅一轮，工具比较流程并非完全一致；作者报告内存压力、桌面迟滞与一次 GPU 驱动重置。未运行代码。README 无发表日期，测试日期不冒充发布日期。
- [[01-文章/AI 与 Agent/本地推理/2026-10-12 - Janas：从 SSD 按需读取专家，让模型突破 RAM 容量|完整笔记]]
- [原文](https://github.com/prabanta-dev/janas) · [HN 50 分 / 20 评论](https://news.ycombinator.com/item?id=50063717)

## 3. PS2 Web Recomp：将 EE 代码静态重编译为 WebAssembly

把 EE 静态重编译与其他处理器、硬件建模组合起来，呈现浏览器游戏运行时的实际边界。

- 原文限制：仅两款游戏已被带起来，未独立复现帧率，部分向量运算可能与真机不同。仓库不含游戏资产，原文要求转换产物留作私人使用。README 无明确发布日期。
- [[01-文章/系统与基础设施/WebAssembly 与游戏运行时/2026-10-12 - PS2 Web Recomp：将 EE 代码静态重编译为 WebAssembly|完整笔记]]
- [原文](https://github.com/snuri00/ps2-web-recomp) · [HN 279 分 / 146 评论](https://news.ycombinator.com/item?id=50052251)

## 4. W1700K SDR：把 Wi-Fi 7 路由器改为宽带接收器

一个跨固件、驱动和数据传输的接收器项目，重点在整条工程链路及其硬件限制。

- 原文限制：已读完整 README，未编译、刷机或采集信号。采样率、调谐范围和接收性能来自项目自述；README 未给明确发布日期，未验证其他板卡兼容性。
- [[01-文章/系统与基础设施/无线电与嵌入式/2026-10-12 - W1700K SDR：把 Wi-Fi 7 路由器改为宽带接收器|完整笔记]]
- [原文](https://github.com/h0m3us3r/w1700k-sdr) · [HN 274 分 / 73 评论](https://news.ycombinator.com/item?id=50055593)

## 5. Muse Wonder：Meta 对 Agent 记忆与持续执行的主张

官方把记忆、持续执行和泛化作为 Agent 能力重点；发布声明与独立验证应分开看。

- 原文限制：已阅读全文但未调用模型、运行基准或验证动态演示；没有从图表缺失的文本中补造数值。“领先”和安全能力为官方主张，正文说完整安全报告尚待发布。
- [[01-文章/AI 与 Agent/模型发布与评估/2026-10-12 - Muse Wonder：Meta 对 Agent 记忆与持续执行的主张|完整笔记]]
- [原文](https://research.meta.ai/blog/muse-wonder) · [HN 544 分 / 302 评论](https://news.ycombinator.com/item?id=50059115)

## 6. Google DevSite 漏洞报告：会话秘密复用与反序列化链

一份作者自述的漏洞链分析；笔记保留技术教训，同时明确奖金、修复和范围尚未独立核验。

- 原文限制：未执行任何示例、漏洞请求或访问凭据。修复、奖金与漏洞仅作者报告；开头声称影响七个域，正文列举不足以完整支持该数量。未取得厂商公告或独立复现。
- [[01-文章/安全与隐私/Web 应用安全/2026-10-12 - Google DevSite 漏洞报告：会话秘密复用与反序列化链|完整笔记]]
- [原文](https://simonkoeck.com/writeups/google-devsite-flask-session-pickle-rce) · [HN 186 分 / 96 评论](https://news.ycombinator.com/item?id=50052638)

## 原文待重试

- [Bitwarden Dual License Model](https://news.ycombinator.com/item?id=50033407)：原文社区页面返回 403，待下一次重试（既有故障未恢复）。
- [Apple/macOS removed from official Unix registry](https://news.ycombinator.com/item?id=50031653)：原文注册页面返回 403，待下一次重试（既有故障未恢复）。
- [The Lightbulb Computer](https://news.ycombinator.com/item?id=50029487)：网页读取工具仍报告 URL 无法访问；未提供 HTTP 状态或根因，保留重试（既有故障未恢复）。
- [LineageOS 24](https://news.ycombinator.com/item?id=50040276)：官方原文返回 HTTP 403 Forbidden，未读取正文，保留重试（既有故障未恢复）。
- [GLM-Legal](https://news.ycombinator.com/item?id=50058507)：GLM-Legal 原文响应未提供可阅读正文，保留重试（本轮首次失败）。
- [Making big downloads resumable in Firefox](https://news.ycombinator.com/item?id=50061791)：Firefox 原文读取失败，未获得可访问正文，保留重试（本轮首次失败）。
- [Who is vfmaddrnd231pd?](https://news.ycombinator.com/item?id=50063138)：vfm 原文读取工具失败，未获得可访问正文，保留重试（本轮首次失败）。

## 来源与核验

官方 topstories/newstories、HN 榜单与条目页，以及 Algolia 日期分页补漏检查完成。正式收录均有官方 item 元数据并读取原文正文；分数与评论数为读取时快照。

检索统计：{"firebase_topstories": 500, "firebase_newstories": 500, "algolia_overlap": 719, "algolia_recent": 1083, "algolia_unique": 1802, "selected_item_metadata": 13}。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
