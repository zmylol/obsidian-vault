---
type: article
source: https://www.langchain.com/blog/context-engineering-deep-agents-remember
source_aliases: []
original_title: "Context Engineering: How Deep Agents Remember"
authors:
- Jess Weng
authors_source: 原文页首署名
published: '2026-10-14'
published_source: 原文页首及官方博客列表
published_evidence: October 14, 2026
collected: '2026-10-15'
updated: '2026-10-15'
last_checked: '2026-10-23'
category: 工程与Agent/上下文管理
source_section: LangChain 官方博客技术说明
tags:
- lc
- AI
- 上下文管理
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
---

# 用 Deep Agents 管理长任务上下文与长期记忆

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#上下文管理)

> [原文：Context Engineering: How Deep Agents Remember](https://www.langchain.com/blog/context-engineering-deep-agents-remember) · 发布于 2026-10-14 · 收录于 2026-10-15  
> 作者：Jess Weng · LangChain 官方博客技术说明  
> 中文摘要与重点图文节选；原文演示和案例未在本库运行。

## 摘要

Deep Agents 把长任务的上下文管理放进 Agent 运行框架：大工具结果与长用户消息先落到文件，模型只看预览；对话接近窗口上限时压缩旧消息，但保留可读回的原始记录。Skills 按需加载完整指令，子 Agent 在独立上下文中处理噪声工作，长期记忆则以文件跨会话保存。原文给出的约 2 万 token 工具结果、5 万 token 用户消息和 85% 摘要触发点是当前默认示例，可配置；文章解释机制，没有提供这些做法对准确率的受控比较。

## 重点文字解读

### 两类问题：阻止进入与整理已有上下文

文章用竞争分析 Agent 举例：五家公司的原始导出、搜索结果和草稿不断累积，到写报告时大部分已经无关。检索只能减少“新放进来”的信息，框架还要处理已经进入历史的噪声。Deep Agents 用 middleware 在模型调用或工具调用前后介入，而不是要求主模型每步自行记住清理策略。

### Offloading 避免一次性尖峰

FilesystemMiddleware 遇到约 20,000 token 以上的工具结果时，把全文放进 `/large_tool_results/{tool_call_id}`，模型收到首尾预览及路径；较长用户消息在约 50,000 token 时放进 `/conversation_history/`。需要细节时可用 `read_file` 分段回读。这里的效果是推迟并控制进入模型窗口的信息，不是删除原数据。

### Summarization 处理逐步增长

SummarizationMiddleware 在每次模型调用前检查占用，默认接近窗口 85% 时把旧消息压成一段摘要，近期消息原样保留；原文称旧消息存入 `/conversation_history/{session_id}.md`，可再读取。下图的尖峰由 offloading 截下，慢速增长则由摘要重置；曲线为机制示意，不能当成实测性能结果。

图示：原文图：卸载大结果与摘要旧历史分别处理上下文尖峰和慢速增长

*图注：黑点表示大结果在进入窗口前卸载；蓝线在示例 85% 阈值触发摘要后下降。坐标展示机制示意，并非本库运行数据。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6ac7d1ec1e9634285e74f7ec_context-management-light-1.png) · [文章出处](https://www.langchain.com/blog/context-engineering-deep-agents-remember)

### Skills、子 Agent 与文件记忆

SkillsMiddleware 先读各 `SKILL.md` 的名称和说明，完整步骤仅在相关任务出现时由模型读取。SubAgentMiddleware 把搜索和多文件阅读放到独立上下文，主 Agent 只接收子任务结论。MemoryMiddleware 则在运行开始读取指定 Markdown 记忆文件，每次模型调用注入并允许更新；文件在自有存储中，可供下一次会话及不同模型使用。原文的五个原则是设计建议，未提供跨任务准确率实验。

## 适用条件与局限

阈值是文中当前默认值或示例，应以实际版本和配置确认。Offloading 与摘要都可能使模型暂时看不到关键证据；必须保留回读路径，并测试模型是否会主动回读。原文包含未检查的 iframe 和动图，本篇只采用已核验的静态关键图；示例代码未执行。

## 怎样理解与应用（AI 解读）

**AI 解读：**可用一个需反复查询五份大文件的固定任务，分别记录工具结果卸载次数、摘要触发点、原始资料回读率和最终答案遗漏。若回读率很低但遗漏增加，应优先调整预览和摘要提示，而不是只追求窗口占用降低；这是待验证的应用思路。

## 变更记录

- 2026-10-15：首次收录；完整读取正文，核对日期、作者和配图；摘要由同一执行者完成事实与只读双遍复核。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
