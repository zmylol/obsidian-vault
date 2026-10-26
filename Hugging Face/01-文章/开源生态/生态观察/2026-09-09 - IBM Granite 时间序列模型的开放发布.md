---
type: article
source: "https://huggingface.co/blog/ibm-research/ibm-releases-sota-granite-time-series"
original_title: "IBM releases SOTA Granite Time Series PatchTST-FM-r2 model with commercial-friendly license"
authors: [Roman Vaculin, Wesley M. Gifford, Jiri Navratil, Chandra Reddy, Ayhan Sebin]
published: 2026-09-09
category: "开源生态/生态观察"
note_depth: 中文摘要与重点文字解读
detail_status: pending
source_aliases: []
authors_source: "https://huggingface.co/blog/ibm-research/ibm-releases-sota-granite-time-series"
published_source: "https://huggingface.co/blog/ibm-research/ibm-releases-sota-granite-time-series"
published_evidence: "页首 Published September 9, 2026"
collected: 2026-09-10
updated: "2026-09-13"
last_checked: "2026-09-17"
source_section: "IBM Research 企业文章"
---

# IBM Granite 时间序列模型的开放发布

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#生态观察)

> [原文](https://huggingface.co/blog/ibm-research/ibm-releases-sota-granite-time-series) · IBM Research 企业文章 · 2026-09-09。原题与五位作者见属性。正文已读；代码未运行、论文未精读。

## 摘要

IBM 发布约 3.85 亿参数的 PatchTST-FM-r2，用结合注意力与时序卷积的网络和重叠分块，支持无需任务专门训练的时间序列预测，并输出预测区间所需的分位数。IBM 报告，截至 2026 年 9 月 8 日，该模型在 GIFT-Eval 无测试泄漏、可复现的零样本组中，两项预测误差指标 CRPS、MASE 均列第二，在该组宽松许可模型中领先。权重与复现代码已开放，可选择 Apache 2.0 或 OpenMDW 1.0 许可；榜单成绩不代表任意业务序列都能达到同样效果。

## 重点文字解读

### 先辨别评测集合

作者按可复现、无测试泄漏的零样本模型比较，报告截至 9 月 8 日排名第二。不同训练条件的榜单不可混用。

图示：零样本 CRPS

图 1：CRPS 越低越好；图内标注 2026-08-31，r2 为 0.4672，正文四舍五入为 0.467。保留图文日期差异，不把图当作实时榜单。[原图](https://cdn-uploads.huggingface.co/production/uploads/64b01b5252349201f972ba17/EHyv5DrZggfNQPIZzZ-Lk.png) · [文章](https://huggingface.co/blog/ibm-research/ibm-releases-sota-granite-time-series)

### 卷积和注意力分工

Conformer 让卷积处理局部结构、注意力处理长距离关系；重叠 patch 缓和预测边界。

图示：架构变化

图 5：左侧 20 层 Transformer，右侧 30 层 Conformer；新增卷积与半步前馈结构。[原图](https://cdn-uploads.huggingface.co/production/uploads/64b01b5252349201f972ba17/gYPoFfbdOqaT9nZmABON1.png) · [文章](https://huggingface.co/blog/ibm-research/ibm-releases-sota-granite-time-series)

### 再检查复现入口

文章披露预训练来源并提供 ETTh1 示例：512 步历史预测 64 步，输出分位数。许可证按发布方说明记录为 Apache-2.0 / OpenMDW-1.0，未另行作法律分析。

## 适用条件与局限

上述结果是作者报告，未独立复现。本文选择六张正文图片中的两张；其余图见原文，未将评测成绩当成部署承诺。现有“生态观察”分类与架构主体存在边界偏差，已登记待调整。

## 怎样理解与应用（AI 解读）

可先在同一时间切分上比较季节性基线和模型的区间覆盖率，再决定是否采用。均值误差较小不保证预测区间可靠，这是待验证建议。

## 变更记录

- 2026-09-13：按新门槛补写并复核摘要，补明主要结果及必要条件；不是今日新增。

- 2026-09-10：首次收录。
- 2026-09-11：补齐两张原图、图文日期差异和验证边界；分类待核定。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
