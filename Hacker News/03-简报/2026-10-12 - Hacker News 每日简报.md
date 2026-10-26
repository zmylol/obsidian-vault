# Hacker News 每日简报｜2026-10-12

<!-- AUTO:BEGIN -->
## 今日概览

本次新增 7 篇：最近 24 小时提交 5 篇，重叠窗口补漏 2 篇；累计 13 篇，原文待重试 4 篇。

当前 24 小时窗口：2026-10-11T02:58:36.555000+00:00 至 2026-10-12T02:58:36.555000+00:00；增量重叠窗口从 2026-10-10T02:58:30+00:00 开始。按 HN 提交时间筛选，原文发布日期可早于提交日期。WebP 候选超出整个重叠窗口，未收录。

## 1. 浏览器指纹：无需 Cookie 的识别信号

解释浏览器如何组合设备信号，以及为何删 Cookie、换 IP 和安装扩展都不等于彻底消除指纹。

- 原文限制：已读正文与实现说明，未运行指纹脚本或验证不同浏览器；页面未明确标注发布日期。浏览器保护效果和作者对广告政策的判断未逐项独立核验。
- [[01-文章/安全与隐私/浏览器隐私/2026-10-11 - 浏览器指纹：无需 Cookie 的识别信号|完整笔记]]
- [原文](https://royfish.dev/fingerprints-are-the-new-cookies) · [HN 123 分 / 50 评论](https://news.ycombinator.com/item?id=50048642)

## 2. Passkey 与设备自主权：一篇有争议的反对意见

围绕凭据迁移与设备控制权的争论；笔记另用 WebAuthn 规范区分认证器证明、AT 标志和操作系统完整性。

- 原文限制：补查 W3C WebAuthn：attestation 偏好默认 none；AT 标志仅表示包含 attested credential data，并不等于已证明整个操作系统完整性。作者对这些概念的简化及平台动机推断需要谨慎；未验证具体站点策略。
- [[01-文章/安全与隐私/身份认证/2026-10-11 - Passkey 与设备自主权：一篇有争议的反对意见|完整笔记]]
- [原文](https://nonfunctional.substack.com/p/passkeys-are-a-trap-do-not-use-them) · [HN 327 分 / 188 评论](https://news.ycombinator.com/item?id=50048312)

## 3. PATH 中的波浪号可能指向当前目录

一个可导致命令从意外目录执行的引用细节，重点是区分变量赋值和命令参数中的展开规则。

- 原文限制：已读正文与演示，没有执行页面命令或修改本机 PATH。示例围绕 Bash/Zsh，不能不加区分地外推到所有 shell 与配置入口。
- [[01-文章/系统与基础设施/命令行环境/2026-10-11 - PATH 中的波浪号可能指向当前目录|完整笔记]]
- [原文](https://disconnect3d.pl//2026/10/02/dont-put-tilde-in-your-path/) · [HN 221 分 / 144 评论](https://news.ycombinator.com/item?id=50042425)

## 4. MASS：把多智能体协作经验蒸馏为模型改进信号

多 Agent 轨迹如何成为训练信号，以及为什么研究基准进步与通用、稳定的自我改进仍有距离。

- 原文限制：仅两轮和少量合成任务；外部模型评审不等于客观正确性。训练 token 的比较不含搜索、生成和评价成本。正文只标 2026 年 10 月，因此不补造发布日期。
- [[01-文章/AI 与 Agent/多智能体研究/2026-10-11 - MASS：把多智能体协作经验蒸馏为模型改进信号|完整笔记]]
- [原文](https://pub.sakana.ai/mass/) · [HN 74 分 / 39 评论](https://news.ycombinator.com/item?id=50048522)

## 5. AI Agent 反编译游戏：让机器码比对成为验收标准｜重叠补漏

游戏反编译实践突出明确验收标准的作用；字节匹配比例和成本仍来自作者自述。

- 原文限制：Token 总量是作者估算，部分日志遗失；未取得源码或重跑编译。剩余函数正确性含主观判断。HN 提交在本次最近 24 小时之外，属于重叠窗口补漏，原文发表于 10 月 9 日。
- [[01-文章/AI 与 Agent/代码逆向/2026-10-11 - AI Agent 反编译游戏：让机器码比对成为验收标准|完整笔记]]
- [原文](https://momo5502.com/posts/2026-10-09-game-decompilation/) · [HN 173 分 / 124 评论](https://news.ycombinator.com/item?id=50039092)

## 6. Rust SIMD：用 CPU 特性令牌减少内部不安全代码｜重叠补漏

用类型携带指令集可用性的证明，同时提醒安全接口与优化效果需要分开验证。

- 原文限制：正文描述当时的 fearless_simd 0.5；本轮未编译或验证性能。这是 6 月旧文，HN 提交属于重叠窗口补漏，不能当作 10 月新发布。
- [[01-文章/编程语言与工具/Rust/2026-10-10 - Rust SIMD：用 CPU 特性令牌减少内部不安全代码|完整笔记]]
- [原文](https://shnatsel.github.io/safe-simd-in-rust-even-on-the-inside/) · [HN 44 分 / 2 评论](https://news.ycombinator.com/item?id=50033601)

## 7. 通过黑箱测量重建商业空间音效

把主观喜欢的音效转成可检验的黑箱信号处理问题，同时明确固定滤波器的适用范围。

- 原文限制：未独立复现实验或试听；主要模式的近似不等于完整还原商业处理器，也不等于最真实音效。HN 原始 URL 为 HTTP，本轮已阅读其 HTTPS 页面。
- [[01-文章/系统与基础设施/音频工程/2026-10-11 - 通过黑箱测量重建商业空间音效|完整笔记]]
- [原文](http://epestr.com/blog/reverse-engineering-a-commercial-spatial-audio-effect/) · [HN 106 分 / 34 评论](https://news.ycombinator.com/item?id=50044272)

## 原文待重试

- [Bitwarden Dual License Model](https://news.ycombinator.com/item?id=50033407)：原文社区页面返回 403，待下一次重试（既有故障未恢复）。
- [Apple/macOS removed from official Unix registry](https://news.ycombinator.com/item?id=50031653)：原文注册页面返回 403，待下一次重试（既有故障未恢复）。
- [The Lightbulb Computer](https://news.ycombinator.com/item?id=50029487)：网页读取工具仍报告 URL 无法访问；未提供 HTTP 状态或根因，保留重试（既有故障未恢复）。
- [LineageOS 24](https://news.ycombinator.com/item?id=50040276)：官方原文返回 HTTP 403 Forbidden，未读取正文，保留重试（本轮首次失败）。

## 来源与核验

官方 topstories/newstories、HN 榜单与条目页，以及 Algolia 日期检索已检查。部分 API 请求曾出现连接错误，低频重试后本次窗口内待补元数据已取得；没有把失败原文写成完成文章。分数与评论数是读取时快照。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
