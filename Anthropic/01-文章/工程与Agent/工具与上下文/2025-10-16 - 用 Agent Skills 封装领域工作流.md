---
type: article
source: https://www.anthropic.com/engineering/equipping-agents-for-the-real-world-with-agent-skills
source_aliases: []
original_title: Equipping agents for the real world with Agent Skills
published: '2025-10-16'
collected: '2026-09-09'
updated: '2026-09-13'
last_checked: '2026-09-13'
category: 工程与Agent/工具与上下文
source_section: Engineering
tags:
- tool-use
- context-engineering
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
  figure_evidence: 本次逐图查看两张既有原图，确认第一张为智能体、技能和虚拟机架构，第二张区分 YAML 元数据与 Markdown 正文；修正原有过度概括的
    alt 和图注。
  standard: summary-key-figures-v1
  summary_review:
    standard: standalone-summary-v1
    reviewed_at: '2026-09-13T09:17:34+08:00'
    method: same_executor_second_source_pass_and_standalone_readability
    source_check: passed
    readability_check: passed
    source_sha256: eddb57e356553f5b48b8fffb0c533956414bb2654c6c77e8822776124f234365
    evidence:
    - location: The anatomy of a skill
      support: 先加载名称描述，再读取 SKILL.md，最后按需访问所引用的文件。
      source_line: 13
    - location: Skills and code execution
      support: PDF 示例通过预写脚本提取表单字段，说明代码的确定性与复用机制。
      source_line: 31
    - location: 页首更新及 Security considerations when using Skills
      support: 页首记载 2025-12-18 开放标准更新；安全段要求检查技能代码、依赖与外部资源。
      source_line: 5
    correction: 补出逐层加载的实际过程与 PDF 示例，区分设计说明、后续开放标准消息和性能证据。
    unresolved: []
  figure_checked_at: '2026-09-13T09:20:40+08:00'
---

# 用 Agent Skills 封装领域工作流

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E5%B7%A5%E5%85%B7%E4%B8%8E%E4%B8%8A%E4%B8%8B%E6%96%87)

> [阅读官方原文](https://www.anthropic.com/engineering/equipping-agents-for-the-real-world-with-agent-skills) · 发布于 2025-10-16
> 内容：中文摘要与图文解读，按原文论述顺序节选；非全文翻译。

## 摘要

Anthropic 用 Agent Skills 将领域操作知识封装为包含说明、脚本和参考资料的文件夹，让通用智能体按任务加载并复用这些能力。模型先读取名称和描述，确认相关后再读取完整说明及必要附件，因此不必把整套手册预先塞入上下文；确定性操作还能交给脚本执行。文章以 PDF 表单处理说明机制，并在 2025 年 12 月补充开放标准的消息。它主要介绍设计和使用经验，没有给出通用性能提升幅度；技能中的代码和外部资源仍需审核。

## 正文要点与配图

## Skills 的加载层次
Skill 目录以 `SKILL.md` 为入口，元数据先帮助 Agent 判断相关性，正文指令和附加资源再按需加载。文章用文档编辑 Skill 说明：模型本来会读 PDF，但填表等操作需要额外工具与流程。

![智能体配置、技能目录和运行环境的关系。](../../../98-附件/原文配图/62882944d34ab5ebe405.jpg)

*原文架构图：左侧是系统提示、已配置技能与 MCP 连接；右侧是含 Bash、Python、Node.js 的运行环境及技能文件目录。箭头区分本地资源访问与远程 MCP 服务连接，不表示写入一个文件就必然触发技能。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/ddd7e6e572ad0b6a943cacefe957248455f6d522-1650x929.jpg) · [文章出处](https://www.anthropic.com/engineering/equipping-agents-for-the-real-world-with-agent-skills)

## 可组合而非一次性提示
Skills 可以叠加，Agent 只加载与任务相关的资源；这样既复用程序化步骤，也把领域经验从个人提示变成团队资产。

![SKILL.md 文件中的 YAML 元数据与 Markdown 正文。](../../../98-附件/原文配图/bdcb44eec8ebefc2e1f1.jpg)

*原文文件示例：上部 YAML 元数据包含 name 和 description，帮助判断技能是否相关；下部 Markdown 正文包含操作说明、附件引用与代码示例，需在技能被选中后按需读取，不能把整段正文都称为元数据。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/6f22d8913dbc6228e7f11a41e0b3c124d817b6d2-1650x929.jpg) · [文章出处](https://www.anthropic.com/engineering/equipping-agents-for-the-real-world-with-agent-skills)

## 适用范围
Skill 是可复用的工作流容器，不是对结果正确性的保证；脚本、参考资料和权限仍需单独审核，尤其是会修改文件或调用外部系统的技能。

## 怎样理解与应用（AI 解读）

为知识库写一个最小 Skill：只放触发描述、三步流程和一个可验证输出，再观察是否比把全部规则塞进每次提示更容易维护。

## 证据与阅读边界

以上内容依据官方正文整理；具体图表、实验条件和后续版本请回到原文核对。本文不是全文翻译，也不替代关联论文或安全操作审查。

## 变更记录
- 2026-09-10：按中文摘要与重点图文解读标准深化；保留原有个人内容。
- 2026-09-13：对照原文逐句复核摘要，并单独检查卡片可读性；补出逐层加载的实际过程与 PDF 示例，区分设计说明、后续开放标准消息和性能证据。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
