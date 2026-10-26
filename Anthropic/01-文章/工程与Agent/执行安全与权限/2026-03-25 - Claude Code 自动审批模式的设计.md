---
type: article
source: https://www.anthropic.com/engineering/claude-code-auto-mode
source_aliases: []
original_title: 'How we built Claude Code auto mode: a safer way to skip permissions'
published: '2026-03-25'
collected: '2026-09-09'
updated: '2026-09-14'
last_checked: '2026-09-14'
category: 工程与Agent/执行安全与权限
source_section: Engineering
tags:
- alignment
- agents
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-09-11T09:13:15+08:00'
  source_read: true
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 已查看选取的 1 张原图并核对内容与图注；其余媒体保留原文入口。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep14
    source_sha256: 714746f783f7b02fd417c4c931605bd6e2e96474d814dc4ac9e5978f2ce99362
    evidence:
    - location: How it works
      support: 输入探针添加警告；动作分类器剔除助手解释和工具结果，使用快速筛查与详细判断两阶段。
    - location: Results / Table 1
      support: 真实调用 n=10,000 的完整流程 FPR 为 0.4%，真实越界 n=52 的 FNR 为 17%。
    - location: Results：Whether 17% is acceptable 段
      support: 作者将定位与完全跳过权限对比，并明确不是高风险基础设施仔细人工审查的替代品。
    correction: 区分警告和阻断，补足两种错误率及各自样本，说明自动审批的比较基线；独立复核后明确误拦比例的分母是良性动作。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-09-14T09:16:35+08:00'
    method: independent_agent_then_author_standalone_read
    source_check: passed
    readability_check: passed
  last_content_review_at: '2026-09-14T09:16:35+08:00'
  last_figure_review_at: '2026-09-14T09:16:35+08:00'
---

# Claude Code 自动审批模式的设计

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%89%A7%E8%A1%8C%E5%AE%89%E5%85%A8%E4%B8%8E%E6%9D%83%E9%99%90)

> [官方原文](https://www.anthropic.com/engineering/claude-code-auto-mode) · How we built Claude Code auto mode: a safer way to skip permissions · 2026-03-25
> 中文摘要＋重点图文解读；关键内容及配图节选。

## 摘要

Claude Code 的 Auto mode 用分类器代替部分人工审批，以减少频繁确认造成的疲劳。输入侧检查工具结果中的提示注入并附加警告；动作侧只看用户消息和工具调用，先快速筛查，再对可疑动作详细判断，避免被智能体自己的理由说服。Anthropic 报告，包含 1 万次员工真实工具调用的测试中，完整流程误拦了 0.4% 的良性动作；在另行整理的 52 条真实越界动作样本中，仍漏放约 17%。这是降低摩擦与漏判之间的取舍，适合替代完全跳过审批，不能等同于对高影响操作的仔细人工审查。

## 重点图文解读

### 输入与动作分别检查

工具结果中的可疑指令触发警告；动作分类器只看用户消息与工具调用，避免被 Agent 自己的理由说服。

图示：Figure 2 上半部展示动作审批与结果注入检查；下半部展示子任务的递归检查。委派入口可以拒绝，返回时仅附警告，两个检查点的权限不同。

*Figure 2 上半部展示动作审批与结果注入检查；下半部展示子任务的递归检查。委派入口可以拒绝，返回时仅附警告，两个检查点的权限不同。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/05f268391243c60c3f725c26151eed7b0b531e86-1920x2002.png) · [出处](https://www.anthropic.com/engineering/claude-code-auto-mode)

### 两阶段降低日常摩擦

快速筛选标记可疑动作，再做详细判断。在包含 10,000 次员工真实工具调用的测试中，完整流程误拦了 0.4% 的良性动作；它不是全部工具调用被拦截的比例。

### 减少误报仍有代价

52 条真实越界动作样本中，完整流程漏判约 17%；这不是“所有危险操作只剩 17% 风险”的总体估计。

## 适用条件与局限

真实危险动作样本较小，误报与漏报存在取舍；分类器不能替代高影响环境中的谨慎审查。

## 怎样理解与应用（AI 解读）

评估自动审批时，同时记录误阻断的时间成本和漏放动作的实际影响。对生产删除、外发等操作设置独立限制，不能仅以总体通过率判断系统是否合适。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：扩充摘要、具体要点与应用解读，补充原文配图节选。
- 2026-09-11：核对官方正文与重点配图，完成中文摘要和重点解读。
- 2026-09-14：完整审读官方正文，经独立代理逐句核对并单独检查摘要可读性；区分警告和阻断，补足两种错误率及各自样本，说明自动审批的比较基线；独立复核后明确误拦比例的分母是良性动作。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
