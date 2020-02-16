tour: main.o knight.o
	g++ -std=c++11 -g -Wall main.o knight.o -o tour

main.o: main.cpp knight.h
	g++ -std=c++11 -g -Wall -c main.cpp

knight.o: knight.h knight.cpp
	g++ -std=c++11 -g -Wall -c knight.cpp

clean:
	rm *.o tour
