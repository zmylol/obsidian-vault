---
type: article
source: https://www.anthropic.com/engineering/claude-code-sandboxing
source_aliases: []
original_title: 'Beyond permission prompts: making Claude Code more secure and autonomous'
published: '2025-10-20'
collected: '2026-09-09'
updated: '2026-09-13'
last_checked: '2026-09-13'
category: 工程与Agent/执行安全与权限
source_section: Engineering
tags:
- agents
- alignment
note_depth: 中文摘要与图文解读
detail_status: completed
translation_status: not_requested
enriched_at: '2026-09-10'
quality_evidence:
  checked_at: '2026-09-10T09:15:56+08:00'
  source_read: true
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 逐图核对原文配图并按正文顺序就近放置；无适用关键图时以文字机制解读完成。
  standard: summary-key-figures-v1
  summary_review:
    standard: standalone-summary-v1
    reviewed_at: '2026-09-13T09:17:34+08:00'
    method: same_executor_second_source_pass_and_standalone_readability
    source_check: passed
    readability_check: passed
    source_sha256: 03958deed6b43e5ae07b1cf155ef2fcf7d794c5f08e124530a88c22368a94c12
    evidence:
    - location: 开头内部使用结果
      support: 84% 的指标是内部权限提示次数下降，不是攻击或安全事件发生率。
      source_line: 6
    - location: Sandboxed bash tool
      support: 发布时为研究预览，使用操作系统机制约束文件与网络及子进程。
      source_line: 19
    - location: Claude Code on the web
      support: 云端把 Git 实际凭据留在隔离环境之外，代理校验凭据和 Git 操作再转发。
      source_line: 31
    correction: 区分本地沙箱与云端 Git 代理，限定内部 84% 指标和历史预览状态，避免绝对安全承诺。
    unresolved: []
---

# 通过沙箱提升 Claude Code 的自主性

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E6%89%A7%E8%A1%8C%E5%AE%89%E5%85%A8%E4%B8%8E%E6%9D%83%E9%99%90)

> [阅读官方原文](https://www.anthropic.com/engineering/claude-code-sandboxing) · 发布于 2025-10-20
> 内容：中文摘要与图文解读，按原文论述顺序节选；非全文翻译。

## 摘要

Anthropic 在 2025 年 10 月为 Claude Code 推出沙箱化命令工具和云端运行环境，以减少频繁审批带来的打断。本地方案同时限制文件系统与网络访问，让命令在预设边界内运行；云端则把敏感 Git 凭据留在沙箱外，由代理校验仓库和分支等操作范围。公司报告内部使用中的权限提示减少了 84%，这不是安全事件减少率。效果取决于边界配置，命令工具发布时仍是研究预览，文章没有证明所有提示注入风险都已消失。

## 正文要点与配图

## 两条边界必须同时存在
文件系统边界限制可读写目录，网络边界限制可连接的主机；只做其中一条，提示注入后的 Agent 仍可能通过另一条边界泄露文件或下载恶意内容。

图示：Claude Code 沙箱结构：文件系统与网络边界共同限制 Agent 的操作范围。

*图注：原图同时展示文件系统和网络两种隔离，核心不是“少弹窗”，而是缩小被接管后的活动范围。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/0d1c612947c798aef48e6ab4beb7e8544da9d41a-4096x2305.png) · [文章出处](https://www.anthropic.com/engineering/claude-code-sandboxing)

## 自主性与权限的取舍
内部使用中，沙箱使权限提示减少约 84%。这表示预先定义边界能让安全操作更顺畅，不表示操作本身不需要审查；复杂动作仍要确认影响范围。

图示：Claude Code Web 的代理结构：自定义代理处理 Git 交互，把代码环境与外部操作分开。

*图注：原图把代码工作区、代理和 Git 交互拆开，说明云端环境如何隔离版本操作。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/e8f66bcf73d9d23cae67e67776b2d31373c13050-4096x2305.png) · [文章出处](https://www.anthropic.com/engineering/claude-code-sandboxing)

## 不能替代的控制
沙箱降低爆炸半径，但不能判断任务是否符合业务意图，也不能代替凭据最小化、日志与人工复核。

## 怎样理解与应用（AI 解读）

把自己的自动任务允许访问的目录和网络主机列成白名单，并模拟其中一个边界失效时还剩哪些保护。

## 证据与阅读边界

以上内容依据官方正文整理；具体图表、实验条件和后续版本请回到原文核对。本文不是全文翻译，也不替代关联论文或安全操作审查。

## 变更记录
- 2026-09-10：按中文摘要与重点文字解读标准深化；保留原有个人内容。
- 2026-09-13：对照原文逐句复核摘要，并单独检查卡片可读性；区分本地沙箱与云端 Git 代理，限定内部 84% 指标和历史预览状态，避免绝对安全承诺。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
