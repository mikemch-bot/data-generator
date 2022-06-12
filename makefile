compiler=g++
exec=generator
source=runner-linux.cpp lib/*.cpp

compgenerator:$(source)
	$(compiler) -o $(exec) $(source)
