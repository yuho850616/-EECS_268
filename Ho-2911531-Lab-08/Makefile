e1: main.o Pokemon.o Excutive.o test.o
		g++ -g -std=c++11 -Wall  main.o Excutive.o  Pokemon.o test.o -o e1

main.o: main.cpp  Excutive.h 
		g++ -g -std=c++11 -Wall -c main.cpp
Excutive.o: BST.h BST.cpp BinaryNode.h BinaryNode.cpp Excutive.cpp Excutive.h Pokemon.h Pokemon.cpp test.h test.cpp
		g++ -g -std=c++11 -Wall -c Excutive.cpp
Pokemon.o: Pokemon.h Pokemon.cpp
		g++ -g -std=c++11 -Wall -c Pokemon.cpp
test.o: test.h test.cpp BST.h BST.cpp BinaryNode.h BinaryNode.cpp Pokemon.h Pokemon.cpp
		g++ -g -std=c++11 -Wall -c test.cpp
clean:
		rm *.o e1
