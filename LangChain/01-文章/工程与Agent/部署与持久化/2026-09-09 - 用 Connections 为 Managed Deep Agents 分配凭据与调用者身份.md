---
type: article
source: https://www.langchain.com/blog/connections-managed-credentials-and-per-caller-identity-for-managed-deep-agents
source_aliases: []
original_title: 'Connections: Managed credentials and per-caller identity for Managed
  Deep Agents'
authors:
- Victor Moreira
authors_source: 原文页首署名
published: '2026-09-09'
published_source: 原文页首或官方博客列表
published_evidence: September 9, 2026
collected: '2026-09-10'
updated: '2026-09-14'
last_checked: '2026-10-04'
category: 工程与Agent/部署与持久化
source_section: LangChain 官方博客署名文章
tags:
- lc
- AI
- 部署与持久化
note_depth: 中文摘要与重点文字解读
detail_status: completed
translation_status: not_requested
---

# 用 Connections 为 Managed Deep Agents 分配凭据与调用者身份

<!-- AUTO:BEGIN -->
[← 首页](../../../00-首页.md) · [本分类文章](../../../99-管理/收录清单.md#%E9%83%A8%E7%BD%B2%E4%B8%8E%E6%8C%81%E4%B9%85%E5%8C%96)

> [原文：Connections: Managed credentials and per-caller identity for Managed Deep Agents](https://www.langchain.com/blog/connections-managed-credentials-and-per-caller-identity-for-managed-deep-agents) · 发布于 2026-09-09 · 收录于 2026-09-10  
> 作者：Victor Moreira · LangChain 官方博客  
> 中文摘要与重点图文节选；示例代码未执行，外链论文与实验报告未单独复现。产品能力按文章发布日期理解。

## 摘要

Managed Deep Agents 的 Connections 把凭据集中保存在 LangSmith 工作区，工具运行时可读取部署共享的凭据，或按实际调用者解析个人授权。这样，同一部署能根据各人的访问权查询资源，并以请求者身份创建问题，而不必让所有操作都使用同一服务账号。缺少用户授权或令牌过期时，运行会暂停并请求授权；共享密钥轮换也不必把新值打进代码包。发布时功能仍属预发布版，凭据归属在创建时确定，部署共享连接须先有部署。

## 重点文字解读

### 归属与类型分别建模

Agent-owned 或 user-owned 决定使用谁的身份；secret 或 OAuth 决定凭据形式。归属在创建时确定，connections.get() 不会临时改变所有权。共享搜索 key 的轮换可以独立于部署代码。

### 缺少用户授权时暂停运行

用户未授权或 token 过期时，读取连接会暂停并请求 grant；跨多个服务的缺失授权可合并为一次 interrupt。已授权后，同一部署会按不同调用者的访问权查询资源、以其身份执行操作。

图示：同一连接读取接口分为共享凭据、已有用户授权、缺少用户授权三条路径；最后一条暂停等待授权，不把共享账号当作个人身份。

*同一连接读取接口分为共享凭据、已有用户授权、缺少用户授权三条路径；最后一条暂停等待授权，不把共享账号当作个人身份。* [原图](https://cdn.prod.website-files.com/65c81e88c254bb0f97633a71/6aa732235e1e0993e93b1aee_connections-runtime.png) · [文章出处](https://www.langchain.com/blog/connections-managed-credentials-and-per-caller-identity-for-managed-deep-agents)

### 接入细节决定权限边界

GitHub 示例中的 --scope 会替换默认 scope，而非追加；支持元数据发现的 MCP 服务可自动注册 OAuth 客户端。发布时功能处于 prerelease，Agent-owned 连接需要先有部署；本地开发与部署环境的凭据解析方式也不同。

已检查正文媒体清单（静态图片 2 张、表格 0 处、视频嵌入 0 处），节选与上述重点相关的 1 张图片。

## 适用条件与局限

原文是产品机制与示例，版本由安装的 prerelease 决定；服务目录和权限不能由示例推定为当前全部支持范围。

## 怎样理解与应用（AI 解读）

为共享检索和个人写入分别建连接，并测试两个用户看到的资源和操作署名是否不同；让轮换凭据和发布工具代码成为可分别验证的步骤。

## 变更记录

- 2026-09-10：首次收录，读取正文、核对发布日期与署名，整理中文摘要与重点解读。
- 2026-09-11：补上可见出处、授权暂停与 scope 边界，替换概览图为运行分支图。
- 2026-09-14：按现行摘要门槛补全主要机制、结果与必要条件，完成独立事实和可读性复核；同步摘要卡片。 更新官网运行分支配图及出处，旧图留存。
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的理解与实践

- 我的理解：
- 想验证的问题：
- 实践记录：
<!-- USER:END -->
