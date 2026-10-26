---
type: article
source: https://www.langchain.com/blog/building-long-running-agents-with-scaledown-and-deep-agents
source_aliases: []
original_title: "Building Long-Running Agents with ScaleDown and Deep Agents"
authors:
- Sydney Runkle
- Srimanth Tangedipalli
- Neal Patel
authors_source: 原文页首署名
published: '2026-10-13'
published_source: 原文页首及官方博客列表
published_evidence: October 13, 2026
collected: '2026-10-14'
updated: '2026-10-14'
last_checked: '2026-10-14'
category: 工程与Agent/上下文管理
source_section: LangChain 官方博客技术说明
tags:
- lc
- AI
- 上下文管理
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
---

# 用 ScaleDown 为长运行 Agent 压缩上下文

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#上下文管理)

> [原文：Building Long-Running Agents with ScaleDown and Deep Agents](https://www.langchain.com/blog/building-long-running-agents-with-scaledown-and-deep-agents) · 发布于 2026-10-13 · 收录于 2026-10-14  
> 作者：Sydney Runkle, Srimanth Tangedipalli, Neal Patel · LangChain 官方博客技术说明  
> 中文摘要与重点图文节选；示例代码未执行，案例和厂商基准按原文限定理解。

## 摘要

ScaleDown 为 LangChain 与 Deep Agents 提供受限解码模型和三类中间件，把长任务中的狭窄上下文决策交给专用模型：Summarize 压缩旧历史、Compress 按查询裁剪工具结果、Extract 从用户消息复制字段并可分类。文章称模型最多接受 100 万 token；ScaleDown 自有公开数据集基准称，相对 GPT-5.5、GPT-5.4 Mini 和 Nano 的平均值，Summarize 便宜 41 倍、快 2.7 倍，Compress 便宜 138 倍、快 1.8 倍。摘要失败时原历史保留，但真实 Agent 的准确率、重取行为和端到端收益仍需验证。

## 重点图文解读

### 将狭窄决策从主模型分离

LangChain 的 `langchain-scaledown` 集成提供三种中间件：Summarize 压缩旧消息，Compress 缩短工具输出，Extract 从用户消息复制字段；Classify 可在自定义中间件中用来识别循环或偏航。主 Agent 仍由通用模型负责开放式规划和生成；ScaleDown 的受限解码模型各自只处理指定任务，文章称输入上限为 100 万 token。

图示：原文图：ScaleDown 在主 Agent 前后处理历史、字段和工具结果

*图注：蓝色框表示专用模型的位置；Classify 偏航拦截是原文给出的自定义示例，不是预装中间件。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6acdab828208336ba4c088f6_scaledown-overview.png) · [文章出处](https://www.langchain.com/blog/building-long-running-agents-with-scaledown-and-deep-agents)

### 历史摘要与工具结果压缩

SummarizationMiddleware 达到触发阈值后用摘要替换旧消息、保留近期消息；ScaleDown 调用失败时原历史不变，Agent 继续运行。ToolCompressionMiddleware 为指定工具增加可选 `compression_query`，调用前移除该参数，拿到结果后只保留与查询相关的片段；原文示例从 18,402 字符压至 3,110 字符，并提示 Agent 如需全文可不带该参数重调工具。这里没有声称压缩失败时一定自动回退。

### 抽取、成本和接入条件

Extract 只读取用户消息，把字段及可选分类写入 `scaledown_extraction` 状态；示例中缺失的邮箱保持空值。ScaleDown 自有公开数据集基准以 GPT-5.5、GPT-5.4 Mini 和 Nano 的平均值为比较对象，声称 Summarize 便宜 41 倍、快 2.7 倍，Compress 便宜 138 倍、快 1.8 倍且更准确；具体任务和实际 Agent 的端到端收益仍需本地验证。经 LangSmith LLM Gateway 使用时，管理员需先配置 ScaleDown 密钥，再由调用方用 LangSmith 密钥访问网关。

## 适用条件与局限

专用模型适合压缩、抽取和分类，不替代开放式代码编写或规划。41 倍和 138 倍成本数字来自 ScaleDown 自有基准，比较对象是三个 GPT 型号的平均值，并非本文对真实 Agent 全流程的实测；示例代码未运行。摘要失败时保留原历史，但压缩结果仍可能丢失后续决策所需信息，需用自身任务回放验证。

## 怎样理解与应用（AI 解读）

**AI 解读：**在自己的长任务轨迹上分别打开三种中间件，比较最终任务完成率、压缩后遗漏、总 token 成本和延迟。尤其让 Agent 处理需要回看工具全文的任务，确认 `compression_query` 的重取提示是否真的被遵循。

## 变更记录

- 2026-10-14：首次收录；完整读取正文，核对日期、作者和配图；摘要由同一执行者逐句核对原文并单独只读复核。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
