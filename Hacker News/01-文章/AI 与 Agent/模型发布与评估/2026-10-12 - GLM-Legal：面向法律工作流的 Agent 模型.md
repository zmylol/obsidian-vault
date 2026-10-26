---
type: article
title: "GLM-Legal：面向法律工作流的 Agent 模型"
source: "Hacker News"
published: "2026-10-12"
collected: "2026-10-19T11:04:44.139+08:00"
category: "AI 与 Agent/模型发布与评估"
original_title: "GLM-Legal"
hn_item_id: 50058507
hn_author: "ilreb"
hn_submitted_at: "2026-10-12T16:11:45Z"
hn_score: 675
hn_comments: 370
hn_item_url: "https://news.ycombinator.com/item?id=50058507"
original_url: "https://z.ai/blog/glm-legal"
---

# GLM-Legal：面向法律工作流的 Agent 模型

<!-- AUTO:BEGIN -->
## 摘要

GLM-Legal 是面向复杂法律任务和真实工作流的 Agent 模型。官方报告 Harvey LAB 的 all-pass 为 19.2%，比基础模型高 12.5 个百分点，并称 LegalBench 与 PLawBench 达到前沿闭源模型水平；文章还展示了合同、证据分析和东南亚隐私合规案例。

## 重点解读

- 训练以轻量 GLM-5.3-Flash 为基础，采用专业中训与高效后训，在数万真实法律环境中让模型与 Harness 协同优化。
- Harvey LAB 覆盖 24 个执业领域，官方称 Vals 进行了独立评估；LegalBench 和 PLawBench 的结果被用来支持其法律推理能力主张。
- AutoClaw 合同示例识别出 60→30 天通知、严重违约即时终止和最长 90 天交接等条款；证据示例比较 60% 进度报告与 41% 内部快照并指出隐瞒风险。
- 隐私合规示例覆盖新加坡、马来西亚和印度尼西亚，强调多语言声明、非必要分析/广告 opt-in、同意记录及跨境供应商映射。

## HN 讨论

HN 讨论一方面希望把基准拆成通用任务与新颖任务，并分享用 LLM 做合同初审、再由律师复核的经验；另一方面担心初级法律工作自动化后，下一代从业者失去练习和积累判断的机会。

## 局限与待核验

正文可访问性在本轮通过浏览器恢复；基准数字仍来自发布方及其引用的评估，未独立复现，也不能替代法律专业审查。

## 原文链接

- [Hacker News 条目](https://news.ycombinator.com/item?id=50058507)
- [原文](https://z.ai/blog/glm-legal)
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
