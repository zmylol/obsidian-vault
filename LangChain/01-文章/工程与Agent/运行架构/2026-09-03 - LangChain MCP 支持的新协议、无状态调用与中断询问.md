---
type: article
source: https://www.langchain.com/blog/mcp-in-langchain-stateless-protocol-elicitation-and-more
source_aliases: []
original_title: 'MCP in LangChain: Stateless Protocol, Elicitation, and More!'
authors:
- Sydney Runkle
authors_source: 原文页首署名
published: '2026-09-03'
published_source: 原文页首或官方博客列表
published_evidence: September 3, 2026
collected: '2026-09-10'
updated: '2026-09-14'
last_checked: '2026-10-04'
category: 工程与Agent/运行架构
source_section: LangChain 官方博客署名文章
tags:
- lc
- AI
- 运行架构
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
---

# LangChain MCP 支持的新协议、无状态调用与中断询问

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E8%BF%90%E8%A1%8C%E6%9E%B6%E6%9E%84)

> [原文：MCP in LangChain: Stateless Protocol, Elicitation, and More!](https://www.langchain.com/blog/mcp-in-langchain-stateless-protocol-elicitation-and-more) · 发布于 2026-09-03 · 收录于 2026-09-10  
> 作者：Sydney Runkle · LangChain 官方博客  
> 中文摘要与重点图文节选；示例代码未执行，外链论文与实验报告未单独复现。产品能力按文章发布日期理解。

## 摘要

LangChain 将 MCP 工具接入并入 Python 主包，由 FastMCP 为每个连接协商新旧协议。新版无状态请求减少会话绑定，工具目录可按服务端给出的有效期缓存；工具缺少参数或需要确认时，可通过 LangGraph 中断暂停，收到回答后重试。使用中断仍需配置状态保存器，缓存也应按调用者分开。2026 年 9 月发布时，这套接口要求 langchain[mcp]>=1.4.0，仍为测试版，TypeScript 支持尚待推出，不能把新版特征套到所有旧服务器。

## 重点文字解读

### 无状态核心改变连接方式

原文对比旧版先握手取得 session ID、随后携带它调用工具，与新版自带版本和身份的独立请求。服务部署因此可减少对粘性路由和共享 session store 的依赖。

图示：原文比较 2025-11-25 与 2026-07-28 协议：左侧先初始化再带 session ID 调用，右侧省去会话握手。

*原文比较 2025-11-25 与 2026-07-28 协议：左侧先初始化再带 session ID 调用，右侧省去会话握手。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6a99a89cedef6b0a2f29359a_mcp-request-flow.png) · [文章出处](https://www.langchain.com/blog/mcp-in-langchain-stateless-protocol-elicitation-and-more)

图示：三副本拓扑对比：旧会话绑定到持有它的实例；无状态请求可由不同实例响应。图示为原文协议模型。

*三副本拓扑对比：旧会话绑定到持有它的实例；无状态请求可由不同实例响应。图示为原文协议模型。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6a99a8aee0028cebca2f82a6_mcp-stateless-topology.png) · [文章出处](https://www.langchain.com/blog/mcp-in-langchain-stateless-protocol-elicitation-and-more)

### 中断后带答案重试

elicitation 让工具提出缺失参数或审批问题，运行暂停后再带回答恢复；需要 checkpointer 保存暂停状态。协议层重试并不能替代具体工具对副作用的处理。

### 兼容性与缓存有边界

FastMCP 可逐连接协商协议，ClientGroup 可为不同服务配置认证；缓存遵循服务端 TTL，文章建议每个 caller 使用自己的客户端以免混用目录。发布时命名空间要求 langchain[mcp]>=1.4.0、仍为 beta，TypeScript 支持尚待后续发布。

已检查正文媒体清单（静态图片 3 张、表格 0 处、视频嵌入 0 处），节选与上述重点相关的 2 张图片。

## 适用条件与局限

版本、语言支持和 API 稳定性按 2026-09-03 的文章记录；不能把新版无状态特征推广到所有旧服务器。安装与示例均未执行。

## 怎样理解与应用（AI 解读）

迁移时分别验证旧服务器、无状态服务器、用户拒绝询问和缓存到期四条路径，并检查审批恢复是否重复执行写入。

## 变更记录

- 2026-09-10：首次收录，读取正文、核对发布日期与署名，整理中文摘要与重点解读。
- 2026-09-11：用协议流程与拓扑图替换调用增长图，补充 beta、Python、checkpointer 和每调用者缓存限制。
- 2026-09-14：按现行摘要门槛补全主要机制、结果与必要条件，完成独立事实和可读性复核；同步摘要卡片。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
