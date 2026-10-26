---
type: article
source: https://claude.com/blog/skills
source_aliases:
- https://www.anthropic.com/news/skills
original_title: Introducing Agent Skills
published: '2025-10-16'
collected: '2026-09-09'
updated: '2026-10-04'
last_checked: '2026-10-04'
category: 产品与生态/编程与开发工具
source_section: News
tags:
- agents
- context-engineering
- tool-use
note_depth: 中文摘要与重点文字解读
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
    source_sha256: 9f2467ef3774b3e87c8b4bd3fea37758412ec4906da2a3a13aa96ce43dde0632
    evidence:
    - location: source-6.txt L7–18
      support: Skills 的文件夹结构、按需加载、可组合、可移植、高效及可执行代码属性。
    - location: source-6.txt L20–28
      support: 应用、API、/v1/skills 和 Code Execution Tool 的使用条件。
    - location: source-6.txt L38–47
      support: Claude Code 安装方式及可信来源、数据安全提醒；12 月更新记录在 L7。
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

# Agent Skills：把专业流程封装成可复用能力

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E7%BC%96%E7%A8%8B%E4%B8%8E%E5%BC%80%E5%8F%91%E5%B7%A5%E5%85%B7)

> [官方原文](https://claude.com/blog/skills) · Introducing Agent Skills · 2025-10-16
> 中文摘要＋重点文字解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2025 年 10 月推出 Agent Skills，把指令、脚本和资源封装为文件夹，由 Claude 按需加载；同一格式可用于 Claude 应用、Claude Code 和 API，并支持组合、版本管理与代码执行。应用侧自动调用，API 通过 /v1/skills 管理版本但依赖 Code Execution Tool，Claude Code 可经插件安装。12 月更新加入组织管理、伙伴目录和开放标准；使用时需核验来源与权限。

## 重点文字解读

### 按需加载减少上下文负担

模型先识别相关 Skills，再读取当前需要的信息和文件。不同 Skills 可组合，确定性工作可执行脚本，同一格式可用于 Claude 应用、Claude Code 与 API。 [原文依据](https://claude.com/blog/skills)

图示：Skills 设置示例展示品牌规范、内部沟通和画布设计等独立技能开关，体现专业工作说明按需启用的组织方式。

*Skills 设置示例展示品牌规范、内部沟通和画布设计等独立技能开关，体现专业工作说明按需启用的组织方式。* [原图](https://cdn.prod.website-files.com/68a44d4040f98a4adf2207b6/690267e194f8fd4618cb330e_image.webp) · [文章出处](https://claude.com/blog/skills)

### 跨产品使用仍有运行条件

应用中需启用 Skills，组织用户可能需要管理员开通；API 通过 skills 端点管理版本，执行依赖代码执行环境。12 月 18 日更新又加入组织管理、伙伴目录和开放标准。 [原文依据](https://claude.com/blog/skills)

## 适用条件与局限

Skills 是任务资料与可执行代码，不保证其中内容正确。必须区分可信流程指令与被处理文档中的文字，脚本也需确认来源和权限。

## 怎样理解与应用（AI 解读）

自己的学习流程可以把笔记结构、引用规则和检查清单整理成 Skill，但知识本身仍应放在可追溯笔记中，避免把操作规则和文章内容混在一起。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-10-04：完成官方正文审读，经来源与摘要可读性独立复核；摘要按本篇机制、数字与限制修订。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
