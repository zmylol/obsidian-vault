---
type: article
source: https://www.langchain.com/blog/building-multi-agent-applications-with-deep-agents
source_aliases: []
original_title: Building Multi-Agent Applications with Deep Agents
published: '2026-01-21'
published_source: 原文页首或作者订阅源
published_evidence: '原文页首: January 21, 2026'
collected: '2026-09-09'
updated: '2026-09-15'
last_checked: '2026-10-13'
category: 工程与Agent/多智能体协作
source_section: LangChain 官方博客署名文章
tags:
- lc
- AI
- 多智能体协作
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
authors:
- Sydney Runkle
- Vivek Trivedy
authors_source: 原文页首署名
---

# 子 Agent 与 Skills 如何分担复杂任务

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E5%A4%9A%E6%99%BA%E8%83%BD%E4%BD%93%E5%8D%8F%E4%BD%9C)

> [原文：Building Multi-Agent Applications with Deep Agents](https://www.langchain.com/blog/building-multi-agent-applications-with-deep-agents) · 发布于 2026-01-21 · 收录于 2026-09-09  
> 作者：Sydney Runkle、Vivek Trivedy · LangChain 官方博客署名文章  
> 中文摘要与重点图文解读，内容与配图为节选；示例代码未运行，关联论文未精读。历史文章中的产品状态与性能数据以原文条件为准。  

## 摘要

Deep Agents 用子 Agent 和 Skills 处理复杂任务中的上下文膨胀：子 Agent 在自己的上下文中执行多步工作，只把结果交回主流程；Skills 则先展示名称和说明，需要时才加载完整步骤。前者适合隔离探索过程、配置专用工具或模型，后者适合复用流程，二者也可组合，让子 Agent 按需读取技能。作者建议写清任务描述、输出要求并缩小工具集合。文章提供配置方法，没有量化证明组合必然更快或更准确；任务边界与传回结果仍需设计。

## 重点图文解读

### 子 Agent 隔离探索过程

多次搜索和读文件产生的中间结果留在子 Agent 中，主 Agent 接收最终汇总；不同任务也可配置不同工具和模型。

![主 Agent 把具体工作交给拥有独立上下文的子 Agent，只接收返回结果，减少探索信息占据主上下文。](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/1664a5c71865e1ed7782.png)

*主 Agent 把具体工作交给拥有独立上下文的子 Agent，只接收返回结果，减少探索信息占据主上下文。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/69cbaa03649e3ebd9d135314_image--9--1.png) · [文章出处](https://www.langchain.com/blog/building-multi-agent-applications-with-deep-agents)

### Skills 按需要展开指令

先提供技能名称和描述，确定需要后再读取正文，因此主要解决能力说明如何进入上下文的问题。

![技能描述先进入上下文，详细指令在选中技能后才读取；这里变化的是信息加载时机。](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/f57308c52df3285bedcb.png)

*技能描述先进入上下文，详细指令在选中技能后才读取；这里变化的是信息加载时机。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/69cbaa03649e3ebd9d135318_image--10--1.png) · [文章出处](https://www.langchain.com/blog/building-multi-agent-applications-with-deep-agents)

### 交接要求决定结果是否可用

文章建议写清子 Agent 描述、系统指令和输出格式，并仅给出任务所需工具。

已检查正文配图与媒体，按原文顺序节选与本篇重点直接相关的图片；其他配图和演示见原文。

## 适用条件与局限

子 Agent 汇总可能遗漏证据；Skills 的延迟加载不等于独立执行，也不自动形成权限隔离。

## 怎样理解与应用（AI 解读）

为资料核对任务约定输出为原文 URL、日期依据、核心事实和未解决问题。无论由哪种执行方式处理，主流程都能按相同字段验收。

## 变更记录

- 2026-09-09：首次收录，核对正文、发布日期及媒体，整理中文摘要与重点解读。
- 2026-09-15：完整回读原文，补全摘要的主要机制、结果及必要条件，完成独立事实和可读性复核并同步卡片。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
