pali: main.o palindromechecker.o
	g++ -std=c++11 -g -Wall main.o palindromechecker.o -o pali

main.o: main.cpp palindromechecker.h
	g++ -std=c++11 -g -Wall -c main.cpp

palindromechecker.o: palindromechecker.h palindromechecker.cpp
	g++ -std=c++11 -g -Wall -c palindromechecker.cpp

clean:
	rm *.o pali
