---
type: article
source: https://www.langchain.com/blog/langsmith-custom-apps
source_aliases: []
original_title: 'Introducing LangSmith Custom Apps: Build custom interfaces around
  your agent data'
authors:
- Sam Crowder
- Bonnie Pecevich
authors_source: 原文页首署名
published: '2026-09-24'
published_source: 原文页首及官方博客列表
published_evidence: September 24, 2026
collected: '2026-09-25'
updated: '2026-09-29'
last_checked: '2026-09-29'
category: 工程与Agent/评估与可靠性
source_section: LangChain 官方博客技术发布
tags:
- lc
- AI
- 评估与可靠性
note_depth: 中文摘要与重点图文解读
detail_status: completed
translation_status: not_requested
---

# 为标注和实验审查定制 LangSmith 界面

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E8%AF%84%E4%BC%B0%E4%B8%8E%E5%8F%AF%E9%9D%A0%E6%80%A7)

> [原文：Introducing LangSmith Custom Apps: Build custom interfaces around your agent data](https://www.langchain.com/blog/langsmith-custom-apps) · 发布于 2026-09-24 · 收录于 2026-09-25  
> 作者：Sam Crowder、Bonnie Pecevich · LangChain 官方博客技术发布  
> 中文摘要与重点图文节选；示例和实验未运行，内嵌演示视频未逐段观看。

## 摘要

LangSmith Custom Apps 让团队用聊天或代码围绕调用轨迹、实验和标注数据构建共享审核界面，由平台处理托管、认证与权限。界面默认使用文章称已开源的 Macaw 设计系统，也可自定义外观；Chime 引述展示了审核、编辑后将结果加入数据集的流程，但只是客户定性反馈，未给出效率实测。发布说明仅面向 Plus 与 Enterprise：前者每组织包含一个应用，后者数量不限，均含聊天生成入口。

## 重点图文解读

### 把重复审查做成共享界面

Custom Apps 让自定义界面在 LangSmith 工作区内运行，继续连接原有数据。入口包括聊天生成与模板开发，平台承担发布后的托管、认证和权限工作。

![左侧用 LangSmith Chat 描述需求，右侧预览自定义成本界面；图中费用与身份数量是演示数据，不是产品定价。](../../../98-%E9%99%84%E4%BB%B6/%E5%8E%9F%E6%96%87%E9%85%8D%E5%9B%BE/c2066fcdfe67b1d3a520.png)

*左侧用 LangSmith Chat 描述需求，右侧预览自定义成本界面；图中费用与身份数量是演示数据，不是产品定价。* [原图](<https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6ab3f9503d7414691994f24d_Custom%20Apps%20blog.png>) · [文章出处](https://www.langchain.com/blog/langsmith-custom-apps)

### 按审核者和问题组织信息

专家标注可显示请求、输出、必要背景与评分标准；工程审查则保留工具调用等细节。

原文新增的 Chime 客户引述描述了一个具体流程：审核者选择队列、评估并编辑输出，再把结果加入数据集。这里是客户对跨工具审核转入共享界面的定性反馈，没有给出节省工时或质量提升的量化对照。

实验对比可按客户群或失败类型切分，并展示代表案例，避免每次重新制作静态分析。

### 用默认设计系统保持一致，也可定制外观

原文新增说明称，Custom Apps 默认使用 LangSmith 的 Macaw 设计系统，以组件和图标保持界面一致；也可通过聊天或编码 Agent 改成自己的外观。文章宣布将 [Macaw 开源](https://github.com/langchain-ai/macaw-design-system)。开源的是设计系统，不能据此推断托管的 Custom Apps 服务免费或不受套餐限制；本次未检查仓库实现或运行示例。

### 明确应用数与套餐限制

Plus 每个组织包含一个 Custom App，Enterprise 数量不限，均含聊天体验。原文列举周期性轨迹审查等用途，但没有提供质量改善、节省时间或权限边界的独立实测。

**媒体范围：**正文1张静态图均已读取并采用；0张 HTML 表格已核对，按相关重点节选。正文另有1段嵌入视频，未逐段核验，不据视频补充结论。未发现其他正文 SVG、画布或独立视频元素。

## 适用条件与局限

使用条件按发布日套餐说明理解。平台托管权限不等于任意生成界面都能正确展示或筛选数据，具体审核标准与展示内容仍需团队核查。本文未逐项验证生成应用的行为。

## 怎样理解与应用（AI 解读）

**AI 解读：**可从一个重复问题开始，例如模型切换后哪类案例退步：固定分组字段、展示前后输出，并要求审核者说明原因。比起先堆看板，这样更容易检验界面是否帮助决策。本次未创建或发布应用。

## 变更记录

- 2026-09-25：首次收录9月24日发布的文章；摘要独立事实与可读性复核通过，采用1张原图，保留发布条件及证据边界。
- 2026-09-29：回查确认原文新增 Chime 审核案例及 Macaw 设计系统开源说明；更新摘要和重点，摘要独立事实及可读性复核通过。原文仍标注9月24日，首次收录9月25日保留；站点地图lastmod为9月28日，具体正文修改时刻未核实。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
