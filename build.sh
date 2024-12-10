#！/bin/bash

#删除build目录
rm -rf build

# 提示完成
echo "build文件已清除"

#删除build目录
rm -rf bin

# 提示完成
echo "bin文件已清除"

mkdir -p build
cd build
cmake ..
make