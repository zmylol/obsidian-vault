---
type: article
source: "https://proceedings.neurips.cc/paper_files/paper/2025/hash/19909c36f51abc4856b4560aff3d36d6-Abstract-Conference.html"
source_aliases: ["https://doi.org/10.52202/085713-0593"]
original_title: "A-Mem: Agentic Memory for LLM Agents"
authors: ["Wujiang Xu", "Zujie Liang", "Kai Mei", "Hang Gao", "Juntao Tan", "Yongfeng Zhang"]
published: 2025
collected: 2026-10-25T11:25:14+08:00
updated: 2026-10-25T11:25:14+08:00
last_checked: 2026-10-25T11:25:14+08:00
category: "Agent 记忆与上下文/自主记忆组织"
venue: "NeurIPS"
venue_year: 2025
track: "Main Conference Track"
acceptance_status: "正式收录"
paper_id: "neurips-2025-19909c36f51abc4856b4560aff3d36d6"
pdf_url: "https://proceedings.neurips.cc/paper_files/paper/2025/file/19909c36f51abc4856b4560aff3d36d6-Paper-Conference.pdf"
code_url: "https://github.com/WujiangXu/AgenticMemory"
tags: [agent, memory, long-context, NeurIPS]
note_depth: 中文摘要与重点解读
detail_status: completed
---

# A-Mem：让 Agent 自主组织和演化长期记忆

<!-- AUTO:BEGIN -->

## 为何入选

A-Mem 是 NeurIPS 2025 主会中直接研究 Agent 长期记忆组织的一篇代表作。它把记忆从固定的存储与检索模块改成可由 Agent 动态建笔记、建链接并持续演化的网络；在此前已收录的工具调用与评测论文之外，补上了 Agent 如何积累经验这一关键环节。论文有公开全文和两套代码，且明确报告了成本、延迟与文本模态限制，适合用作记忆系统的基线。

## 摘要

A-Mem 针对 LLM Agent 在长时间交互中难以组织历史经验的问题，提出受 Zettelkasten 启发的自主记忆。新交互被写成带上下文、关键词、标签和向量的原子笔记，系统再动态建链并演化旧记忆。作者在 LoCoMo、DialSim 和六个基础模型上报告改进，并称一次操作约 1,200 token、商业 API 成本低于 0.0003 美元。结果依赖底层 LLM，当前仅支持文本。

## 重点解读

### 记忆单元不是一段原始对话

论文把一次交互拆成原始内容、时间戳、关键词、标签、上下文描述、向量和链接集合。关键词、标签与上下文描述由 LLM 从原始交互中生成，向量用于近邻检索。这样同一条记忆同时拥有可读的语义属性和可计算的相似度表示，而不是只把整段历史塞进上下文。

### 新记忆会改变旧记忆的结构

写入新笔记后，A-Mem 先按向量相似度取 top-k 历史笔记，再让 LLM 判断哪些笔记应建立联系。随后，邻居笔记的上下文、关键词和标签可以被新经验触发更新，形成论文所说的 memory evolution。链接生成和记忆演化共同决定了记忆网络如何随任务推进而长出来，这一点区别于只优化查询阶段的 Agentic RAG。

### 检索时利用相对记忆

查询先通过同一编码器得到向量，系统取最相关的记忆，并把与其处在同一连接簇中的相对记忆一并带入上下文。论文的 Figure 2 将存储、链接、演化和检索放在一个循环中，意图是在不恢复完整历史的情况下保留跨会话关系。

## 实验与结果

- LoCoMo 平均约 9K token、最多 35 个会话，含 single-hop、multi-hop、temporal、open-domain 和 adversarial 五类问题；DialSim 用多年多方对话检验更长的记忆跨度。作者比较 LoCoMo、ReadAgent、MemoryBank、MemGPT 等方法，并在六个基础模型上评估 F1、BLEU-1 等指标。
- 在 GPT-4o-mini 的 LoCoMo 表中，A-MEM 的 multi-hop F1/BLEU-1 为 27.02/20.09，temporal 为 45.85/36.67；对应完整上下文的 LoCoMo 基线分别为 25.02/19.75 和 18.41/14.77。表中 A-MEM 的 token length 为 2,520，而 LoCoMo 和 MemGPT 约为 16,900。
- 成本分析报告每次记忆操作约 1,200 token，比 16,900 token 的基线少 85–93%；商业 API 下每次操作低于 0.0003 美元，GPT-4o-mini 平均 5.4 秒，本地 Llama 3.2 1B 单卡约 1.1 秒。作者的消融实验显示去掉链接生成和记忆演化后复杂推理下降。

## 适用条件与局限

- 结果依赖底层 LLM 生成上下文描述、标签和链接的能力；不同模型可能形成不同的记忆结构。
- 评测集中在长时程文本对话，不能直接推出对网页、代码、具身或多模态 Agent 的收益。
- 当前实现没有图像和音频记忆；作者将多模态扩展列为后续工作。
- 多次 LLM 调用和动态更新带来额外延迟，top-k、提示模板与编码器也会影响成本和网络质量。代码已公开，但本次没有运行复现实验。

## 怎样理解与应用（AI 解读）

可以把 A-Mem 看成“会重写索引的长期记忆层”：它不只回答“哪些历史片段相似”，还试图维护“这些片段之间有什么关系、关系是否因新证据而改变”。工程上适合把记忆写入、关联、演化和读取拆成可观测事件，并为每次演化保留版本、来源与用户删除入口；否则自动生成的错误链接会像正确记忆一样被长期复用。这个应用建议是 AI 解读，不是论文额外实验结论。

## 原文与资源

- [NeurIPS 论文页面](https://proceedings.neurips.cc/paper_files/paper/2025/hash/19909c36f51abc4856b4560aff3d36d6-Abstract-Conference.html)
- [PDF](https://proceedings.neurips.cc/paper_files/paper/2025/file/19909c36f51abc4856b4560aff3d36d6-Paper-Conference.pdf)
- [评测代码](https://github.com/WujiangXu/AgenticMemory)
- [生产记忆实现](https://github.com/WujiangXu/A-mem-sys)
- [DOI](https://doi.org/10.52202/085713-0593)
- 已核对 Figure 1–2、LoCoMo 结果表、效率与消融表；本次以文字记录，未复制图片。

## 变更记录

- 2026-10-25：首次收录；已按 NeurIPS 官方摘要页与 28 页 PDF 完成元数据、摘要、方法、实验、效率和局限复核。

<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
