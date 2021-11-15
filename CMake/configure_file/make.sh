#!/bin/sh

# 删除一些产生的文件
rm -rf CMakeFiles
rm Makefile
rm build.h
rm TEST
rm CMakeCache.txt
rm cmake_install.cmake

cmake ./
make

./TEST
