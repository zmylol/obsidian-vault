---
type: article
source: https://www.langchain.com/blog/deep-agents-v0-7
source_aliases: []
original_title: Deep Agents v0.7
authors:
- Sydney Runkle
authors_source: 原文页首署名
published: '2026-07-29'
published_source: 官方博客列表
published_evidence: July 29, 2026
collected: '2026-09-11'
updated: '2026-09-14'
last_checked: '2026-10-02'
category: 工程与Agent/运行架构
source_section: LangChain 官方博客署名文章
tags:
- lc
- AI
- 运行架构
detail_status: completed
note_depth: 中文摘要与重点文字解读
translation_status: not_requested
---

# Deep Agents 0.7 缩减默认提示并开放中间件替换

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E8%BF%90%E8%A1%8C%E6%9E%B6%E6%9E%84)

> [原文：Deep Agents v0.7](https://www.langchain.com/blog/deep-agents-v0-7) · 发布于 2026-07-29 · 收录于 2026-09-11  
> 作者：Sydney Runkle · LangChain 官方博客  
> 中文摘要与重点图文节选；示例代码未执行，外链论文与实验报告未单独复现。产品能力按文章发布日期理解。

## 摘要

Deep Agents 0.7 移除隐藏的基础提示、缩短工具说明，并把待办列表改为可选，将默认单轮的基础输入从约 6,000 减到 2,000 tokens，降幅约 65%。团队对比 0.6.12，在三类任务、四个模型上观察到总体奖励表现接近，但奖励差异的置信区间均跨零，成本也并非全部下降。新版还允许替换内置中间件，write_file 改为覆盖已有文件，并默认加入删除工具。65% 指基础输入而非任务总费用，迁移时仍须检查文件操作和旧接口兼容性。

## 重点文字解读

### 减少的是基础输入

65% 指内置提示、工具与 middleware 的基础输入 token，不是所有任务总费用。团队在自主、对话和长上下文任务上与 v0.6.12 对比四个模型，奖励差异置信区间均跨零，成本也并非全部下降。

### 移除默认不代表禁止使用

长步骤任务、较弱模型或需要可见计划的界面仍可启用 todos。同名 middleware 可原位替换默认项，例如自定义摘要阈值与提示；无需依赖删除隐藏组件的临时做法。

### 文件工具的迁移风险

write_file 改为覆盖已有文件，read_file 分页报告剩余行，grep/glob 可返回截断结果；delete 进入默认文件工具集，并提供 allowlist。升级时需要检查文件权限与旧代码对默认行为的假设。

已检查正文媒体清单（静态图片 0 张、表格 0 处、视频嵌入 0 处），节选与上述重点相关的 0 张图片。

## 适用条件与局限

文中 65% 是指定基础配置的统计，不能当作通用费用降幅；Sonnet 的成本出现例外。正文没有内嵌静态图片、SVG 或视频，外链实验报告未单独复现。

## 怎样理解与应用（AI 解读）

迁移时先用固定任务比较奖励、输入输出 tokens 和成本，再测试已有文件覆盖、删除权限及截断结果处理；只删提示而不跑评估无法证明等价。

## 变更记录

- 2026-09-11：首次收录；核对正文、日期、作者和采用的配图。
- 2026-09-14：按现行摘要门槛补全主要机制、结果与必要条件，完成独立事实和可读性复核；同步摘要卡片。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
