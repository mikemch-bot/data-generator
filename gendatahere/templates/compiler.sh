for i in `ls *.cpp` 
do
	exec=$(basename $i .cpp)
	echo -e Compiling "\033[36m $i \033[0m" using command "\033[36m \"g++ -o $exec $i ../../../lib/*.cpp\" \033[0m"
	g++ -o $exec $i ../../../lib/*.cpp
done

