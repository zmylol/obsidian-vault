---
type: article
source: https://www.langchain.com/blog/jev-is-now-available-in-langsmith-evals
source_aliases: []
original_title: Jev is now available in LangSmith Evals
authors:
- Winston Huynh
authors_source: 原文页首署名
published: '2026-09-21'
published_source: 原文页首及官方博客列表
published_evidence: September 21, 2026
collected: '2026-09-23'
updated: '2026-10-02'
last_checked: '2026-10-02'
category: 工程与Agent/评估与可靠性
source_section: LangChain 官方博客署名产品技术说明
tags:
- lc
- AI
- 评估与可靠性
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
---

# 在 LangSmith 中用 Jev 评估运行记录与对话

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E8%AF%84%E4%BC%B0%E4%B8%8E%E5%8F%AF%E9%9D%A0%E6%80%A7)

> [原文：Jev is now available in LangSmith Evals](https://www.langchain.com/blog/jev-is-now-available-in-langsmith-evals) · 发布于 2026-09-21 · 收录于 2026-09-23  
> 作者：Winston Huynh · LangChain 官方博客署名产品技术说明  
> 中文摘要与重点图文节选；未配置评估器、读取凭据、调用服务或复现实验，关联论文未精读。

## 摘要

LangSmith 已将 TypeSafe 的 Jev 接入在线评估：用户提供运行记录或对话，再用是非概率、选项和有序评分三类问题定义标准，每个问题形成可筛选、统计和告警的反馈指标。一次调用可并行评估多个问题，适合大量、判定明确的任务；需要文字推理的开放式评估仍可使用语言模型裁判。使用时需配置 TypeSafe API 密钥；2026年10月2日回查时，正文和新版配置截图未说明数据留存政策，不能据此认定已支持零数据保留。文中引用的性能结果只来自单一 Agent 实验，不能推定其他任务也有相同收益。

## 重点图文解读

### 把评估标准变成类型化问题

Jev 读取运行轨迹、消息或其他上下文，直接返回结构化判断。Noul 判断是非概率，Choice 从选项中选择，Score 在有序等级上评分；一个请求可并行处理多个问题。作者把它定位于大量、范围明确的判断，需要文字解释的开放式标准仍可交给语言模型裁判。


![三类输出分别表示个人信息泄露概率、意图分类和情绪程度。概率、置信度和有序评分含义不同，图中示例数值不能合并为准确率。](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/5d2ccbc377221ab0081d.png)

*三类输出分别表示个人信息泄露概率、意图分类和情绪程度。概率、置信度和有序评分含义不同，图中示例数值不能合并为准确率。* [原图](<https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6ab0be9512e026354354a719_jev-primitives-light-blog.png>) · [文章出处](https://www.langchain.com/blog/jev-is-now-available-in-langsmith-evals)

### 性能结果沿用此前的有限实验

文章引用此前天气助手实验：Jev 单次平均0.44秒、约0.00035美元，并称其判断与人工标签一致。该实验固定五个案例并重复判断，不能把重复次数当作独立样本量，也不是对这次产品接入做了新的大规模验证。[实验原文](https://www.langchain.com/blog/jev-agent-evals-langsmith#evaluation-with-jev)保留具体条件与复现限制。

### 先配置提供方，再确认送评条件

在工作区 Provider secrets 添加 TypeSafe API 密钥，再从追踪项目的 Evaluators 创建 LLM-as-a-Judge Evaluator，选择 TypeSafe 与 jev-latest。这个入口复用了已有评估流程；2026年10月2日回查的正文和新版配置截图不再显示数据留存提示。该变化不能证明提供方已支持零数据保留，实际送评政策需另行核实。


![新版配置截图选择 TypeSafe 与 jev-latest，未显示原图中的数据留存提示；截图变化本身不能证明提供方已支持零数据保留。](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/790d96f4c3bc122fe744.png)

*新版配置截图选择 TypeSafe 与 jev-latest，未显示原图中的数据留存提示；截图变化本身不能证明提供方已支持零数据保留。* [原图](<https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6abc4457b1de1ac91e791ddd_Jev%20Model%20configuration.png>) · [文章出处](https://www.langchain.com/blog/jev-is-now-available-in-langsmith-evals)

### 把待评材料与评分指令分开

State 通过运行或对话变量提供输入、输出等材料，不放评分指令；标准写入 Questions。是非问题要让高概率对应“是”，选项题要列全选项，有序评分要按低到高排列。每个问题成为一个反馈指标，避免把材料内容和裁判规则混在一起。


![每个问题定义独立反馈指标。此例用 Noul 询问输出是否包含个人可识别信息，越接近1越倾向肯定，0.5附近表示不确定；阈值仍需结合任务验证。](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/4195c7fa629bd45e8c18.png)

*每个问题定义独立反馈指标。此例用 Noul 询问输出是否包含个人可识别信息，越接近1越倾向肯定，0.5附近表示不确定；阈值仍需结合任务验证。* [原图](<https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6ab0bf852da68cef127cf36b_Jev%20Tutorial%20-%20(4)%20Add%20questions.png>) · [文章出处](https://www.langchain.com/blog/jev-is-now-available-in-langsmith-evals)

### 把多项判断接入持续反馈

保存后，评估器为进入的运行记录或对话生成反馈，每个问题对应独立指标。团队可据此筛选、制图、设置告警或自动化；这些能力提供后续分析入口，并不保证判定本身正确。


![同一运行记录可显示情绪、意图和个人信息泄露等多个反馈指标，并查看类型化原始结果。这里是界面示例，不是准确率或效果验证。](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/8da608245c3a2f827c92.png)

*同一运行记录可显示情绪、意图和个人信息泄露等多个反馈指标，并查看类型化原始结果。这里是界面示例，不是准确率或效果验证。* [原图](<https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6ab0bfa356be7bcca073c6f2_Jev%20Tutorial%20-%20(5)%20Feedback.png>) · [文章出处](https://www.langchain.com/blog/jev-is-now-available-in-langsmith-evals)

**配图范围：**正文8张静态图片均已检查，节选4张类型说明和配置反馈截图；其余图保留原文入口。正文未发现 SVG、视频、嵌入框架、画布或独立 HTML 表格。

## 适用条件与局限

产品发布于2026年9月21日，配置说明已按10月2日回查更新。最高约450倍成本优势、200倍速度优势来自 TypeSafe 对分类任务的报告，与此前天气实验的实测比较不是同一口径；跨任务收益和判断可靠性需要单独验证。当前正文和配置图未说明数据留存政策，不能据此确认零数据保留；本笔记未核验提供方的实际政策、接入真实工作区或执行评估，也未核验所有套餐、限额和地区条件。

## 怎样理解与应用（AI 解读）

**AI 解读：**可先准备一小组人工标注的合成客服对话，将意图分类、情绪等级与是否泄露信息拆成不同标准，分别检查误判和不确定样本。再比较重复评分、调用费用和人工复核结果，验证是否值得扩大覆盖；这是待验证方法，本次未发送任何对话或运行服务。

## 变更记录

- 2026-09-23：首次收录9月21日发布的产品技术说明；摘要经独立事实与可读性复核通过，采用4张原图并保留数据留存及实验外推限制。
- 2026-10-02：原文及新版配置截图移除数据留存提示，更新摘要、说明、图注与配图；不能据此认定支持零数据保留。首次收录记录保留。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
