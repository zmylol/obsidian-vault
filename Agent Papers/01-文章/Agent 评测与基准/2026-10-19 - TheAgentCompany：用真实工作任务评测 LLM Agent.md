---
type: article
source: "https://proceedings.neurips.cc/paper_files/paper/2025/hash/0d744742f6fac4d1134c019b7cef3c8a-Abstract-Datasets_and_Benchmarks_Track.html"
source_aliases: ["https://doi.org/10.52202/085713-0315"]
original_title: "TheAgentCompany: Benchmarking LLM Agents on Consequential Real World Tasks"
authors: ["Frank F. Xu", "Yufan Song", "Boxuan Li", "Yuxuan Tang", "Kritanjali Jain", "Mengxue Bao", "Zora Z. Wang", "Xuhui Zhou", "Zhitong Guo", "Murong Cao", "Mingyang Yang", "Hao Yang Lu", "Amaad Martin", "Zhe Su", "Leander Melroy Maben", "Raj Mehta", "Wayne Chi", "Lawrence Jang", "Yiqing Xie", "Shuyan Zhou", "Graham Neubig"]
published: 2025
collected: 2026-10-19T08:54:44+08:00
updated: 2026-10-19T08:54:44+08:00
last_checked: 2026-10-19T08:54:44+08:00
category: "Agent 评测与基准/真实工作环境"
venue: "NeurIPS"
venue_year: 2025
track: "Datasets and Benchmarks Track"
acceptance_status: "正式收录"
paper_id: "neurips-2025-0d744742f6fac4d1134c019b7cef3c8a"
pdf_url: "https://proceedings.neurips.cc/paper_files/paper/2025/file/0d744742f6fac4d1134c019b7cef3c8a-Paper-Datasets_and_Benchmarks_Track.pdf"
code_url: "https://the-agent-company.com/"
tags: [agent, benchmark, long-horizon, NeurIPS]
note_depth: 中文摘要与重点解读
detail_status: completed
---

# TheAgentCompany：用真实工作任务评测 LLM Agent

<!-- AUTO:BEGIN -->

## 为何入选

这是 NeurIPS 2025 Datasets and Benchmarks Track 的正式论文，影响力来自它把 Agent 评测从单一网页或短任务推进到可自托管、跨工具、跨岗位的长程工作环境。它还给出一个清晰的现实基线：强模型能完成一部分工作，但距离稳定自动化仍很远。

## 摘要

TheAgentCompany 构建了一个可自托管的软件公司环境，用 175 个覆盖软件工程、项目管理、财务等岗位的任务评测 LLM Agent。Agent 需要在内部网站、浏览器、终端、代码环境和模拟同事之间连续行动，评测器按中间检查点和最终完成情况给分。论文在 12 个闭源与开源模型上运行 OpenHands 等 Agent，最佳配置 Gemini 2.5 Pro 完成率为 30.3%，部分完成分为 39.3%。这说明当前 Agent 可以处理一部分结构清晰的工作任务，但长程、多步骤和需要协作的任务仍是主要瓶颈，结果也只适用于该自包含的软件公司场景。

## 重点解读

### 环境同时覆盖工具和协作

论文把 GitLab、OwnCloud、Plane、RocketChat、浏览器、终端和 Python 代码环境放进同一个可重置的 Docker 场景，并用模拟同事提供信息。这样测试的不只是“能否点对网页按钮”，还包括跨工具保持状态、向同事询问信息、完成代码和文档交付等连续工作。

### 检查点让长任务可分解评测

每项任务包含意图、多个中间检查点、初始化与收尾代码，以及检查环境状态或轨迹的评测器。完整完成分是二元指标；部分完成分把检查点进度与完整完成奖励结合，既保留终点要求，也能观察 Agent 卡在哪一步。论文还报告步骤数和 API 成本，方便比较能力与效率的取舍。

### 结果给出“能做多少”的边界

在 175 个任务上，Gemini 2.5 Pro 的完整完成率 30.3%、部分完成分 39.3%，Claude 3.7 Sonnet 为 26.3%/36.4%。作者强调，任务主要是软件公司的行政与编码工作，不能据此推断整个职业类别的自动化比例；这也是该基准相较于只报单一成功率的价值所在。

## 实验与结果

作者评测 12 个基础模型，统一使用 OpenHands CodeAct Agent 或 OWL-RolePlay 等框架；模拟同事和 LLM 评测器固定使用 Claude 3.5 Sonnet。环境设计约投入 20 位参与者、两个月和约 3000 人时，并对任务评测器做代码审查、截图验证和人工复核。结果表同时报告成功率、部分分、步骤数和成本，最佳模型的平均成本约为每任务 4.2 美元。

## 适用条件与局限

- 任务集中在一个模拟软件公司，岗位和工具覆盖有代表性但不等于真实劳动力市场。
- 模拟同事与部分评测使用固定 LLM，可能把模型偏差带入环境和评分。
- 任务由作者团队策划，论文承认不可能覆盖某个职业的全部工作；长程任务的难度和分布仍带有设计者选择。
- 成本与成功率会随模型、Agent 框架、提示、工具版本和 API 价格变化，复现实验需锁定版本。

## 怎样理解与应用（AI 解读）

把它用于内部 Agent 评估时，应先把业务流程拆成可验证的检查点，再分别记录“完成了多少”“走了多少步”“花了多少钱”“是否需要人工接管”。比起只看最终答案，这种分解更容易定位是工具访问、计划、协作还是交付环节导致失败。这个迁移建议是 AI 解读，不是论文对其他组织的直接结论。

## 原文与资源

- [NeurIPS 论文页面](https://proceedings.neurips.cc/paper_files/paper/2025/hash/0d744742f6fac4d1134c019b7cef3c8a-Abstract-Datasets_and_Benchmarks_Track.html)
- [PDF](https://proceedings.neurips.cc/paper_files/paper/2025/file/0d744742f6fac4d1134c019b7cef3c8a-Paper-Datasets_and_Benchmarks_Track.pdf)
- [项目与环境](https://the-agent-company.com/)
- [DOI](https://doi.org/10.52202/085713-0315)
- 原文 Figure 1 的环境结构已核对；本次未复制图片，保留文字解读。

## 变更记录

- 2026-10-19：首次收录；已按 NeurIPS 官方 PDF 完成摘要、环境、评测指标、结果与局限复核。

<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
