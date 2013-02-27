CXX = g++ 
CXXFLAGS = -Wall -g -ggdb3 -I. -Iinclude
LIBS = -lm -ltcod -Llib -Wl,-rpath=lib
LDFLAGS = $(LIBS)     #,-rpath=lib 
DEFINES = 
 
SOURCES = main.cpp actor.cpp
HEADERS = actor.h
OBJS    = main.o actor.o

rleng: $(OBJS)
	$(CXX) $(DEFINES) $(LDFLAGS) -o $@ $(OBJS)

.: $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(DEFINES) -o $@ $(SOURCES)

clean:
	rm -f *.o rleng 

depend:
	$(CC) -MM *.cpp > .deps

all: rleng

include .deps
