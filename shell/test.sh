#!/bin/bash
# -*- coding:utf-8 -*-

# 斐波那契数列
function fab(){
    if (( $1 <= 1 )); then
        echo 1
        return
    fi
    # 递归调用
    echo $[$(fab $[$1-1]) + $(fab $[$1-2])]
    return
}
echo "fab="$(fab $1)