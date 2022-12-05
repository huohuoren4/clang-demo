#!/bin/bash
# -*- coding:utf-8 -*-
# Cmake 调试文件: `bash debug.sh`

# 创建编译目录
dir="build"
if [[ !(-e $dir )]] ; then
    mkdir $dir 
else
    rm -rf $dir
    mkdir $dir
fi

# cmake编译文件
cd build && cmake .. && cmake --build .
if [[ $? != 0 ]]; then
   echo -e "\033[31mError:编译出错了, 程序异常退出 (~_~)\033[0m"
   exit 1
fi
echo -e "\033[32m成功生成可执行文件, 位于目录./${dir}下 (^_^)\033[0m"
cd ..

# 执行文件
echo -e "\033[32m开始执行指令: ./${dir}/$1 (^_^)\033[0m"
./${dir}/$1


