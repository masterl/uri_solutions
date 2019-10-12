#!/bin/bash

readonly PROJECT_ROOT=$( cd "$( dirname "$0" )" && pwd )

readonly TARGET_FILE="$PROJECT_ROOT/$1"

readonly MODE="$2"

function main()
{
  while true; do
      echo "$TARGET_FILE" |
      entr -d bash entr_script.sh "$PROJECT_ROOT" "$TARGET_FILE" "$MODE"
  done
}

main "$@"
