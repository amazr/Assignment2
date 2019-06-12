CXX=g++
CXXFLAGS=-Wall -Werror -pedantic -std=c++17
all: a b c
a:
	${CXX} ${FLAGS} task1.cpp -o task1
b:
	${CXX} ${FLAGS} task2.cpp -o task2
c:
	${CXX} ${FLAGS} task3.cpp -o task3
