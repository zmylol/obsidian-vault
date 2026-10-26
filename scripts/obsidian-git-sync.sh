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

git add -A
if ! git diff --cached --quiet; then
  git commit -m "chore: sync Obsidian vault $(date +%F)"
fi

if git remote get-url origin >/dev/null 2>&1; then
  git push origin "$BRANCH"
fi
