---
type: article
source: https://www.langchain.com/blog/agent-traces-ai-search-langsmith
source_aliases: []
original_title: "Search agent traces by behavior with AI Search in LangSmith"
authors:
- Arjun Natarajan
- Eugene Yurtsev
- Suraj Vathsa
authors_source: 原文页首署名
published: '2026-10-13'
published_source: 原文页首及官方博客列表
published_evidence: October 13, 2026
collected: '2026-10-14'
updated: '2026-10-14'
last_checked: '2026-10-23'
category: 工程与Agent/评估与可靠性
source_section: LangChain 官方博客技术说明
tags:
- lc
- AI
- 评估与可靠性
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
---

# 用 LangSmith AI Search 按 Agent 行为检索轨迹

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#评估与可靠性)

> [原文：Search agent traces by behavior with AI Search in LangSmith](https://www.langchain.com/blog/agent-traces-ai-search-langsmith) · 发布于 2026-10-13 · 收录于 2026-10-14  
> 作者：Arjun Natarajan, Eugene Yurtsev, Suraj Vathsa · LangChain 官方博客技术说明  
> 中文摘要与重点图文节选；示例代码未执行，案例和厂商基准按原文限定理解。

## 摘要

LangSmith AI Search 允许用自然语言描述“泄露 PII”“用户放弃”或“Agent 声称完成但实际没有”等行为，再从轨迹中找出匹配运行。它先用结构化过滤缩小候选，再让决策模型读取 SmithDB 整理的统一轨迹；每条轨迹按优先级填充 8K token，先保留用户与 Agent 消息。在随机抽取的 150 条 Open SWE 会话中，中位会话约 72K token，其中用户与 Agent 回复约 2K，工具输出约占 85%。功能只在 LangSmith Cloud 的 GCP 美、欧、亚太区域公测，需管理员启用；工具证据可能被截断，原文未给出分类准确率。

## 重点图文解读

### 从行为问题到候选轨迹

“声称完成但没有完成”与“用户似乎放弃”不能简单用标签或关键字命中。AI Search 让用户描述行为，先用已有结构化条件缩小运行范围，再由快速决策模型逐条判断，结果边扫描边返回；原文没有提供分类准确率或召回率。

### SmithDB 将重复 trace 整理成 trajectory

不同 SDK 的 trace 格式各异，而且每次模型调用常重复带上此前对话。SmithDB 在接收时把同一会话整理为按时序排列、每条消息和工具结果只出现一次的 trajectory。图中三次模型调用反复出现的“Fix test”“Run tests”在右侧仅保留一次，因此检索模型能看到整段行为而少读重复内容。

![原文图：原始 trace 中重复的消息被整理为单一轨迹](../../../98-附件/原文配图/b30294740858483ca675.png)

*图注：左侧三次调用反复包含早先消息；右侧 trajectory 按顺序保留一次消息、工具调用和结果。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6acd659f6471e6e5be9d22c2_ai-search-trajectory-view.png) · [文章出处](https://www.langchain.com/blog/agent-traces-ai-search-langsmith)

### 8K 预算与证据遗漏风险

团队抽取 150 条 Open SWE 会话；中位会话约 72K token，其中用户及 Agent 回复约 2K，工具输出约占 85%。搜索为每条轨迹设 8K token，先装用户和 Agent 回复，再装中间消息与工具结果，截断放不下的内容。这样适合从对话判断的行为，却可能漏掉只在工具错误里显现的问题；团队仍在探索按问题选择证据和不确定时二次读取。

## 适用条件与局限

目前是 LangSmith Cloud 的 GCP 美国、欧洲及亚太区域公测，组织管理员需在设置中启用；文中称不另收费。8K token 优先保留用户和 Agent 的可见消息，工具结果可能被截断，因此“忽略工具报错”等问题可能漏检；没有独立准确率或召回率测量。原文含一个 iframe，本次未检查视频内容。

## 怎样理解与应用（AI 解读）

**AI 解读：**可用一批已人工标注的“说完成但未完成”和“工具报错被忽略”轨迹比较检索命中率；后者特意检查 8K 截断的漏检。自然语言搜索适合作为发现线索，关键质量判断仍要回看原始轨迹。

## 变更记录

- 2026-10-14：首次收录；完整读取正文，核对日期、作者和配图；摘要由同一执行者逐句核对原文并单独只读复核。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
