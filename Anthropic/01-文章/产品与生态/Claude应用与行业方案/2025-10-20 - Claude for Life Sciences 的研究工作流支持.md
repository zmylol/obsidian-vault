---
type: article
source: https://www.anthropic.com/news/claude-for-life-sciences
source_aliases: []
original_title: Claude for Life Sciences
published: '2025-10-20'
collected: '2026-09-09'
updated: '2026-10-04'
last_checked: '2026-10-04'
category: 产品与生态/Claude应用与行业方案
source_section: News
tags:
- science
- products
- tool-use
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-10-04T09:23:21+08:00'
  source_read: true
  source_read_scope: 完整读取官方正文；外链论文、附件、视频或交互日志未作为本篇正文单独精读；网页指令与代码未执行。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 已查看所选原图，逐一核对图中对象、比较条件及正文位置；本笔记只节选相关关键图。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: d186ba9700e69c523e808686c0949fa8f16b7b589de6a5ca7f74fb24133329eb
    evidence:
    - location: source-1.txt L6–10
      support: 文章把目标从单项辅助扩展到发现、转化和商业化流程，并列出连接器、Skills 与领域支持。
    - location: source-1.txt L9、L21–24
      support: Protocol QA 为 0.83，人类基线 0.79、Sonnet 4 为 0.74；single-cell-rna-qc Skill
        按 scverse 最佳实践做质控。
    - location: source-1.txt L33–40
      support: 客户与合作伙伴案例由 Anthropic 页面归述，另有 AI for Science 计划支持。
    correction: 无需修改，定稿与草稿一致。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-10-04T09:23:21+08:00'
    method: 独立代理只看官方正文与摘要，逐句核对事实后单独复核可读性；主执行者最终单读定稿。
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-10-04T09:23:21+08:00'
  last_figure_review_at: '2026-10-04T09:23:21+08:00'
---

# Claude for Life Sciences 的研究工作流支持

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#Claude%E5%BA%94%E7%94%A8%E4%B8%8E%E8%A1%8C%E4%B8%9A%E6%96%B9%E6%A1%88)

> [官方原文](https://www.anthropic.com/news/claude-for-life-sciences) · Claude for Life Sciences · 2025-10-20
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2025 年 10 月推出 Claude for Life Sciences，试图把 Claude 扩展到科研全流程，并用连接器和 Agent Skills 接入文献、实验与生物信息工具。single-cell RNA-seq 示例按 scverse 方法做质控；Sonnet 4.5 在 Protocol QA 10-shot 中得分 0.83，高于人类基线 0.79 和 Sonnet 4 的 0.74。客户案例与基准来自公司或合作方，仍需专家审核。

## 重点图文解读

### 模型评测与实际工作之间

文中 Sonnet 4.5 在 ProtocolQA 的多选、10-shot 条件下得分 0.83，人类基线为 0.79、Sonnet 4 为 0.74；这支持特定协议推理能力改善，不能直接证明独立完成科研。 [原文依据](https://www.anthropic.com/news/claude-for-life-sciences)

### 连接器提供资料，Skills 固化步骤

Benchling、PubMed、Wiley 等连接器提供实验和文献上下文；single-cell-rna-qc Skill 封装基于 scverse 的质控流程。示例会运行分析脚本、报告过滤阈值并输出带注释的数据文件。 [原文依据](https://www.anthropic.com/news/claude-for-life-sciences)

![单细胞 RNA 质控演示：原始 2,700 个细胞中保留 2,434 个，并输出过滤数据与 QC 图。数值属于示例数据，不是通用过滤阈值。](../../../98-附件/原文配图/e9f8d2b7e53b44484228.png)

*单细胞 RNA 质控演示：原始 2,700 个细胞中保留 2,434 个，并输出过滤数据与 QC 图。数值属于示例数据，不是通用过滤阈值。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/07de700e38ef4d328ccdb5c15ab9e3df5286fc08-3840x2160.png) · [文章出处](https://www.anthropic.com/news/claude-for-life-sciences)

### 覆盖科研链条的辅助任务

应用包括提出文献支持的假设、起草实验方案、分析生物数据和准备监管材料。机构使用时仍需接入自己的数据与权限，并让领域专家审核。 [原文依据](https://www.anthropic.com/news/claude-for-life-sciences)

## 适用条件与局限

公开基准与产品演示不能替代真实实验验证。文中客户案例是使用者反馈；未单独复核外链基准数据或实验结果。

## 怎样理解与应用（AI 解读）

学习重点是把可靠工具、数据来源和检查步骤包装成可复用流程。自己的科研笔记应同时保存输入、分析代码、参数和结果，才能复现。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：补充原文配图节选及来源。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-10-04：完成官方正文审读，经来源与摘要可读性独立复核；摘要按本篇机制、数字与限制修订。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
