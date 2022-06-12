compiler=g++
exec=generator
source=runner-linux.cpp

$(exec): $(source):
	$(compiler) -o $(exec) $(source)
