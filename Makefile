rleng: main.o actor.o
	g++ -o rleng main.o actor.o

actor.o: actor.h actor.cpp
	g++ -c actor.cpp

main.o: actor.h actor.cpp main.cpp
	g++ -c main.cpp
