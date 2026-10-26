---
type: article
source: "https://aclanthology.org/2026.acl-long.337/"
source_aliases: ["https://doi.org/10.18653/v1/2026.acl-long.337"]
original_title: "AgencyBench: Benchmarking the Frontiers of Autonomous Agents in 1M-Token Real-World Contexts"
authors: ["Keyu Li", "Junhao Shi", "Yang Xiao", "Mohan Jiang", "Jie Sun", "Yunze Wu", "Dayuan Fu", "Shijie Xia", "Xiaojie Cai", "Tianze Xu", "Weiye Si", "Wenjie Li", "Dequan Wang", "Pengfei Liu"]
published: 2026-07
collected: 2026-10-26T11:27:47+08:00
updated: 2026-10-26T11:27:47+08:00
last_checked: 2026-10-26T11:27:47+08:00
category: "Agent 评测与基准/长时程综合评测"
venue: "ACL"
venue_year: 2026
track: "Long Papers (Volume 1)"
acceptance_status: "正式收录"
paper_id: "2026.acl-long.337"
pdf_url: "https://aclanthology.org/2026.acl-long.337.pdf"
code_url: "https://github.com/GAIR-NLP/AgencyBench"
tags: [agent, benchmark, long-horizon, computer-use, ACL]
note_depth: 中文摘要与重点解读
detail_status: completed
---

# AgencyBench：在百万 Token 真实场景中评测自主 Agent

<!-- AUTO:BEGIN -->

## 为何入选

AgencyBench 是 ACL 2026 Long Papers 中面向长时程自主性的综合基准。它把游戏、前端、后端、代码生成、科研和 MCP 工具使用放在同一套可执行环境里，补足短任务成功率无法揭示的规划、工具调用和状态管理问题。任务、用户模拟、视觉评审和人工一致性验证都公开描述，适合作为 TheAgentCompany、ABC 之后的规模化压力测试。

## 摘要
AgencyBench 面向软件环境中的长时程自主 Agent，构建 32 个场景、138 个任务，单个任务平均约 90 次工具调用、最长达百万 Token 和数小时运行。任务覆盖游戏、前后端开发、代码生成、科研与 MCP 工具使用，并由用户模拟 Agent 逐步反馈；系统在 Docker 沙箱中联合规则、文本和视觉评审打分。闭源模型平均 48.4%，开源模型 32.1%，但成本与软件范围限制了外推。

## 重点解读

### 把“完成一个任务”拆成可持续的过程

作者从 20 名有日常 AI 使用经验的专家收集任务，再经过 4 名专家复核。每个场景不是一次问答，而是包含工作区、评测区和脚手架的可执行项目：Agent 可以读写文件、运行 CLI、搜索网页并管理上下文，用户模拟器依据当前进展持续提出反馈。四个专家对 50 条采样轨迹的模拟反馈平均一致度为 4.69/5。

### 自动评测同时看文字、文件和画面

规则评测用于可执行状态，LLM 评审负责开放式目标，视觉任务再引入 Gemini-2.5-Pro 视觉评审。作者用 Claude-4-Sonnet 文本评审和视觉评审共同检查 50 个留出任务，与人工标注达到 Kappa 0.93。这个设计把“最后交付物”与中间过程的可检查状态结合起来，比单一最终答案更接近软件 Agent 的真实工作流。

## 实验与结果

- 基准包含 6 类能力、32 个场景和 138 个任务，任务平均约 90 次工具调用、约 1M Token，运行时间可达数小时；具体场景包括网页、代码、科研和 MCP 工具操作。
- 主结果表中，闭源模型平均 48.4%，开源模型平均 32.1%。闭源模型从 GPT-5.2 的 56.5% 到 Grok-4.1-Fast 的 44.3%；开源模型从 GLM-4.6 的 38.6% 到 Qwen-3-235B-A22B-Thinking 的 27.0%。
- 这些结果支持“长时程、多状态任务仍然困难”的判断，但不是不同模型能力的统一排名：任务成本、评审模型和失败恢复策略都会影响得分。

## 适用条件与局限

- 运行一次需要长上下文、多轮工具调用和数小时资源，评测成本明显高于短基准；复现实验前应先固定模型、温度、超时和沙箱版本。
- 场景都限定在软件和计算机界面，不能直接代表具身、机器人或真实物理环境中的 Agent；作者把多模态物理代理留作未来方向。
- 用户模拟器和 LLM-as-a-judge 能提高覆盖率，却可能与真实用户偏好或人工验收标准有系统差异。
- 任务由专家构造，虽覆盖面广，仍可能遗漏开放世界中的权限、网络故障和长期协作问题；代码已公开，本次没有运行复现。

## 怎样理解与应用（AI 解读）

AgencyBench 更像一套“长时程压力测试”而非单一能力排行榜。它把 Agent 的上下文管理、工具调用、失败恢复和最终交付放到同一条轨迹上，因此适合与 ABC 的基准设计检查项配合使用：先用 ABC 检查任务和评审是否可信，再用 AgencyBench 观察模型在百万 Token 级流程中何处失效。这个组合建议是 AI 解读，不是论文新增实验结论。

## 原文与资源

- [ACL Anthology 论文页面](https://aclanthology.org/2026.acl-long.337/)
- [ACL PDF](https://aclanthology.org/2026.acl-long.337.pdf)
- [AgencyBench 代码](https://github.com/GAIR-NLP/AgencyBench)
- [DOI](https://doi.org/10.18653/v1/2026.acl-long.337)
- 已核对摘要、Figure 1–2、任务与评审设计、主结果表及局限章节；本次以文字记录，未复制图片。

## 变更记录

- 2026-10-26：首次收录；按 ACL 2026 官方页面与 19 页 PDF 完成作者、轨道、方法、实验数字和局限复核。

<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
