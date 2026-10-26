---
type: article
source: https://www.langchain.com/blog/introducing-langsmith-tuned-evaluators-starting-with-perceived-error
source_aliases: []
original_title: Introducing LangSmith Tuned Evaluators, starting with Perceived Error
authors:
- Jake Broekhuizen
- Shamik Karkhanis
- Vivek Trivedy
authors_source: 原文页首署名
published: '2026-08-18'
published_source: 原文页首或官方博客列表
published_evidence: August 18, 2026
collected: '2026-09-10'
updated: '2026-09-13'
last_checked: '2026-09-30'
category: 工程与Agent/评估与可靠性
source_section: LangChain 官方博客署名文章
tags:
- lc
- AI
- 评估与可靠性
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
---

# 用 Tuned Evaluators 持续评估 Agent 的感知错误

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E8%AF%84%E4%BC%B0%E4%B8%8E%E5%8F%AF%E9%9D%A0%E6%80%A7)

> [原文：Introducing LangSmith Tuned Evaluators, starting with Perceived Error](https://www.langchain.com/blog/introducing-langsmith-tuned-evaluators-starting-with-perceived-error) · 发布于 2026-08-18 · 收录于 2026-09-10  
> 作者：Jake Broekhuizen、Shamik Karkhanis、Vivek Trivedy · LangChain 官方博客  
> 中文摘要与重点图文节选；示例代码未执行，外链论文与实验报告未单独复现。产品能力按文章发布日期理解。

## 摘要

LangChain 发布 Tuned Evaluators，由平台维护面向特定目标的评估器，判断与解释直接附在调用记录上。首款 Perceived Error 用专门后训练的模型，从用户纠正、反复请求等线索识别疑似错误；公司内部基准报告其判别效果优于所测前沿模型且成本更低，但它仍是待调查信号。2026 年 8 月发布时，该款仅面向美国区 Plus 和 Cloud Enterprise。对话至少包含两组人机消息并达到设定的空闲时间后才符合条件，评估在此后 12 小时内完成。

## 重点图文解读

### 把裁判维护交给平台

平台负责提示、模型和版本；结果附解释回到调用记录，供定位失败、人工复查和补充评估样例使用。

### 专用模型的成本与准确性

公司在已标注对话上训练窄目标裁判，内部基准报告成本下降 82%；早期客户的节省幅度随对话构成变化。

图示：公司基准：横轴为每百次评估美元成本，纵轴为准确率；专用裁判位于左上方。这里只比较图中对话任务，不能外推所有业务。

*公司基准：横轴为每百次评估美元成本，纵轴为准确率；专用裁判位于左上方。这里只比较图中对话任务，不能外推所有业务。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6a829d6d3cc6bbfb5da277e5_tuned-evaluators-perceived-error-benchmark.png) · [文章出处](https://www.langchain.com/blog/introducing-langsmith-tuned-evaluators-starting-with-perceived-error)

### 符合条件才进入评估

Perceived Error 关注纠正、重复请求等线索，不等同于客观错误标签。至少两组人机消息加空闲期才触发，成功评估计费，跳过或失败不计费。

已检查正文媒体清单（静态图片 1 张、表格 0 处、视频嵌入 1 处），节选与上述重点相关的 1 张图片。嵌入视频未逐段核验，本文不据其内容作结论。

## 适用条件与局限

发布条件见摘要。正文未给出完整样本构成，不能把宣传中的“每段对话”理解为无条件全覆盖。

## 怎样理解与应用（AI 解读）

**AI 解读：**先把标记为错误的对话抽样复核，再把真正的业务失败加入回归集。用户反复提问可作为线索，但不应直接等同于退款、预约等业务失败。

## 变更记录

- 2026-09-10：首次收录，读取正文、核对发布日期与署名，整理中文摘要与重点解读。
- 2026-09-13：补齐出处与摘要复核，说明触发条件、延迟、适用套餐及公司基准范围。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
