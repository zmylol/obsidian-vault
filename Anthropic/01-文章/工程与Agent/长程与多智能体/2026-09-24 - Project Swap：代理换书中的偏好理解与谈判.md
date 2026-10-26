---
type: article
source: https://www.anthropic.com/research/project-swap
source_aliases: []
original_title: 'Project Swap: What happens when agents trade for us?'
published: '2026-09-24'
published_source: official_article_body
published_evidence: 官方 Research 列表与正文明确 Sep 24, 2026。
collected: '2026-09-25'
updated: '2026-09-25'
last_checked: '2026-10-04'
category: 工程与Agent/长程与多智能体
source_section: Research
tags:
- agents
- multi-agent
- economics
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
quality_evidence:
  checked_at: '2026-09-25T09:25:15+08:00'
  source_read: true
  source_read_scope: 官方完整正文及同页图表说明；关联代码、论文和附件未单独复现或精读。
  summary_and_interpretation: true
  evidence_and_limits: true
  figure_status: verified_key_figures
  figure_evidence: 实际查看官网原始图 1、4、5，核对实验流程、80 场重跑的人类排序差距分解及 Claude 排序的模型比较；已区分两种纵轴、插补条件和真实活动与模拟，按原文顺序置于讨论旁。原图
    4 的零点英文与正文最末位定义不一致，笔记显式保留差异，不擅自解释为原有书。
  standard: summary-key-figures-v1
  summary_review:
    reviewer: anthropic_summary_review_sep16
    source_sha256: 3dbf51d8f0834d6e3e6acf0191f82a0be31521b3f9fc53b935612ac774bcce17
    evidence:
    - location: c4f6b71acc4936ff.txt:14、23–29（实验设计）
      support: 201 名员工来自六地本地书池；访谈后生成代理排序，人的排序不向代理公开，代理进行受控换书。
    - location: c4f6b71acc4936ff.txt:35–38（偏好表征）
      support: 图 3 汇总 188 名提交排序者；61% 指两本书的相对次序一致，随机基线为 50%。
    - location: c4f6b71acc4936ff.txt:43–50、139–140（效率分解与脚注）
      support: 人的评分下最优分配 0.89、按 Claude 排序求最优再评分 0.60、分散交易 0.55；图 4 使用 80 场中性指令重跑和未排序图书插补，约
        85%/15% 是差距分解。模型优势在人的排序下明显缩小。
    - location: c4f6b71acc4936ff.txt:72–75、83（局限与交付）
      support: 员工样本、仅合作型 Claude 和固定市场规则限制外推；部分人没有带书，最终并非所有参与者都收到实物。
    correction: 明确真实活动与重跑、书对一致率与效率指标，并保留插补评分和样本局限；把“书对仅有 61% 一致”改成两本书先后次序的一致率，去除“仅有”的倾向性语气，使指标能独立理解。；明确
      85% 的分母是相对最优分配的效率差距，并表述为研究在 80 场重跑及插补评分下的分解。；补充部分实物未交付，避免将代理达成分配等同全员实际完成换书。
    unresolved: []
    standard: standalone-summary-v1
    reviewed_at: '2026-09-25T09:25:15+08:00'
    method: Independent reviewer read full source and checked final summary claim
      by claim, then standalone readability; author separately inspected selected
      figures and performed final card read
    source_check: passed
    readability_check: passed
    status: completed
  last_content_review_at: '2026-09-25T09:25:15+08:00'
  last_figure_review_at: '2026-09-25T09:25:15+08:00'
  last_figure_review:
    at: '2026-09-25T09:25:15+08:00'
    method: local_original_and_official_media_comparison
    details: 实际查看官网原始图 1、4、5，核对实验流程、80 场重跑的人类排序差距分解及 Claude 排序的模型比较；已区分两种纵轴、插补条件和真实活动与模拟，按原文顺序置于讨论旁。原图
      4 的零点英文与正文最末位定义不一致，笔记显式保留差异，不擅自解释为原有书。
enriched_at: '2026-09-25'
---

# Project Swap：代理换书中的偏好理解与谈判

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E9%95%BF%E7%A8%8B%E4%B8%8E%E5%A4%9A%E6%99%BA%E8%83%BD%E4%BD%93)

