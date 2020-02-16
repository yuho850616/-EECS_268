
lab03: main.o Executive.o Browser.o Tabclass.o
		g++ -g -std=c++11 -Wall  main.o Executive.o Browser.o Tabclass.o -o lab03

main.o: main.cpp Linkedlist.h Linkedlist.cpp Node.h Node.cpp Executive.h Listinterface.h Tabinterface.h Tabclass.h Tabclass.cpp Browser.h Browser.cpp
		g++ -g -std=c++11 -Wall -c main.cpp

Executive.o: Executive.h Executive.cpp Linkedlist.h Linkedlist.cpp Node.h Node.cpp Listinterface.h Tabinterface.h Tabclass.h Tabclass.cpp Browser.cpp Browser.h
		g++ -g -std=c++11 -Wall -c Executive.cpp

Browser.o: Browser.h Browser.cpp
		g++ -g -std=c++11 -Wall -c Browser.cpp

Tabclass.o: Tabclass.h Tabclass.cpp
		g++ -g -std=c++11 -Wall -c Tabclass.cpp

clean:
		rm *.o lab03
