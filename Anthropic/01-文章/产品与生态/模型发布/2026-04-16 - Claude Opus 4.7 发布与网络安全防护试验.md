---
type: article
source: https://www.anthropic.com/news/claude-opus-4-7
source_aliases: []
original_title: Introducing Claude Opus 4.7
published: '2026-04-16'
collected: '2026-09-09'
updated: '2026-10-06'
last_checked: '2026-10-06'
category: 产品与生态/模型发布
source_section: News
tags:
- products
- alignment
- agents
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-10-06T09:20:00+08:00'
  source_read: true
  source_read_scope: 官方正文；关联论文、附件及引用文献不视作单独精读。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 已查看所选原图，逐一核对图中对象、比较条件及正文位置；本笔记只节选相关关键图。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: 独立审阅代理 summary_review_oct5
    source_sha256: dce8a6086bdc7c3407e6a276b4f248bd56fb5862c0e7a70bfd483e2c00e362c5
    evidence:
    - location: source-1.txt L3–9
      support: 发布日期、一般可用、能力定位、网络安全防护、价格。
    - location: source-1.txt L14–21
      support: 视觉增强、安全评估与相对 Opus 4.6 的局限。
    - location: source-1.txt L29–31
      support: tokenizer 的 1.0–1.35 倍变化及评测限制。
    correction: 将 93 项结果限定为官网列出的特定内部编码评测，并保留安全各项不完全同向。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-10-06T09:20:00+08:00'
    method: 独立代理只看官方正文与摘要，逐句来源核对并单独复核可读性；主执行者最终单读定稿。
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-10-06T09:20:00+08:00'
---

# Claude Opus 4.7 发布与网络安全防护试验

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%A8%A1%E5%9E%8B%E5%8F%91%E5%B8%83)

> [官方原文](https://www.anthropic.com/news/claude-opus-4-7) · Introducing Claude Opus 4.7 · 2026-04-16
> 中文摘要＋重点图文解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 于 2026 年 4 月发布 Opus 4.7，主打更强的长程编程、视觉理解与自我校验，并维持每百万输入 5 美元、输出 25 美元的价格。官网及早期评测列出一项 93 任务编码基准：相对 Opus 4.6 的解决率提升 13%；这属于特定评测结果，不代表所有编码任务。新模型加入针对高风险网络安全请求的自动检测与拦截。更新 tokenizer 使同一输入可能增加约 1.0–1.35 倍 token；安全评估总体与 Opus 4.6 相近，具体能力和合作方反馈仍依赖评测配置与使用环境。

## 重点图文解读

### 工作能力与推理控制一同更新

高分辨率视觉、长任务一致性和输出验证是主要变化；API 增加任务预算 beta，Claude Code 推出 ultrareview 与更广的 auto mode 使用范围。 [原文依据](https://www.anthropic.com/news/claude-opus-4-7)

### 安全画像有改善也有弱项

自动行为审计显示总体异常分数略低于 Opus 4.6，但不及 Mythos Preview；诚实性和抗提示注入改善，部分减害建议评测略弱。网络能力防护也作为发布条件测试。 [原文依据](https://www.anthropic.com/news/claude-opus-4-7)

![自动行为审计的 1–10 分比较，分数越低越好；Opus 4.7 略优于 Opus 4.6，但 Mythos Preview 在该测试上更低。误差棒提醒读者区别幅度与不确定性。](../../../98-附件/原文配图/1bb75aebab223ed93f26.png)

*自动行为审计的 1–10 分比较，分数越低越好；Opus 4.7 略优于 Opus 4.6，但 Mythos Preview 在该测试上更低。误差棒提醒读者区别幅度与不确定性。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/3a5b5c3eedb539fe20bc8dd1ecfc952c447000b8-1920x1080.png) · [文章出处](https://www.anthropic.com/news/claude-opus-4-7)

### 相同文字不再对应相同 token 数

新 tokenizer 可能让同一输入增加到原先约 1.0–1.35 倍 token，高 effort 后期回合也可能思考更多。因此价格档位不变不表示实际账单不变。 [原文依据](https://www.anthropic.com/news/claude-opus-4-7)

## 适用条件与局限

内部编码成本曲线不一定代表交互式工作。SWE-bench Multimodal 使用内部实现，部分评分后续调整，系统卡未单独精读。

## 怎样理解与应用（AI 解读）

迁移检查应固定真实样本，比较输出质量、token 和工具行为；不要把旧模型的提示与预算未经验证直接照搬。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-09：补充原文配图节选及来源。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
