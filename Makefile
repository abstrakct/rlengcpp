CXX = g++ 
CXXFLAGS = -Wall -g -ggdb3 -I. -Iinclude
LIBS = -lm -ltcodxx -Llib -Wl,-rpath=lib
LDFLAGS=$(LIBS)     #,-rpath=lib 
DEFINES =
 
SOURCES = main.cpp actor.cpp display.cpp game.cpp command.cpp player.cpp
HEADERS = actor.h display.h game.h command.h debug.h player.h
OBJS    = main.o actor.o display.o game.o command.o player.o

rleng: $(OBJS)
	$(CXX) $(DEFINES) $(LDFLAGS) -o $@ $(OBJS)

.: $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(DEFINES) -o $@ $(SOURCES)

clean:
	rm -f *.o rleng 

depend:
	$(CXX) $(CXXFLAGS) -MM *.cpp > .deps

all: rleng

include .deps
