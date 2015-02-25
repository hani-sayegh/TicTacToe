Toe : main.o Board.o
	g++ -std=c++11 main.o Board.o -o Toe

main.o : main.cpp Board.cpp Board.h
	g++ -std=c++11 -Wall -c main.cpp

Board.o : Board.cpp Board.h
	g++ -std=c++11 -Wall -c Board.cpp

clean:
	rm *.o Toe