> [官方原文](https://www.anthropic.com/research/project-swap) · Project Swap: What happens when agents trade for us? · 发布于 2026-09-24
> 中文摘要与重点图文解读，关键内容与配图节选；关联论文、代码与附件未单独精读或复现。

## 摘要

Anthropic 让 201 名员工的代理在受控市场中换书，再模拟重跑比较交易表现。Claude 推断的排序与 188 名参与者自行排序在两本书先后次序上的一致率为 61%。在 80 场中性指令重跑、并对未排序图书插补评分后，研究将相对最优分配的效率差距约 85% 归于偏好表征，15% 归于分散谈判。更强模型的优势主要体现在 Claude 生成的排序上，不能直接等同人类获益。员工样本、低风险场景和部分实物未交付限制了外推。

## 重点图文解读

### 先理解人，再进入市场

参与者先向代理介绍自己的书和阅读兴趣。研究另外让 188 人给一组书排序，作为代理看不到的比较依据；主要分析排除了人数过少的都柏林。真实活动使用 Opus 4.8，后续重跑用于比较模型与指令，并与集中式分配基准比较。

![流程图从偏好访谈进入集中式配置或代理间协商，再回到书籍交付；集中式方案用于计算比较基准，并非另办了一场真实换书活动。](../../../98-附件/原文配图/85290875f700e910c669.webp)

*流程图从偏好访谈进入集中式配置或代理间协商，再回到书籍交付；集中式方案用于计算比较基准，并非另办了一场真实换书活动。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/d2a8ed9bb12fe7546800f778523c23d0ad504f42-1888x2000.webp) · [文章出处](https://www.anthropic.com/research/project-swap)

### 偏好表征成为主要损失来源

Claude 推断的书对顺序与人类排序一致率为 61%，随机比较为 50%。在中性指令的 80 场重跑中，按人的排序计算，理想配置约为 0.89；改用代理推断的偏好寻找最优配置后降至约 0.60，再经过分散谈判降至约 0.55。85%／15% 分解来自这组差距，不是交易成功率。

![纵轴为按参与者自己的书籍排序计算的归一化得分，越高越好。左侧从最优配置 0.89 减去偏好表征约 0.29、谈判约 0.05，得到重跑结果 0.55；基于 80 场中性指令重跑，误差线为 95% 区间，包含未排序书籍的插补。](../../../98-附件/原文配图/8d7982da0526b725028a.png)

*纵轴为按参与者自己的书籍排序计算的归一化得分，越高越好。左侧从最优配置 0.89 减去偏好表征约 0.29、谈判约 0.05，得到重跑结果 0.55；基于 80 场中性指令重跑，误差线为 95% 区间，包含未排序书籍的插补。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/f96f6de0c3ca2fc417ce8f3363370ba359e010ec-1920x1091.png) · [文章出处](https://www.anthropic.com/research/project-swap)

图文标注差异：正文以最末位书籍作为零分，图轴的零点英文写为收到的书，二者不一致；这里采用正文的排序定义。

### 更会谈判不保证更懂主人

后续模型比较改用 Claude 的排序计分：混合市场中较强模型通常占优，但单一模型市场并非越新越好。两种固定的竞争性／亲社会指令造成的差异，小于部分模型差异；不能推广成提示词在所有场景都不重要。

![纵轴按 Claude 推断的偏好计分，越高越好，口径不同于上一图。左侧比较单一模型市场，右侧比较混合市场；彩点为各模型，黑菱形为整场，误差线为 95% 区间，不能据此直接认定人的福利提升。](../../../98-附件/原文配图/17120d09331aed94b644.png)

*纵轴按 Claude 推断的偏好计分，越高越好，口径不同于上一图。左侧比较单一模型市场，右侧比较混合市场；彩点为各模型，黑菱形为整场，误差线为 95% 区间，不能据此直接认定人的福利提升。* [原图](https://www-cdn.anthropic.com/images/4zrzovbb/website/3a3dd224cbba0c1e0e8b5a1083c6da2d57c93cbf-1920x1133.png) · [文章出处](https://www.anthropic.com/research/project-swap)

### 成交之后仍有交付和市场规则问题

代理会披露偏好、组织多方换书，也可能接受无法最终兑现的交易。作者讨论日志可观察性、身份与通信规则；这些是制度设计问题，交易消息本身不等于物品已交付。

## 适用条件与局限

人类只排了部分书，评分将顺序转为线性分数，并估算其余书籍位置。参与者是自选员工，交易风险较低，未系统测试恶意对手；主文与同页脚注已读，外链附录未独立精读。

## 怎样理解与应用（AI 解读）

委托代理之前，可先让它在少量具体选择中预测自己的偏好，再纠正误解。验收同时保存“我真正想要什么”“代理优化了什么”和“最终实际交付什么”，尤其不要把代理自己的评分替代人的评价。

## 变更记录

- 2026-09-25：首次完整审读官方正文，经独立摘要复核后收录，核对配图与分类。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
