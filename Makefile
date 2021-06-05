compile:
	g++ -o main main.cpp

execute:
	./main

run:
	g++ -o ./Build/main ./src/main.cpp ./src/Class/**/*.cpp -std=c++14 && ./Build/main