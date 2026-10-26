---
type: "article"
title: "Virtual Oxide Labs：在单机中模拟整座 Oxide 机架"
source: "Hacker News"
published: "2026-10-14"
collected: "2026-10-15T11:08:09+08:00"
category: "系统与基础设施/虚拟化与测试"
original_title: "Virtual Oxide Labs: Emulating a Full Oxide Rack"
original_author: "Steve Karam"
hn_item_id: 50092423
hn_author: "tosh"
hn_submitted_at: "2026-10-14T18:21:14+00:00"
hn_score: 78
hn_comments: 8
hn_item_url: "https://news.ycombinator.com/item?id=50092423"
original_url: "https://oxide.computer/blog/voxel-labs"
normalized_original_url: "https://oxide.computer/blog/voxel-labs"
original_read_at: "2026-10-15T11:08:09+08:00"
original_read_status: "readable"
collection_window: "recent_24h"
---

# Virtual Oxide Labs：在单机中模拟整座 Oxide 机架

<!-- AUTO:BEGIN -->
## 摘要

Voxel 将 Oxide 机架组件放入单机虚拟实验室，尽量运行实际控制平面与固件，以测试网络、初始化和管理流程。它减少对稀缺实体机架的依赖，但仿真时间、硬件和信任材料与生产机架仍有差别。

## 重点解读

- 方案组合 Propolis、FRR、SoftNPU 与 SP/RoT 仿真，目标是尽量使用未经修改的生产软件。
- 可从源码或 TUF 包安装 Omicron，并保留可复用的 ZFS 镜像。
- 启动时建立网络、虚拟 sled 和微控制器，再走正式机架初始化流程。
- Cortex-M 仿真运行 Hubris，以指令计数推进时间、中断与通信，CLI 负责部署及访问各组件。

## HN 讨论

HN 评论聚焦小型 racklette、家庭实验室需求和旧硬件体验。作者回应该环境适合学习 Oxide，不一定适合作为日常 homelab 的替代方案。

## 局限与待核验

已读全文，未搭建或测量。96 GB 单机运行六个 sled、约十分钟启动等数字是作者经验；需要 Helios，PKI 来源和时序也不同于真实机架，不能视作硬件等价验证。

## 原文链接

- [Hacker News 条目](https://news.ycombinator.com/item?id=50092423)
- [原文](https://oxide.computer/blog/voxel-labs)
<!-- AUTO:END -->

<!-- USER:BEGIN -->
## 我的记录

<!-- 用户备注 -->
<!-- USER:END -->
