#!/bin/zsh

set -euo pipefail

REPO_ROOT="$(cd -- "$(dirname -- "$0")/.." && pwd)"
cd "$REPO_ROOT"

# Prevent overlapping launchd runs.
LOCK_DIR="$REPO_ROOT/.git/obsidian-sync.lock"
if ! mkdir "$LOCK_DIR" 2>/dev/null; then
  exit 0
fi
trap 'rmdir "$LOCK_DIR" 2>/dev/null || true' EXIT

BRANCH="$(git symbolic-ref --quiet --short HEAD || printf '%s' main)"

# Bring in commits made from another device before committing local changes.
if git remote get-url origin >/dev/null 2>&1; then
  git fetch origin "$BRANCH"
  if git show-ref --verify --quiet "refs/remotes/origin/$BRANCH"; then
    git pull --rebase --autostash origin "$BRANCH"
  fi
fi

# Keep the remote repository text-first even if an automation writes a file
# before .gitignore is refreshed.  The exclude rules also protect already
# tracked paths during the transition commit.
git add -A -- \
  . \
  ':(exclude)**/98-附件/**' \
  ':(exclude)**/附件/**' \
  ':(exclude)**/99-管理/.运行记录/**' \
  ':(exclude)**/99-管理/图片来源清单.*' \
  ':(exclude).obsidian/plugins/*/main.js' \
  ':(exclude).obsidian/plugins/*/*.css' \
  ':(exclude).obsidian/plugins/*/obsidian_askpass.sh'
if ! git diff --cached --quiet; then
  git commit -m "chore: sync Obsidian vault $(date +%F)"
fi

if git remote get-url origin >/dev/null 2>&1; then
  git push origin "$BRANCH"
fi
