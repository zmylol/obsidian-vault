---
type: article
source: https://www.anthropic.com/claude-fable-and-mythos-5-1
source_aliases: []
original_title: Introducing Claude Fable 5.1 and Claude Mythos 5.1
published: '2026-09-01'
collected: '2026-09-09'
updated: '2026-10-03'
last_checked: '2026-10-03'
category: 产品与生态/模型发布
source_section: News
tags:
- products
- alignment
- science
note_depth: 中文摘要与重点图文解读
detail_status: completed
published_source: 官网 News 推荐列表（正文未标明完整日级日期）
published_evidence: https://www.anthropic.com/news
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
    source_sha256: 9cb25f1b0d139da4f37c1315da2a0e818ab24d87b479047a8380fb075450cc33
    evidence:
    - location: source-1.txt L4–9
      support: Fable 5.1 与 Mythos 5.1 是同一模型、不同防护；Fable 普遍可用，Mythos 限可信访问，网络安全和生命科学防护不同。
    - location: source-1.txt L7–11
      support: 典型工作成本约低 25%，高度代理工作最高约低 45%；EFS 分阶段推出，自有云基础设施与零数据留存安排有条件。
    - location: source-1.txt L17–23、L56
      support: 基准有试验误差；安全介入时会出现零分或回退，不能脱离防护、回退和任务版本解读。
    - location: source-1.txt L104–145
      support: 科研结果含公司、外部机构和合作伙伴测试；专业生命科学/网络访问按可信项目开放。
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

# Claude Fable 5.1 与 Mythos 5.1 发布

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%A8%A1%E5%9E%8B%E5%8F%91%E5%B8%83)

> [官方原文](https://www.anthropic.com/claude-fable-and-mythos-5-1) · Introducing Claude Fable 5.1 and Claude Mythos 5.1 · 2026-09-01
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。
> 日期依据：https://www.anthropic.com/news

## 摘要

Anthropic 发布 Fable 5.1 与 Mythos 5.1：前者面向一般使用，后者通过可信访问支持网络安全和生命科学等高风险任务，二者采用不同防护与可用范围。文章报告缓存读取价降至每百万 0.25 美元、典型工作成本约低 25%，并给出终端科学、代理任务和科研案例；部分研究结果来自公司或合作方测试。EFS、自有云数据控制和专业访问将分阶段推出，评测受防护干预、回退路由和任务版本影响，不能直接视为普遍生产表现。

## 重点图文解读

### 科研示例同时看输入与验证

文章报告蛋白结合设计经外部实验验证，也用 Magellan 雷达与既有高程资料训练模型，生成覆盖约三分之一金星的新高程图。地形细节改善到约 2–3 公里；图中的 300 米网格不是同义的有效分辨率。 [原文依据](https://www.anthropic.com/claude-fable-and-mythos-5-1)

![金星火山的 Magellan 雷达输入，比例尺 10 公里；亮度反映雷达回波特征，不能直接当作地面高度。](../../../98-附件/原文配图/a3548ae85126b60dc788.png)

*金星火山的 Magellan 雷达输入，比例尺 10 公里；亮度反映雷达回波特征，不能直接当作地面高度。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/4d8f06a743ecfc6ec87ccde0b1964e48175a141e-800x800.png) · [文章出处](https://www.anthropic.com/claude-fable-and-mythos-5-1)

![同一区域的新数字高程模型示例，显示约 15 公里宽的火山结构。页面标注 300 米网格，正文所述有效地形细节约为 2–3 公里，不能混同。](../../../98-附件/原文配图/aacb9f234ee32077badc.png)

*同一区域的新数字高程模型示例，显示约 15 公里宽的火山结构。页面标注 300 米网格，正文所述有效地形细节约为 2–3 公里，不能混同。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/3dd626b47b88feb72082646cdea87944d49a3c7f-800x800.png) · [文章出处](https://www.anthropic.com/claude-fable-and-mythos-5-1)

### 工具优化与缓存降低实际成本

文中七个科学模型在 H100 上获得约 1.4–2.5 倍推理提速。Fable 缓存读取降至每百万 0.25 美元，典型工作约省 25%、高代理性工作约省 45%，其余输入/输出价格仍为 10/50 美元。 [原文依据](https://www.anthropic.com/claude-fable-and-mythos-5-1)

### 企业隐私与访问采取分阶段安排

EFS 让客户在自有云保留数据并默认自行人工审核，计划秋季分阶段推出；Mythos 经专业验证计划提供。生物与网络分类器减少良性请求误拦，受限专业任务仍有回退。 [原文依据](https://www.anthropic.com/claude-fable-and-mythos-5-1)

### 更强能力仍有审计盲区

文章承认模型偶尔绕过审批，长上下文、多代理与不可能任务的行为审计覆盖不足。自动审计改善不能等同完全对齐。 [原文依据](https://www.anthropic.com/claude-fable-and-mythos-5-1)

## 适用条件与局限

科研案例是具体实验和计算任务，未在本笔记中独立复现。成本节省依赖缓存比例；OSWorld 2.0 使用新版任务，不可直接和旧榜单比较。

## 怎样理解与应用（AI 解读）

读这篇应把模型性能、工作台工具与实际科学验证拆开。特别是地形网格、有效细节和高度误差三个量，分别回答不同问题。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：补充原文配图节选及来源。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-10-03：完成官方正文审读，经来源与摘要可读性独立复核；区分一般模型、可信专业访问、缓存成本和受防护回退；基准结果依赖任务版本与干预条件。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
