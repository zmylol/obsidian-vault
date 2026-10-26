---
type: article
source: "https://proceedings.neurips.cc/paper_files/paper/2025/hash/3dc85735f6e2fcf093e67b134fa00d21-Abstract-Conference.html"
source_aliases: ["https://doi.org/10.52202/085713-1440"]
original_title: "AgentAuditor: Human-Level Safety and Security Evaluation for LLM Agents"
authors: ["Hanjun Luo", "Shenyu Dai", "Chiming Ni", "Xinfeng Li", "Guibin Zhang", "Kun Wang", "Tongliang Liu", "Hanan Salam"]
published: 2025
collected: 2026-10-26T11:27:47+08:00
updated: 2026-10-26T11:27:47+08:00
last_checked: 2026-10-26T11:27:47+08:00
category: "Agent 评测与基准/安全评测"
venue: "NeurIPS"
venue_year: 2025
track: "Main Conference Track"
acceptance_status: "正式收录"
paper_id: "neurips-2025-3dc85735f6e2fcf093e67b134fa00d21"
pdf_url: "https://proceedings.neurips.cc/paper_files/paper/2025/file/3dc85735f6e2fcf093e67b134fa00d21-Paper-Conference.pdf"
code_url: "https://github.com/Astarojth/AgentAuditor-ASSEBench"
tags: [agent, safety, security, evaluation, NeurIPS]
note_depth: 中文摘要与重点解读
detail_status: completed
---

# AgentAuditor：让 Agent 安全评测达到人类水平

<!-- AUTO:BEGIN -->

## 为何入选

AgentAuditor 是 NeurIPS 2025 主会中面向 Agent 安全与安保评测的代表作。它把安全评审所需的案例、风险类型和推理示例组织成可检索记忆，使评估器在不训练新模型的情况下复用过去的判断。它与已收录的通用 Agent 基准互补：前者关注任务完成，本文关注 Agent 是否在风险场景中做出安全判断。

## 摘要
AgentAuditor 提出无需训练的记忆增强安全评估器，把案例特征记忆与代表性推理示例分开维护，再通过多阶段检索选择判断上下文。作者构建 ASSEBench，含 2,293 条记录、15 类风险、29 个场景、528 个环境和 26 种行为模式。Gemini-2.0-Flash-thinking 在 R-Judge 上 F1 达 96.31%、准确率 96.10%，接近人工 95.67%，但依赖标签质量、启发式检索和英文二分类。

## 重点解读

### 两种记忆分别解决“找什么”和“怎么判”

第一阶段建立 feature memory，把场景、风险和行为模式整理成结构化特征；第二阶段从历史推理中用 FINCH 聚类选出有代表性的 shots，并保留思维链。最终检索按特征相似度、风险相关性和示例质量加权，组成少样本提示。这种分工避免把所有历史案例塞进上下文，也让评估器可以解释使用了哪类参考。

### 评测集覆盖风险结构而非单个攻击模板

ASSEBench 的 2,293 条记录覆盖 15 类风险、29 个场景、528 个环境和 26 种行为模式，使用严格与宽松两套安全标准。作者在 R-Judge、ASSE-Security 等数据上比较基础模型、普通少样本和不同记忆组件，试图证明结构化案例记忆与推理记忆的组合收益，而不是把单一提示技巧当作完整安全系统。

## 实验与结果

- 在 R-Judge 上，Gemini-2.0-Flash-thinking 的 F1 为 96.31%、准确率为 96.10%；人工评审平均准确率为 95.67%。ASSE-Security 的对应结果也达到约 93.17% 的 F1 和准确率。
- 消融结果显示，移除 feature memory 或 reasoning memory 都会降低效果，联合检索优于单一记忆；作者还比较了严格/宽松标准与不同检索参数。
- 论文的贡献是评估器侧的可复用记忆与安全数据组织，不能据此宣称被评估的 Agent 已经安全，或把二分类分数外推到生产风险概率。

## 适用条件与局限

- 推理记忆的质量取决于已有标签和思维链示例；错误案例会被检索并放大。
- CoT 少样本需要模型具备相应推理能力，并增加上下文与推理资源；不同模型可能需要重新调检索权重。
- 启发式参数由实验经验设定，跨风险域的稳定性与可解释性还没有充分验证。
- 当前只判断安全/不安全二分类，ASSEBench 全部为英文，难以覆盖多语言、连续风险等级和真实权限后果。

## 怎样理解与应用（AI 解读）

AgentAuditor 可以看作“带案例库的安全审计员”：它把过去的风险判断转成可检索证据，但仍是评估工具而非最终裁决。部署时应保存每次命中的案例、标准版本和评审理由，并用独立人工抽样检查记忆污染、标签漂移和未覆盖风险。这个部署建议是 AI 解读，不是论文额外实验结论。

## 原文与资源

- [NeurIPS 论文页面](https://proceedings.neurips.cc/paper_files/paper/2025/hash/3dc85735f6e2fcf093e67b134fa00d21-Abstract-Conference.html)
- [NeurIPS PDF](https://proceedings.neurips.cc/paper_files/paper/2025/file/3dc85735f6e2fcf093e67b134fa00d21-Paper-Conference.pdf)
- [AgentAuditor 与 ASSEBench 代码](https://github.com/Astarojth/AgentAuditor-ASSEBench)
- [DOI](https://doi.org/10.52202/085713-1440)
- 已核对 Figure 1–4、Table 1–2、方法检索流程、主结果、消融与第 6 节局限；本次以文字记录，未复制图片。

## 变更记录

- 2026-10-26：首次收录；按 NeurIPS 官方摘要页与 58 页 PDF 完成作者、轨道、方法、实验数字和局限复核。

<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
