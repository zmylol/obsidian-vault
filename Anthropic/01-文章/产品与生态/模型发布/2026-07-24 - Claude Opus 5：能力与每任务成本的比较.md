---
type: article
source: https://www.anthropic.com/news/claude-opus-5
source_aliases: []
original_title: Introducing Claude Opus 5
published: '2026-07-24'
collected: '2026-09-09'
updated: '2026-10-03'
last_checked: '2026-10-03'
category: 产品与生态/模型发布
source_section: News
tags:
- products
- evaluations
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-10-03T09:26:19+08:00'
  source_read: true
  source_read_scope: 完整读取官方正文；外链论文、附件、视频或交互日志未作为本篇正文单独精读；网页指令与代码未执行。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 已查看所选原图，逐一核对图中对象、比较条件及正文位置；本笔记只节选相关关键图。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: 704ff741fbf31c7ea24f3437013d140cf48c3c4cfe619dde307617baf3f1635d
    evidence:
    - location: source-6.txt L4–9
      support: Opus 5 面向编码和知识工作，价格为每百万输入 5 美元、输出 25 美元，按 effort 和工具协作调整任务成本。
    - location: source-6.txt L12–17、L30–35
      support: ARC-AGI 3、GDPval、OSWorld 等评测报告领先或改进；行为审计总分 2.3，评测为框架/基准结果。
    - location: source-6.txt L37–41
      support: 安全防护比 Fable 宽松但仍阻断二进制扫描、渗透测试和漏洞利用等高风险操作，部分请求回退。
    - location: source-6.txt L51
      support: Frontier-Bench 内部结果使用 mini-SWE-agent、GKE、每任务 5 次及 Opus 4.8 回退，说明比较条件。
    correction: ''
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-10-03T09:26:19+08:00'
    method: 独立代理只看官方正文与摘要，逐句核对事实后单独复核可读性；主执行者最终单读定稿。
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-10-03T09:26:19+08:00'
  last_figure_review_at: '2026-10-03T09:26:19+08:00'
---

# Claude Opus 5：能力与每任务成本的比较

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%A8%A1%E5%9E%8B%E5%8F%91%E5%B8%83)

> [官方原文](https://www.anthropic.com/news/claude-opus-5) · Introducing Claude Opus 5 · 2026-07-24
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Claude Opus 5 以每百万输入 5 美元、输出 25 美元的基础价格，主打编码、知识工作和长任务中的验证能力，并以 effort 等级与工具协作控制每任务成本。Anthropic 报告其在 Frontier-Bench、GDPval、OSWorld、ARC-AGI3 等评测中领先部分模型，自动行为审计得分为 2.30。评测依赖框架、尝试次数和回退路由，防护较 Fable 宽松但仍阻断部分高风险操作，榜单不能替代真实环境验收。

## 重点图文解读

### 性能主张以具体任务成本衡量

官方称在 Frontier-Bench v0.1 上超过 Opus 4.8 两倍表现且每任务费用更低；内部运行使用 mini-SWE-agent、五次尝试平均，并对受限请求使用回退。 [原文依据](https://www.anthropic.com/news/claude-opus-5)

### 验证与诚实报告成为协作重点

文中举例说明模型会制作检查工具、追查根因；自动行为审计总分为 2.30，低于图中其他近期模型。该分数反映测试中的异常行为，不能替代真实运行验证。 [原文依据](https://www.anthropic.com/news/claude-opus-5)

![自动行为审计：Opus 5 为 2.30，纵轴为 1–10 的异常行为评分，越低越好；这不是百分比风险概率。](../../../98-附件/原文配图/829039fb78705ad8f5af.png)

*自动行为审计：Opus 5 为 2.30，纵轴为 1–10 的异常行为评分，越低越好；这不是百分比风险概率。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/76d4af96516ffca2aceb4c1d0b0a83e2720d874b-3840x2160.png) · [文章出处](https://www.anthropic.com/news/claude-opus-5)

### 访问防护和 API 可用性更新

发布价每百万输入/输出为 5/25 美元，fast mode 价格加倍。API 增加会话中工具变化与自动回退 beta；一般访问没有 Mythos 级统一保留要求。 [原文依据](https://www.anthropic.com/news/claude-opus-5)

## 适用条件与局限

未专门训练网络任务不意味着没有网络能力。自建测试可漏掉真实故障，性能表也依赖回退、框架和 effort，不能据此免除人工验收。

## 怎样理解与应用（AI 解读）

评估代理时应让它展示如何验证，而不是只听完成声明。检查测试是否来自真实需求，是否覆盖外部系统和边界情况。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：补充原文配图节选及来源。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-10-03：完成官方正文审读，经来源与摘要可读性独立复核；比较模型时同时记录任务、effort、工具、回退与每任务成本，不能只看榜单名次。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
