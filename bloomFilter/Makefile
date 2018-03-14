CXX      = g++
CXXFLAGS = -g -std=c++11 -O2 -Wall -pedantic

all: bloomfilter clean

bloomfilter: bloomfilter.o
	$(CXX) -o $@ $^
	
bloomfilter.o: bloomfilter.cpp bloomfilter.hpp
	$(CXX) -c $(CXXFLAGS) $<

clean:
	rm *.o

