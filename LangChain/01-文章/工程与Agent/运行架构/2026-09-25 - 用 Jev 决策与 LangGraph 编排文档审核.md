---
type: article
source: https://www.langchain.com/blog/building-prod-with-jev-and-langgraph
source_aliases: []
original_title: Building Prod with Jev and LangGraph
authors:
- Sydney Runkle
- Hunter Lovell
authors_source: 原文页首署名
published: '2026-09-25'
published_source: 原文页首及官方博客列表
published_evidence: September 25, 2026
collected: '2026-09-26'
updated: '2026-09-26'
last_checked: '2026-10-02'
category: 工程与Agent/运行架构
source_section: LangChain 官方博客技术实践
tags:
- lc
- AI
- 运行架构
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
---

# 用 Jev 决策与 LangGraph 编排文档审核

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E8%BF%90%E8%A1%8C%E6%9E%B6%E6%9E%84)

> [原文：Building Prod with Jev and LangGraph](https://www.langchain.com/blog/building-prod-with-jev-and-langgraph) · 发布于 2026-09-25 · 收录于 2026-09-26  
> 作者：Sydney Runkle、Hunter Lovell · LangChain 官方博客技术实践  
> 中文摘要与重点图文节选；示例和实验未运行，内嵌演示视频未逐段观看。

## 摘要

LangChain 用 Jev 与 LangGraph 将文档审核拆成受代码控制的流程：Jev 并行判断文档是否相关、是否含个人信息、是否可能受法律特权保护，图根据结果转交语言模型脱敏或暂停等待律师审核。作者在同一图中比较 Jev 与 Sonnet，报告分类步骤快5–6倍；这是试验中的局部耗时，文中未给完整样本与版本，不能等同端到端提速或判断更准确。LangGraph 用状态、检查点和人工中断组织执行，语言模型仍承担开放式处理，决策模型的输出也需要可观察和可测试。

## 重点图文解读

### 让代码管理流程，让模型判断语义

文章把 Jev 定位为返回结构化判断和概率的决策模型。与让语言模型安排每一步相比，这种设计把分支顺序保留在代码里，只把难以写成固定规则的判断交给模型；需要生成内容时仍可调用语言模型。

图示：原图对比固定规则软件、由语言模型循环调工具的 Agent，以及代码流程中嵌入语义判断的组合方式；不是性能对照结果。

*原图对比固定规则软件、由语言模型循环调工具的 Agent，以及代码流程中嵌入语义判断的组合方式；不是性能对照结果。* [原图](<https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6ab6bb0e4b0d8d8cdd3c84bf_agents-three-parts-light-v6-3200x1800.png>) · [文章出处](https://www.langchain.com/blog/building-prod-with-jev-and-langgraph)

### 状态、检查点和中断分别解决不同问题

LangGraph 的节点执行工作，状态传递结果，边决定下一步。检查点保存已经形成的状态，人工中断在动作前停下等待审核，调用轨迹则用于追溯决策。组件提供这些机制，不等于无需为具体流程设计测试。

图示：语言模型生成文本，Jev 根据状态与问题输出结构化判断及概率；示意条形不表示不同模型的准确率排名。

*语言模型生成文本，Jev 根据状态与问题输出结构化判断及概率；示意条形不表示不同模型的准确率排名。* [原图](<https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6ab6bba9f4abbf2c6fbd82bb_llm-prose-vs-jev-decisions-v3-3840x1600%20(1).png>) · [文章出处](https://www.langchain.com/blog/building-prod-with-jev-and-langgraph)

### 把文档分流到适当的处理者

诉讼资料审核示例对每页一次询问三个问题：是否响应请求、是否含个人信息、是否可能受法律特权保护。结果分别用于排除无关页、交给语言模型脱敏，或进入 attorney_review 节点暂停等待律师判断；文中说明实际可并行处理页面。

图示：示例调用把页面和审核请求放入 State，并单独定义是否包含个人信息的问题；这里展示的是该次决策输入。

*示例调用把页面和审核请求放入 State，并单独定义是否包含个人信息的问题；这里展示的是该次决策输入。* [原图](<https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6ab6bbc97846f7eab489f1d1_Screenshot%202026-09-24%20at%2010.14.01%E2%80%AFPM.png>) · [文章出处](https://www.langchain.com/blog/building-prod-with-jev-and-langgraph)

### 看清概率输出与局部速度指标

LangSmith 可显示决策输入、问题及概率输出，帮助检查页面为何走入某条分支。作者用同一个图比较 Jev 分类与 Sonnet 判断，报告分类步骤在各次试验中快5–6倍；原文未给出完整样本、版本或准确率对照。

图示：contains_pii 在示例中输出0.98，表示这一问题的模型判断概率，不是整体审核准确率或实际验证的安全性。

*contains_pii 在示例中输出0.98，表示这一问题的模型判断概率，不是整体审核准确率或实际验证的安全性。* [原图](<https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6ab6bbd51882458652207b1b_Screenshot%202026-09-24%20at%2010.14.17%E2%80%AFPM.png>) · [文章出处](https://www.langchain.com/blog/building-prod-with-jev-and-langgraph)

### 受限选择可以保留回退路径

文末转述 Browserbase 的早期测试：Stagehand 从候选页面元素中选择动作，置信度低于0.7时回退语言模型，act() 中位延迟由1.97秒降至0.46秒。这是另一种任务及局部指标，不能与文档分类结果合成通用提速幅度。

**媒体范围：**正文4张静态图均已读取并采用；未发现独立 HTML 表格。正文另有2段嵌入视频，未逐段核验，不据视频补充结论。未发现其他正文 SVG、画布或独立视频元素。

## 适用条件与局限

5–6倍只对应作者试验中的分类耗时，本次未运行示例或复现数据。文档审核涉及的真实法律判断仍由示例中的律师审核节点承接，文章不是完整法律合规验证。开篇供应商的最高200倍提速与400倍降本主张也只针对其受限决策基准，不能套用于这套流程。

## 怎样理解与应用（AI 解读）

**AI 解读：**可先用虚构文档测试所有分支：无关页是否排除、含个人信息的页是否进入脱敏、疑似特权页是否确实暂停。再分别量测分类耗时、整页完成时间及各类错误，避免只看到更快的模型调用。本次未处理真实诉讼资料或执行审核。

## 变更记录

- 2026-09-26：首次收录9月25日发布的文章；摘要独立事实与可读性复核通过，采用4张原图，保留适用条件及证据边界。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
