---
type: article
source: https://www.langchain.com/blog/agents-that-can-pay-with-stripe-link
source_aliases: []
original_title: "Agents That Can Pay with Stripe Link"
authors:
- Srimanth Tangedipalli
- Sydney Runkle
- Nathan Drezner
authors_source: 原文页首署名
published: '2026-10-08'
published_source: 原文页首及官方博客列表
published_evidence: October 8, 2026
collected: '2026-10-09'
updated: '2026-10-09'
last_checked: '2026-10-09'
category: 工程与Agent/部署与持久化
source_section: LangChain 官方博客产品与工程说明
tags:
- lc
- AI
- 部署与持久化
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
---

# 让 Agent 通过 Link 与 MPP 在审批后支付

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#部署与持久化)

> [原文：Agents That Can Pay with Stripe Link](https://www.langchain.com/blog/agents-that-can-pay-with-stripe-link) · 发布于 2026-10-08 · 收录于 2026-10-09  
> 作者：Srimanth Tangedipalli, Sydney Runkle, Nathan Drezner · LangChain 官方博客产品与工程说明  
> 中文摘要与重点图文节选；示例代码未执行，企业案例和产品能力按文章发布日期理解。

## 摘要

LangChain 用运行在 Managed Deep Agents 与 Slack 上的 Restock 示例展示 Agent 如何在两次人工批准后完成支付：Zinc 负责商品搜索和下单，Machine Payments Protocol 通过 402 Payment Required 交换支付请求，Link 保存用户钱包并单独确认付款。模型不接触支付秘密，用户先审阅购物车和预算，工具再在沙箱中使用一次性共享支付令牌并校验订单与新鲜审批。示例实测订单支付22.18美元并退回0.82美元，但仅支持美国、美元和单办公室部署，属于样例而非普遍支付能力。

## 重点图文解读

### 运行机制与证据范围

原文给出产品架构和案例流程；以下只保留可以由正文直接支持的机制、指标和限制。

![Restock 从 Slack 请求到确认订单需要两次批准：先在 Slack 审阅购物车和金额，再在 Link 钱包确认支付；金额示例来自文章。](../../../98-附件/原文配图/e5eb1d3620505cc4dc16.png)

*Restock 从 Slack 请求到确认订单需要两次批准：先在 Slack 审阅购物车和金额，再在 Link 钱包确认支付；金额示例来自文章。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6ac7183293d25dfd3da1d336_restock-payment-flow-v2.png) · [文章出处](https://www.langchain.com/blog/agents-that-can-pay-with-stripe-link)

### 适用方式与限制

Restock 把预算上限、审批和支付令牌放在模型无法直接修改的代码与连接中；示例支持美国、美元和单办公室部署，真实支付仍需用户审批和实际连接。

## 适用条件与局限

MPP 覆盖范围决定可购买的商家，Link 钱包、Zinc API、Slack 和托管沙箱都需要额外配置；价格与退款数字是文章示例和一次端到端演示，不是稳定成本承诺。

## 怎样理解与应用（AI 解读）

**AI 解读：**支付类 Agent 应把购物车、预算、审批、令牌和商户确认拆成不可由模型单独完成的步骤，并为每笔订单保留可追溯记录；本次未执行购买。

## 变更记录

- 2026-10-09：首次收录；完整读取正文，核对日期、作者和采用的原文配图；摘要完成事实与可读性双遍复核。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
