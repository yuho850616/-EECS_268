lab9: main.o executive.o record.o
	g++ -std=c++11 -g -Wall main.o executive.o record.o -o lab9

main.o: main.cpp executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

executive.o: executive.h executive.cpp record.h record.cpp heap.h heap.cpp
	g++ -std=c++11 -g -Wall -c executive.cpp

record.o: record.h record.cpp
	g++ -std=c++11 -g -Wall -c record.cpp

clean:
	rm *.o lab9
