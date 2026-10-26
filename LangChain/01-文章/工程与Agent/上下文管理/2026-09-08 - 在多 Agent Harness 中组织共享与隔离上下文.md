---
type: article
source: https://www.langchain.com/blog/organizing-context-in-a-multi-agent-harness
source_aliases: []
original_title: Organizing Context in a Multi-Agent Harness
authors:
- Thushanth Bengre
- Chester Curme
authors_source: 原文页首署名
published: '2026-09-08'
published_source: 原文页首或官方博客列表
published_evidence: September 8, 2026
collected: '2026-09-10'
updated: '2026-09-14'
last_checked: '2026-10-04'
category: 工程与Agent/上下文管理
source_section: LangChain 官方博客署名文章
tags:
- lc
- AI
- 上下文管理
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
---

# 在多 Agent Harness 中组织共享与隔离上下文

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E4%B8%8A%E4%B8%8B%E6%96%87%E7%AE%A1%E7%90%86)

> [原文：Organizing Context in a Multi-Agent Harness](https://www.langchain.com/blog/organizing-context-in-a-multi-agent-harness) · 发布于 2026-09-08 · 收录于 2026-09-10  
> 作者：Thushanth Bengre、Chester Curme · LangChain 官方博客  
> 中文摘要与重点图文节选；示例代码未执行，外链论文与实验报告未单独复现。产品能力按文章发布日期理解。

## 摘要

Deep Agents 为子 Agent 提供两种上下文模式：默认 isolated 只接收任务描述，fork 则继承主 Agent 的状态和对话，完成后都只把结果交回主流程。作者建议让接续实现的执行者继承已收集的资料，让独立审查者从任务与待审材料出发，减少受到先前判断的影响。继承上下文可复用提示缓存并减少重复读取，但也会带入更长历史；文章没有给出跨任务的统一速度或成本提升。这里调整的是信息传递方式，访问权限仍需另行配置。

## 重点图文解读

### 独立上下文适合核验

isolated 模式不继承前面的诊断过程，适合 reviewer 或能独立描述的研究问题，减少被监督 Agent 的判断引导。它也可能重复收集已有资料；上下文隔离本身不等于权限或隐私隔离。

![isolated：右侧子 Agent 只收到任务描述，未继承左侧蓝色历史；旧图注把这张图误写成 fork，本次已纠正。](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/fdeec42d5acda9771a3a.png)

*isolated：右侧子 Agent 只收到任务描述，未继承左侧蓝色历史；旧图注把这张图误写成 fork，本次已纠正。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6a9f9ebb18c02828b5e69194_image.png) · [文章出处](https://www.langchain.com/blog/organizing-context-in-a-multi-agent-harness)

### fork 适合延续工作

fork 复制监督 Agent 状态，移除尾部发起子任务的工具调用，把任务描述转成新用户消息；完成后只把最终消息返回主流程。作者认为复用缓存和已读资料能减少重复工作，但没有给出统一收益保证。

![fork：右侧也带有蓝色历史上下文，再附任务描述；主 Agent 最后只接收子任务结果。](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/30ac1e194053c91edb69.png)

*fork：右侧也带有蓝色历史上下文，再附任务描述；主 Agent 最后只接收子任务结果。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6a9f9f279199d5bb6100d84e_image.png) · [文章出处](https://www.langchain.com/blog/organizing-context-in-a-multi-agent-harness)

### 上下文与能力分别配置

已诊断问题的实现 worker 和整理对话的 memory agent 可继承历史；独立 verifier 通常只需待审材料。工具、middleware 和文件权限仍是另外的配置维度。

已检查正文媒体清单（静态图片 2 张、表格 0 处、视频嵌入 0 处），节选与上述重点相关的 2 张图片。

## 适用条件与局限

这是设计经验与实现说明；没有跨任务实验能证明 fork 普遍更快或更便宜，独立上下文也不替代访问控制。

## 怎样理解与应用（AI 解读）

同一修复流程可让实现者继承诊断记录，让审查者只看需求与差异；分别记录重复读文件次数、缓存命中与发现的问题，而不是仅比较 token 总量。

## 变更记录

- 2026-09-10：首次收录，读取正文、核对发布日期与署名，整理中文摘要与重点解读。
- 2026-09-11：纠正 isolated 图注与隐私隔离表述，补充 fork 状态传递机制和第二张示意图。
- 2026-09-14：按现行摘要门槛补全主要机制、结果与必要条件，完成独立事实和可读性复核；同步摘要卡片。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
