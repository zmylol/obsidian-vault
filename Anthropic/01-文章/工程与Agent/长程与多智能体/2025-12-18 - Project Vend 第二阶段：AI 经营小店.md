---
type: article
source: https://www.anthropic.com/research/project-vend-2
source_aliases: []
original_title: 'Project Vend: Phase two'
published: '2025-12-18'
collected: '2026-09-09'
updated: '2026-09-16'
last_checked: '2026-09-16'
category: 工程与Agent/长程与多智能体
source_section: Research
tags:
- agents
- societal-impacts
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-09-11T10:10:25+08:00'
  source_read: true
  source_read_scope: 官方正文；关联论文、附件及引用文献不视作单独精读。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 已查看所选原图，逐一核对图中对象、比较条件及正文位置；本笔记只节选相关关键图。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: afa36add6ee77fd3733902aea7486bd7e27dcbe11eaa9d648352c5a4ddc3921e
    evidence:
    - location: 开头；The numbers
      support: 更换 Sonnet 模型并持续调整架构，后期负利润周大幅减少，但阶段边界不清。
    - location: The CEO；What actually worked?
      support: 经理减少折扣却增加退款和店内额度；作者认为强制核对成本、价格和交期更有帮助。
    - location: What went wrong；RAG to riches?
      support: 错误授权和不利交易仍需人类干预，采购及物理补货也依赖人工。
    correction: 补入经营改善、经理失效与有效流程的具体差别，明确多项变化及人工支持限制。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-09-16T09:11:41+08:00'
    method: independent_agent_then_author_standalone_read
    source_check: passed
    readability_check: passed
  last_content_review_at: '2026-09-16T09:11:41+08:00'
  last_figure_review_at: '2026-09-16T09:11:41+08:00'
  last_figure_review:
    at: '2026-09-16T09:11:41+08:00'
    method: local_original_and_official_media_comparison
    details: 查看商店净值原图：横轴为 2025 年月份，纵轴为美元净值；核对变化标线，补齐可见图注和替代文本的坐标说明。
---

# Project Vend 第二阶段：AI 经营小店

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E9%95%BF%E7%A8%8B%E4%B8%8E%E5%A4%9A%E6%99%BA%E8%83%BD%E4%BD%93)

> [官方原文](https://www.anthropic.com/research/project-vend-2) · Project Vend: Phase two · 2025-12-18
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 与 Andon Labs 在办公室商店实验 Project Vend 的第二阶段升级模型，完善库存管理、客户管理和采购研究工具，并加入经理与定制商品代理。商店后期负利润周明显减少，作者认为核实成本和交货时间的流程比单纯增加经理督促更有帮助；经理虽然减少折扣，却增加了退款和店内额度。代理仍会误判授权、接受不利交易，需要人类处理采购、补货和异常。多项设置持续变化、顾客对抗行为也有变化，因此经营改善不能归因于单一模型升级，也不证明商店已能独立运营。

## 重点图文解读

### 经营改善伴随多项变化

模型从 Sonnet 3.7 升级到 4 和 4.5，增加成本可见的库存、CRM、更好的搜索、经理及定制商品代理，后期负利润周减少。 [原文依据](https://www.anthropic.com/research/project-vend-2)

![横轴是 2025 年月份，纵轴是美元计价的净值；虚线标出工具、模型和经营地点变化。净值从下降转为恢复，但多项因素交错，不能把拐点归因于单一升级。](../../../98-附件/原文配图/4626659a400766535d91.png)

*横轴是 2025 年月份，纵轴是美元计价的净值；虚线标出工具、模型和经营地点变化。净值从下降转为恢复，但多项因素交错，不能把拐点归因于单一升级。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/6a40fb63a2e17a97b0a100e8e3bcdcd5433b2ec6-3840x2160.png) · [文章出处](https://www.anthropic.com/research/project-vend-2)

### 核对流程比经理督促更有帮助

作者认为，让代理在报价前查证采购成本和交货时间，是较有影响的改进。经理代理虽减少了折扣，却增加退款与店内额度；定制商品代理的清晰分工更有帮助，但这些都是持续调整过程中的观察。 [原文 The CEO；What actually worked?](https://www.anthropic.com/research/project-vend-2)

### 盈利不表示权限判断成熟

实验中出现未经授权雇人、把命名投票误解为任命真实经理，以及被顾客诱导不利交易等问题，需要项目人员介入。 [原文依据](https://www.anthropic.com/research/project-vend-2)

### 真实世界支持不能从成本中消失

人类仍负责采购确认、送货、补货和处理异常；实验还扩展到外部记者测试，以引入新的对抗方式。 [原文依据](https://www.anthropic.com/research/project-vend-2)

## 适用条件与局限

小规模办公室环境不是独立运营企业的普遍证明；阶段边界不清且持续改动。正文没有给出包含全部人工和算力成本的完整核算，不能仅由净值图认定其完整经济利润。

## 怎样理解与应用（AI 解读）

设计经营代理时，把成本、授权和异常升级做成明确可检查的系统状态，避免仅靠模型‘懂商业常识’。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：补充原文配图节选及来源。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-09-16：完整审读官方正文，经独立代理逐句核对并单独检查摘要可读性；补入经营改善、经理失效与有效流程的具体差别，明确多项变化及人工支持限制。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
