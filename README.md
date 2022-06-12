# data-generator
这是一个 OI 数据生成器

# 数据生成器使用说明
## Windows
1. 确认你有一个 IDE（例如 Dev-C++）或编译器。
1. 将 Solution.cpp 改为程序的正确解法，使用标准输入输出。
2. 将 iG.cpp 改为数据生成器，使用标准输入输出。
3. 最后使用 IDE（例如 Dev-C++）或编译器（例如 MinGW）编译运行这两个程序和 runner-windows.cpp，然后运行 runner-windows.exe 即可。

## Linux
1. 确认已经安装 g++（输入 ```g++ -v``` 看看是否报错）
1. 将 Solution.cpp 改为程序的正确解法，使用标准输入输出。
2. 将 iG.cpp 改为数据生成器，使用标准输入输出。
3. 输入命令 ```make compgenerator```，最终运行生成的 generator 即可造数据。

# 库使用说明

## 图论库

1. iG.cpp 里面已有的语句 ```#include"lib/tools.h"``` 是用来调用该生成器的各种库的。
2. 在 iG.cpp 中使用 ```generateDAG(n,m)``` 即可生成一张 $n$ 个点 $m$ 条边的有向无环图（DAG）。
