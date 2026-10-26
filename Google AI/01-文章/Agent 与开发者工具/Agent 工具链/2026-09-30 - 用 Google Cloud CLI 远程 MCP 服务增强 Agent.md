---
type: article
source: "https://cloud.google.com/blog/products/ai-machine-learning/google-cloud-cli-remote-mcp-server-in-preview/"
source_aliases: []
original_title: "Empower your agents with the Google Cloud CLI remote MCP server"
authors: ["Prosper Nwankpa", "Adam Hwang"]
authors_source: "原文署名"
published: "2026-09-30"
published_source: "原文页首"
published_evidence: "https://cloud.google.com/blog/products/ai-machine-learning/google-cloud-cli-remote-mcp-server-in-preview/；正文标题与日期"
collected: "2026-10-11T10:35:34+08:00"
updated: "2026-10-12T10:56:46+08:00"
last_checked: "2026-10-12T10:56:46+08:00"
category: "Agent 与开发者工具/Agent 工具链"
source_section: "Google Cloud Blog · AI & Machine Learning"
tags: ["Google Cloud", "MCP", "Agent", "gcloud", "BigQuery"]
status: "saved"
detail_status: "completed"
note_depth: "中文摘要与重点图文解读"
---

# 用 Google Cloud CLI 远程 MCP 服务增强 Agent

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-%E7%AE%A1%E7%90%86/%E6%94%B6%E5%BD%95%E6%B8%85%E5%8D%95.md#agent-%E5%B7%A5%E5%85%B7%E9%93%BE)

> [原文链接](https://cloud.google.com/blog/products/ai-machine-learning/google-cloud-cli-remote-mcp-server-in-preview/) · 原题：Empower your agents with the Google Cloud CLI remote MCP server · 发布日期：2026-09-30 · 作者：Prosper Nwankpa、Adam Hwang · 来源：Google Cloud Blog · AI & Machine Learning

## 摘要

Google Cloud 将 gcloud 与 bq 命令封装成公共预览版远程 MCP 服务，让 Agent 调用两个工具管理云资源和 BigQuery 作业。命令在云端隔离环境中按调用者的身份、IAM 权限和组织策略执行，可配置 Model Armor 与数据访问审计日志。该设计减少 Agent 本地维护 CLI 的工作；服务本身不额外收费，创建的云资源和适用数据传输仍计费，本次未接入或执行命令。

## 重点图文解读

### CLI 能力作为远程工具

服务用 run_gcloud_command 和 run_bq_command 封装云管理与 BigQuery 命令，减少 Agent 运行环境安装和维护 CLI 的需要。

### 调用者权限与日志诊断

执行仍受调用者身份、IAM 和组织策略约束；Model Armor 与数据访问日志可配置。第一段演示展示查询错误日志并依据工具返回解释连接超时。

图示：调用者权限与日志诊断

*原始 GIF 演示从自然语言请求到 gcloud 日志查询及解释。仅抽查六个时点帧，未逐帧观看或重放命令。* [原图](https://storage.googleapis.com/gweb-cloudblog-publish/original_images/1_IPA9ALa.gif) · [原文](https://cloud.google.com/blog/products/ai-machine-learning/google-cloud-cli-remote-mcp-server-in-preview/)

### BigQuery 工作流与预览条件

第二段演示设置定时查询并检查作业运行；服务为公共预览，使用前需要启用 Cloud CLI Execution API、授予角色并完成认证。

图示：BigQuery 工作流与预览条件

*原始 GIF 展示设置查询和检查作业；示例规模不能用作生产性能基准。抽查六个时点帧，未执行操作。* [原图](https://storage.googleapis.com/gweb-cloudblog-publish/original_images/2_JA5HWbH.gif) · [原文](https://cloud.google.com/blog/products/ai-machine-learning/google-cloud-cli-remote-mcp-server-in-preview/)

## 适用条件与局限

- 服务本身没有额外收费，所用云资源和适用传输费用仍计费，不能解释为零成本。
- 命令具有读写能力，实际操作范围取决于身份和权限；本次没有接入服务。

## 怎样理解与应用（AI 解读）

可先选只读日志查询测试工具输出与审计记录；随后若要开放修改资源的命令，应分别验证目标项目、角色和允许动作，避免把能运行 CLI 当作所有变更都已授权。

## 变更记录

- 2026-10-11：首次收录，完成正文读取、摘要双重核验、图片保存及链接检查。
- 2026-10-12：旧文深化，补齐关键图文、具体局限与 AI 解读，摘要独立复核通过；本次建立来源正文核验基线，未声称原文更新。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
