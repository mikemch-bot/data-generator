# data-generator
这是一个 OI 数据生成器

# 更新内容
 - 6-19. 开始记录更新内容
 - 6-19. 完善了 Graygoo 提供的生成连通的 DAG 的函数。

# 数据生成器使用说明
## Windows
1. 安装 WSL 然后按照 Linux 的步骤执行。

## Linux
### 初始化
1. 输入命令 ```g++ -v```，如果报错，则输入命令 ```sudo apt-get install g++``` 以安装 g++。
2. 输入命令 ```git clone https://github.com/mikemch-bot/data-generator.git``` 以下载代码。

### 创建题目的数据
4. 进入目录 gendatahere 并输入命令 ```sh createnew.sh```
5. 在 ```Enter problem name: ``` 后输入题目名称。
6. 进入题目名称的子目录。
7. 修改 Solution.cpp 和 iG.cpp，分别写 std 和数据生成器。
8. 输入命令 ```make```，然后输入命令 ```./generator```。

# 库使用说明

## 图论库

1. iG.cpp 里面已有的语句 ```#include"lib/tools.h"``` 是用来调用该生成器的各种库的。
2. 在 iG.cpp 中使用 ```generateDAG(n,m)``` 即可生成一张 $n$ 个点 $m$ 条边的有向无环图（DAG）。
