# Hacker News 每日简报｜2026-10-19

<!-- AUTO:BEGIN -->
## 今日概览

本轮新增 8 篇：最近 24 小时完成原文核验 7 篇，重试恢复 1 篇；累计 34 篇，仍有 5 篇原文待重试。

时间窗口：2026-10-18T01:04:44.139+00:00 至 2026-10-19T01:04:44.139+00:00；增量重叠窗口从 2026-10-14T02:55:43.762000+00:00 开始。

## 1. DeepSeek Search 与 Fetch：面向 Agent 的实时网页能力

DeepSeek 文档介绍两组面向 Agent 与 RAG 应用的只读网页 API：Search 根据查询返回结构化结果，Fetch 把单个网页转成 Markdown。两者都使用 Bearer API key，按成功请求计费；文档还给出查询语法、返回字段、错误码和 QPS 限制。

- [[01-文章/AI 与 Agent/搜索与抓取/2026-10-18 - DeepSeek Search 与 Fetch：面向 Agent 的实时网页能力|完整笔记]]
- [原文](https://api-docs.deepseek.com/guides/search/) · [HN 548 分 / 257 评论](https://news.ycombinator.com/item?id=50138531)

## 2. 软件背后的人：Agent 时代仍需要产品判断

Linear 联合创始人 Karri Saarinen 认为，好产品会留下制作者的经验、价值和取舍。Agent 可以自动化实现流程，却可能让独立的局部改动互相叠加，最终形成缺少共同视角的“软件工厂”。

- [[01-文章/AI 与 Agent/产品工程/2026-10-18 - 软件背后的人：Agent 时代仍需要产品判断|完整笔记]]
- [原文](https://karrisaarinen.com/posts/someone-behind-the-software/) · [HN 316 分 / 134 评论](https://news.ycombinator.com/item?id=50142573)

## 3. Hybrid Reasoning Agents：在潜在空间与文本之间切换

论文提出 HybridAgents，让 Agent 在潜在推理和文本交互之间动态切换：潜在空间用于更高效的内部计算，文本模式继续承担工具调用和可检查的行动。作者报告在 11 个数学、科学、医学、搜索和 Agent 基准上提升性能并减少 token。

- [[01-文章/AI 与 Agent/混合推理/2026-10-18 - Hybrid Reasoning Agents：在潜在空间与文本之间切换|完整笔记]]
- [原文](https://arxiv.org/abs/2610.18861) · [HN 206 分 / 129 评论](https://news.ycombinator.com/item?id=50145337)

## 4. Parser Combinators：用组合器构建可读解析器

这篇交互式文章用 TypeScript 从一个返回“解析值 + 剩余输入”的 partial parser 出发，逐步组合序列、映射和重复操作，最后解析 ping 输出。它展示了介于正则表达式和完整解析器生成器之间的一种函数式组织方式。

- [[01-文章/编程语言与工具/解析器/2026-10-18 - Parser Combinators：用组合器构建可读解析器|完整笔记]]
- [原文](https://t3.at/blog/2026-10-17-parser-combinators/) · [HN 221 分 / 80 评论](https://news.ycombinator.com/item?id=50139067)

## 5. Intel 8087：浮点加减的微码与硬件

Ken Shirriff 通过芯片显微图、数据通路和 8087 微码，解释 1980 年代 x87 浮点加法与减法如何完成对阶、加减、规格化、舍入和特殊值处理。文章把抽象的 IEEE 浮点行为连接到真实的微码分支和电路。

- [[01-文章/系统与基础设施/指令集/2026-10-18 - Intel 8087：浮点加减的微码与硬件|完整笔记]]
- [原文](https://www.righto.com/2026/10/8087-addition-subtraction-microcode.html) · [HN 88 分 / 33 评论](https://news.ycombinator.com/item?id=50142449)

## 6. vLLM：用 CuTe DSL 优化 Kimi K3 解码

vLLM 介绍在 NVIDIA GB300 上为 Kimi K3 构建统一 CuTe DSL 解码路径的过程，覆盖注意力、MoE、通信和缓存。作者报告在特定 8/16 GPU 配置上提升吞吐，并把 Agent 生成的优化代码与自动验证、隔离和可复现实验绑定。

- [[01-文章/系统与基础设施/GPU 推理/2026-10-18 - vLLM：用 CuTe DSL 优化 Kimi K3 解码|完整笔记]]
- [原文](https://vllm.ai/blog/2026-10-16-kimi-k3-megakernel) · [HN 20 分 / 0 评论](https://news.ycombinator.com/item?id=50140784)

## 7. Python 二进制 wheel 与供应链攻击

文章指出，PyPI 上的二进制 wheel 可以与同一包的源代码不一致，现有扫描器通常更擅长分析源码而不是反编译每个平台的二进制。攻击者因此可能把恶意逻辑放进 wheel，而让源码看起来干净。

- [[01-文章/安全与隐私/软件供应链/2026-10-18 - Python 二进制 wheel 与供应链攻击|完整笔记]]
- [原文](https://rushter.com/blog/python-binary-wheels/) · [HN 9 分 / 1 评论](https://news.ycombinator.com/item?id=50142176)

## 8. GLM-Legal：面向法律工作流的 Agent 模型

GLM-Legal 是面向复杂法律任务和真实工作流的 Agent 模型。官方报告 Harvey LAB 的 all-pass 为 19.2%，比基础模型高 12.5 个百分点，并称 LegalBench 与 PLawBench 达到前沿闭源模型水平；文章还展示了合同、证据分析和东南亚隐私合规案例。

- [[01-文章/AI 与 Agent/模型发布与评估/2026-10-12 - GLM-Legal：面向法律工作流的 Agent 模型|完整笔记]]
- [原文](https://z.ai/blog/glm-legal) · [HN 675 分 / 370 评论](https://news.ycombinator.com/item?id=50058507)

## 待重试

以下 5 篇原文仍未获得可核验正文，保留在 pending/retry 队列：50033407 Bitwarden、50031653 Unix registry、50029487 Lightbulb Computer、50040276 LineageOS 24、50061791 Firefox resumable downloads。

<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
