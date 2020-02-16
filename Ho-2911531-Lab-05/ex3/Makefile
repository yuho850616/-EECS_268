pow: main.o power.o
	g++ -std=c++11 -g -Wall main.o power.o -o pow

main.o: main.cpp power.h
	g++ -std=c++11 -g -Wall -c main.cpp

power.o: power.h power.cpp
	g++ -std=c++11 -g -Wall -c power.cpp

clean:
	rm *.o pow
