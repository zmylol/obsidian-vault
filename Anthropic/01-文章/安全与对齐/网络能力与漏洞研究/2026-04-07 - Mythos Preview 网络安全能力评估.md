---
type: article
source: https://www.anthropic.com/research/mythos-preview
source_aliases: []
original_title: Assessing Claude Mythos Preview’s cybersecurity capabilities
published: '2026-04-07'
collected: '2026-09-09'
updated: '2026-09-26'
last_checked: '2026-09-26'
category: 安全与对齐/网络能力与漏洞研究
source_section: Research
tags:
- cybersecurity
- evaluations
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-11'
quality_evidence:
  checked_at: '2026-09-26T09:24:56+08:00'
  source_read: true
  source_read_scope: 官方完整正文及同页脚注；外链论文、计算文件与附件未单独精读或复现。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 实际查看已有 Firefox JS shell 对比柱图，核对 72.4% 成功利用及 11.6% 仅寄存器控制；同步查正文脚注，测试缺少完整浏览器进程沙箱与其他纵深防护。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: f796993747373cfdd86a78298057d7892548a33af52549be99dbefe1c87fe111
    evidence:
    - location: 95b7e4c31688fac7.txt:6–9、19、174、201
      support: 报告为公司测试；Glasswing 的早期访问限于关键伙伴与开源开发者，未计划公开提供 Mythos Preview，安全能力与未来收益是公司判断。
    - location: 95b7e4c31688fac7.txt:14、233（脚注 1）
      support: 复用 Firefox 147 漏洞测试得到 181 次有效利用，另有 29 次寄存器控制；框架模拟内容进程，不含浏览器进程沙箱及其他纵深防护。不是
        181 个独立漏洞或整体浏览器成功率。
    - location: 95b7e4c31688fac7.txt:29–35
      support: 漏洞发现使用与网络及其他系统隔离的容器；不足 1% 的潜在发现已修补，很多细节因协调披露暂不公开，不能将全部潜在发现视为已独立确认。
    - location: 95b7e4c31688fac7.txt:61、75–88、114、234、238
      support: 正文真实软件案例与复用基准条件不同：具体案例有加固与失败边界、部分链条经过人类协作；已知漏洞可能涉及既有知识，利用还依赖系统配置。摘要正确避免将基准概括为完整现实攻防结果。
    correction: 补足实测结果、Firefox 沙箱限定及未公开证据边界。；采纳独立审阅建议，精确说明测试框架模拟内容进程且没有进程沙箱。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-09-26T09:24:56+08:00'
    method: Full-source drafting followed by independent sentence-source and standalone
      readability review; optional precision edits rechecked against source by the
      primary author, followed by final independent confirmation and card-only reread
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-09-26T09:24:56+08:00'
  last_figure_review_at: '2026-09-26T09:24:56+08:00'
  last_figure_review:
    at: '2026-09-26T09:24:56+08:00'
    method: local_original_and_official_media_comparison
    details: 实际查看已有 Firefox JS shell 对比柱图，核对 72.4% 成功利用及 11.6% 仅寄存器控制；同步查正文脚注，测试缺少完整浏览器进程沙箱与其他纵深防护。
---

# Mythos Preview 网络安全能力评估

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E7%BD%91%E7%BB%9C%E8%83%BD%E5%8A%9B%E4%B8%8E%E6%BC%8F%E6%B4%9E%E7%A0%94%E7%A9%B6)

> [官方原文](https://www.anthropic.com/research/mythos-preview) · Assessing Claude Mythos Preview’s cybersecurity capabilities · 2026-04-07
> 中文摘要＋重点文字解读，关键内容及配图节选；产品与政策安排需结合发布时间及后续更新理解。关联论文与附件未单独精读。

## 摘要

Anthropic 报告 Mythos Preview 在隔离环境中寻找软件漏洞、构建利用链的能力明显增强，并通过 Project Glasswing 限定早期访问、协调修复。在模拟 Firefox 147 内容进程的测试框架中，模型完成 181 次成功利用，另有 29 次仅取得寄存器控制；该框架未包含浏览器进程沙箱及其他纵深防护。正文另述真实软件案例，条件不能与该基准混同。发布时逾 99% 的发现尚未修补，许多细节未公开；这些是公司测试结果，本笔记未独立复现。

## 重点文字解读

### 能力提升覆盖不同任务层次

团队在断网容器中让模型检查代码并验证假设，再经模型筛查与人工复核推进严重漏洞的披露；发现、确认、利用和修补是不同阶段。

报告描述开放源码查错、闭源逆向、已修复漏洞利用及逻辑缺陷分析；一些复杂链在启用防护的系统中得到验证，但各实验条件不同。 [原文依据](https://www.anthropic.com/research/mythos-preview)

### 浏览器对比基准有关键限定

复用旧 Firefox 独立 shell 基准时，Mythos Preview 产生 181 次成功利用、29 次仅寄存器控制。该测试框架未包含浏览器进程沙箱及其他纵深防护，不能和文中另述完整防护案例混为一谈。 [原文依据](https://www.anthropic.com/research/mythos-preview)

图示：在 Firefox JS shell 基准中，Mythos Preview 的试次成功利用比例为 72.4%，另有 11.6% 仅取得寄存器控制。此图并非完整浏览器沙箱逃逸成功率。

*在 Firefox JS shell 基准中，Mythos Preview 的试次成功利用比例为 72.4%，另有 11.6% 仅取得寄存器控制。此图并非完整浏览器沙箱逃逸成功率。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/4c1e111d571b5f3699204293a1bf3d5c9d1da97f-3840x2160.png) · [文章出处](https://www.anthropic.com/research/mythos-preview)

### 公开证据受修复进度限制

发布时超过 99% 的发现尚未修复，许多具体结果暂不披露；团队通过 Glasswing 协调防守用途，并建议先用已有模型建立验证和修补流程。 [原文依据](https://www.anthropic.com/research/mythos-preview)

## 适用条件与局限

大量细节在发布时不可独立核验；承诺哈希只能证明后续文件与先前承诺对应，不能证明文件中的发现正确。未复现利用代码。

## 怎样理解与应用（AI 解读）

跟踪这类报告时，把实验环境、确认程度、修复状态与后续公开证据一起记录，避免用一个高分概括全部现实能力。

## 变更记录

- 2026-09-09：最近一年历史补录，核对日期后建立中文概览。
- 2026-09-11：按用户要求补齐年度正文解读，核对具体事实、证据边界与配图。
- 2026-09-26：完整审读正文，通过独立摘要与可读性复核；补足实测结果、Firefox 沙箱限定及未公开证据边界。；采纳独立审阅建议，精确说明测试框架模拟内容进程且没有进程沙箱。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
