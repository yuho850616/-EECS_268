ex1: main.o boardgame.o boarddriver.o
	g++ -std=c++11 -g -Wall main.o boardgame.o boarddriver.o -o ex1

main.o: main.cpp boardgame.h boarddriver.h
	g++ -std=c++11 -g -Wall -c main.cpp 

boardgame.o: boardgame.h boardgame.cpp
	g++ -std=c++11 -g -Wall -c boardgame.cpp

boarddriver.o: boarddriver.h boarddriver.cpp 
	g++ -std=c++11 -g -Wall -c boarddriver.cpp 

clean: 
	rm *.o ex1

