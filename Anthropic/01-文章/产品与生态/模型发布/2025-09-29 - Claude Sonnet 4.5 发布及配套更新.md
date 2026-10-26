---
type: article
source: https://www.anthropic.com/news/claude-sonnet-4-5
source_aliases: []
original_title: Introducing Claude Sonnet 4.5
published: '2025-09-29'
collected: '2026-09-09'
updated: '2026-10-04'
last_checked: '2026-10-04'
category: 产品与生态/模型发布
source_section: News
tags:
- products
- agents
- context-engineering
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
    source_sha256: f427831167d9ebf62515f1ecf6a5e94c935e6f1edf7a111e27b567d7f8915428
    evidence:
    - location: source-3.txt L4、L6–9
      support: 发布定位编码、电脑操作和长任务，并说明 API、产品配套与价格。
    - location: source-3.txt L11–12、L40–45
      support: SWE-bench 77.2%、OSWorld 61.4%及并行尝试、回归测试和内部选择模型的口径。
    - location: source-3.txt L23–35
      support: ASL-3 防护、Agent SDK 及客户与预览项目的适用边界。
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

# Claude Sonnet 4.5 发布及配套更新

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%A8%A1%E5%9E%8B%E5%8F%91%E5%B8%83)

> [官方原文](https://www.anthropic.com/news/claude-sonnet-4-5) · Introducing Claude Sonnet 4.5 · 2025-09-29
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2025 年 9 月发布 Claude Sonnet 4.5，主打编码、电脑操作和长时代理，并同步推出 Agent SDK、检查点与上下文管理。官方报告 SWE-bench Verified 77.2%、OSWorld 61.4%，复杂开发任务可持续超过 30 小时；数字依赖特定提示、工具和预算，另有并行尝试的 82.0% 口径。模型按 ASL-3 防护发布，客户体验不等同于普遍稳定能力。

## 重点图文解读

### 编程成绩要区分单次与并行计算

SWE-bench Verified 主分数 77.2% 来自 500 题、10 次试验平均及指定工具与提示。82.0% 采用多次并行尝试、可见回归测试过滤和评分选择，两者不能混为同一次执行能力。 [原文依据](https://www.anthropic.com/news/claude-sonnet-4-5)

图示：SWE-bench Verified 比较：实色为主结果，浅色带星号部分使用额外并行测试时计算。Sonnet 4.5 的 77.2% 与 82.0% 对应不同计算配置。

*SWE-bench Verified 比较：实色为主结果，浅色带星号部分使用额外并行测试时计算。Sonnet 4.5 的 77.2% 与 82.0% 对应不同计算配置。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/6421e7049ff8b2c4591497ec92dc4157b2ac1b30-3840x2160.png) · [文章出处](https://www.anthropic.com/news/claude-sonnet-4-5)

### 模型与运行环境共同支持长任务

OSWorld 达到 61.4%，官方观察到复杂任务持续超过 30 小时；Agent SDK 则提供上下文、权限、子代理等基础设施。检查点和文件执行使工作可检查、可继续。 [原文依据](https://www.anthropic.com/news/claude-sonnet-4-5)

### 能力增长伴随新的防护

模型按 ASL-3 部署，改进注入防御与异常行为评测。文章另有五天限时 Imagine 研究预览，不能作为长期可用功能理解。 [原文依据](https://www.anthropic.com/news/claude-sonnet-4-5)

## 适用条件与局限

基准取决于框架、预算和提示。长任务观察不保证持续正确；系统卡与外链评测未单独精读。

## 怎样理解与应用（AI 解读）

比较模型时为每个成绩保存任务集、尝试次数、工具与预算。搭建代理则同时检查回滚、记忆和验收机制。

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
