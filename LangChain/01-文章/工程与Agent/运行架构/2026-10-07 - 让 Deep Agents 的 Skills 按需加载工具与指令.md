---
type: article
source: https://www.langchain.com/blog/revamping-skills-in-deep-agents
source_aliases: []
original_title: "Revamping Skills in Deep Agents"
authors:
- Sydney Runkle
authors_source: 原文页首署名
published: '2026-10-07'
published_source: 原文页首及官方博客列表
published_evidence: October 7, 2026
collected: '2026-10-08'
updated: '2026-10-08'
last_checked: '2026-10-10'
category: 工程与Agent/运行架构
source_section: LangChain 官方博客产品与工程说明
tags:
- lc
- AI
- 运行架构
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
---

# 让 Deep Agents 的 Skills 按需加载工具与指令

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#运行架构)

> [原文：Revamping Skills in Deep Agents](https://www.langchain.com/blog/revamping-skills-in-deep-agents) · 发布于 2026-10-07 · 收录于 2026-10-08  
> 作者：Sydney Runkle · LangChain 官方博客产品与工程说明  
> 中文摘要与重点图文节选；示例代码未执行，产品功能按文章发布日期理解。

## 摘要

LangChain 为 Deep Agents 的 Skills 增加三组能力：工具可绑定到技能并在读取技能后才披露，用户显式点名的技能可在首次模型调用前预加载，长线程也能重新扫描技能库。文章以渐进式披露解释设计：系统提示只放名称和描述，完整 SKILL.md 及脚本、参考和资源按任务逐级读取，从而控制上下文增长。工具绑定还可按运行时权限返回工具，但技能重载会改变系统提示并可能使提示缓存失效；这些是产品机制说明，文中没有给出统一延迟或质量实验。

## 重点图文解读

### 机制与触发边界

原文先说明核心机制，再给出代码或配置示例。以下解读只保留与架构和部署直接相关的内容，不把产品发布说明写成通用性能结论。

![技能的名称和描述常驻上下文，完整指令以及脚本、参考和资源按需加载，体现渐进式披露。](../../../98-附件/原文配图/44cab9f79f0efad16617.png)

*技能的名称和描述常驻上下文，完整指令以及脚本、参考和资源按需加载，体现渐进式披露。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6ac683627460955a72092e8a_skill-anatomy.png) · [文章出处](https://www.langchain.com/blog/revamping-skills-in-deep-agents)

### 适用方式与限制

工具只有在技能被读取后才进入可用上下文；显式点名技能可以减少一次读取往返，但技能重载会重新扫描库并可能使提示缓存失效。运行时权限函数可按调用者返回不同工具。

## 适用条件与局限

文章描述的是 Deep Agents 最新 Skills 机制，没有给出跨模型的延迟、成本或质量对照；Open Standard 的兼容性仍取决于具体 Agent 产品。

## 怎样理解与应用（AI 解读）

**AI 解读：**可把工具权限和操作说明一起放进技能边界，再用固定任务比较按需披露与预加载对首轮延迟、缓存命中和误调用率的影响；本次未运行示例。

## 变更记录

- 2026-10-08：首次收录；完整读取正文，核对日期、作者和采用的原文配图；摘要完成事实与可读性双遍复核。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
