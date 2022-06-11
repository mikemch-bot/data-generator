echo This is the runner for linux.

echo Please make sure you have g++ installed.

echo Compiling
g++ -o Solution Solution.cpp
g++ -o iG iG.cpp
g++ -o runner-linux runner-linux.cpp

echo Running
./runner-linux
