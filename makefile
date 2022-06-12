compiler=g++
exec=generator
source=runner-linux.cpp lib/*.cpp

$(exec): $(source):
	$(compiler) -o $(exec) $(source)
