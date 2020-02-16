lab04: main.o Executive.o Process.o
		g++ -g -std=c++11 -Wall  main.o Executive.o Process.o -o lab04

main.o: main.cpp Linkedlist.h Linkedlist.cpp Node.h Node.cpp Executive.h Stackinterface.h Stack.h Stack.cpp Process.h Process.cpp
		g++ -g -std=c++11 -Wall -c main.cpp

Executive.o: Executive.h Executive.cpp Linkedlist.h Linkedlist.cpp Node.h Node.cpp Stackinterface.h Process.cpp Process.h Stack.h Stack.cpp
		g++ -g -std=c++11 -Wall -c Executive.cpp

Process.o: Process.h Process.cpp
		g++ -g -std=c++11 -Wall -c Process.cpp

clean:
		rm *.o lab04
