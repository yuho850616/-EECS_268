ex1: main.o
		g++ -g -std=c++11 -Wall main.o -o ex1

main.o: main.cpp LinkedList.h LinkedList.cpp Node.h Node.cpp LinkedListTester.h LinkedListTester.cpp
		g++ -g -std=c++11 -Wall -c main.cpp

clean:
		rm *.o ex1
