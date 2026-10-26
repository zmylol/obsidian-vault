---
type: article
source: https://www.anthropic.com/news/claude-science-ai-workbench
source_aliases: []
original_title: Claude Science, an AI workbench for scientists, is now available
published: '2026-06-30'
collected: '2026-09-09'
updated: '2026-10-01'
last_checked: '2026-10-01'
category: 产品与生态/Claude应用与行业方案
source_section: News
tags:
- science
- tool-use
- reliability
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-10-01T09:23:51+08:00'
  source_read: true
  source_read_scope: 官方完整主文与同页脚注；外链论文、政策和附件未单独精读，网页代码未执行或复现。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 核对四个图片元素，重新下载既有两张科研界面图，哈希均与本地一致并实际查看；确认图稿/代码并列与八组参数扫描示例，图注不将演示当成验证结果。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: 1279048ddf3efc7831581c8a39811096317334e83c51d8e3a8af211af82b7a1c
    evidence:
    - location: a577f205a73beafc.txt 第 5–10 行
      support: Claude Science 为整合科研工具、计算及可审计产物的测试版工作台；协调代理可调用专业代理，审阅代理检查引用和计算。
    - location: a577f205a73beafc.txt 第 13–17 行
      support: 图表附代码、环境、解释及历史；任务在研究者设备/HPC等环境运行，但每步必要上下文仍会送往 Claude。
    - location: a577f205a73beafc.txt 第 22–26 行
      support: 提速与研究效果来自早期实验室使用案例；有个案结果验证，但不是所有科研任务的统一受控效果研究。
    - location: a577f205a73beafc.txt 第 28–30 行
      support: macOS/Linux，面向 Pro、Max、Team、Enterprise；第 29 行明确 Team 和 Enterprise 两者都需管理员开启。
    correction: 将“团队版需管理员开启”改为“后两种套餐需管理员开启”，明确 Team 与 Enterprise 均在内。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-10-01T09:23:51+08:00'
    method: 独立代理逐句核对官方完整正文，再单独复核摘要可读性；修订后重查，主执行者最终单读定稿。
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-10-01T09:23:51+08:00'
  last_figure_review_at: '2026-10-01T09:23:51+08:00'
  last_figure_review:
    at: '2026-10-01T09:23:51+08:00'
    method: local_original_and_official_media_comparison
    details: 核对四个图片元素，重新下载既有两张科研界面图，哈希均与本地一致并实际查看；确认图稿/代码并列与八组参数扫描示例，图注不将演示当成验证结果。
---

# Claude Science：整合科研工具的工作台

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#Claude%E5%BA%94%E7%94%A8%E4%B8%8E%E8%A1%8C%E4%B8%9A%E6%96%B9%E6%A1%88)

> [官方原文](https://www.anthropic.com/news/claude-science-ai-workbench) · Claude Science, an AI workbench for scientists, is now available · 2026-06-30
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 发布 Claude Science 测试版，把科研数据库、专业工具、计算资源与可追溯的图表和代码放进同一工作台。协调代理可调用专业代理，审阅代理检查引用和计算；分析在研究者原有设备或集群上运行，但必要上下文仍会发送给 Claude。发布时支持 macOS、Linux 及 Pro、Max、Team、Enterprise 套餐，后两种套餐需管理员开启。文中提速来自早期使用案例，不能视为所有研究任务的受控效果证明。

## 重点图文解读

### 成果同时携带复现信息

生成图表、蛋白结构或文稿时，保留代码、输入、环境与消息历史，支持行内批注后修改生成代码。协调代理、专业代理与审核代理分工处理分析和引用核查。 [原文依据](https://www.anthropic.com/news/claude-science-ai-workbench)

![科学图稿与生成代码并列显示：右侧包含输入文件、执行日志、环境和审核入口，图上批注可直接指向需要修改的标签。](../../../98-附件/原文配图/7425ea0587524d29c487.jpg)

*科学图稿与生成代码并列显示：右侧包含输入文件、执行日志、环境和审核入口，图上批注可直接指向需要修改的标签。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/1c78d0a671cbf1715b3f09a790e6d1a90466de1a-2048x1257.jpg) · [文章出处](https://www.anthropic.com/news/claude-science-ai-workbench)

### 算力与专业工具沿用实验室环境

工作台可运行于 macOS、Linux、本地或 SSH/HPC 环境，接入超过 60 个科学技能与连接器。使用新资源前形成计划并请求授权，长驻会话减少重复加载大型数据。 [原文依据](https://www.anthropic.com/news/claude-science-ai-workbench)

![scVI 参数扫描示例展示八组远程任务及共享 Notebook 状态，说明工作台如何组织计算；不是八组任务结果均已验证的证明。](../../../98-附件/原文配图/8ae2cb410abefb024f23.jpg)

*scVI 参数扫描示例展示八组远程任务及共享 Notebook 状态，说明工作台如何组织计算；不是八组任务结果均已验证的证明。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/901245fae3bee38a476732379e92adc0284c2519-2048x1257.jpg) · [文章出处](https://www.anthropic.com/news/claude-science-ai-workbench)

### 早期案例仍需要专家复核

文中涉及靶点筛选、长篇计算综述和胶质瘤分析。团队报告节省时间，同时仍与领域专家改进审核；项目资助申请日期是 2026 年 7 月的历史安排。 [原文依据](https://www.anthropic.com/news/claude-science-ai-workbench)

## 适用条件与局限

可追溯与审核代理并不保证科学结论正确。数据留在自有系统不表示没有上下文发送给模型；需理解每一步实际发送的数据范围。

## 怎样理解与应用（AI 解读）

这篇对学习知识库最有用的启发是让结论绑定证据与生成过程。原图、代码和解释应在同一条记录中互相指向，方便数月后重查。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：补充原文配图节选及来源。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-10-01：完整审读正文，通过独立摘要与可读性复核；区分可追溯工作台、早期用户报告和可推广的科研效率。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
