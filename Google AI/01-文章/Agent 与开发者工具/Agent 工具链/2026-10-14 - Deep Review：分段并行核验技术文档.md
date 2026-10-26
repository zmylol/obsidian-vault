---
type: "article"
source: "https://research.google/blog/analyzing-technical-documents-with-deep-review/"
source_aliases: []
original_title: "Analyzing technical documents with Deep Review"
authors: ["Rajesh Jayaram", "Vincent Cohen-Addad"]
authors_source: "原文页首署名"
published: "2026-10-14"
published_source: "原文页首；RSS仅作交叉核对"
published_evidence: "https://research.google/blog/analyzing-technical-documents-with-deep-review/；页首标题、日期与署名"
collected: "2026-10-15T17:07:08+08:00"
updated: "2026-10-15T17:07:08+08:00"
last_checked: "2026-10-15T17:07:08+08:00"
category: "Agent 与开发者工具/Agent 工具链"
source_section: "Google Research · Deep Review"
tags: ["Google Research", "文档核验", "多 Agent"]
status: "saved"
detail_status: "completed"
note_depth: "中文摘要与重点文字解读"
---

# Deep Review：分段并行核验技术文档

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#agent-%E5%B7%A5%E5%85%B7%E9%93%BE)

> [原文链接](https://research.google/blog/analyzing-technical-documents-with-deep-review/) · 原题：Analyzing technical documents with Deep Review · 发布日期：2026-10-14 · 作者：Rajesh Jayaram、Vincent Cohen-Addad · 来源：Google Research · Deep Review

## 摘要

Google Research 公开 Deep Review，以文档分段、按信息密度分配算力、并行核验和全局综合四步，检查长文档的逻辑、数学与证据。前身 PAT 曾为四场计算机科学会议中超过 1.6 万份自愿参加的稿件提供投稿前反馈，与正式评审分离。当前全球支持 PDF 和纯文本，每周免费两次，多文件输入尚未开放；试点反馈不等于专业判断可由系统替代，本次未实测。

## 重点文字解读

### 公开服务的边界

初期输入为 PDF、纯文本，用户每周可免费审阅两份；多文件支持仍在计划中。官方称上传文档不用于训练，并保存一年供用户界面展示。

### 试点反馈来自投稿前自愿参与

PAT 试点与正式会议评审分离，下图统计规模和受访作者反馈；调查意见不等于独立测得的错误检出率。

图示：PAT 不同会议试点的规模和作者调查反馈。

*图：各行对应不同会议和系统阶段，反馈比例有不同调查口径；[原图](https://storage.googleapis.com/gweb-research2023-media/original_images/DeepReviewTable.png)。*

### 分段后仍保留全文上下文

审阅代理聚焦各自片段，同时可访问全文；综合代理去重、复查跨段一致性并调用外部依据核验。

图示：分段、自适应算力预算、并行审阅与全局综合四阶段。

*图：复杂证明分配较多算力，最后综合并检查依据；[原图](https://storage.googleapis.com/gweb-research2023-media/original_images/DeepReview3_pipeline.png)。*

## 适用条件与局限

- 结果为官方试点报告；本次未上传文档、调用 API 或精读关联论文，不能据此证明当前版本的通用准确率。

## 怎样理解与应用（AI 解读）

可用一份含已知错误和跨段依赖的文档，分别检查漏报、误报和引用可追溯性，再决定哪些核验步骤值得交给系统；最终判断保留人工复查。

## 变更记录

- 2026-10-15：完整读取原文、独立摘要复核通过，保存并核对原文技术图；历史发布内容按实际收录日计账。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
