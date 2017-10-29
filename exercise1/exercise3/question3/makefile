execute: question3.o statistics.o
	g++ -g question3.o statistics.o -o execute

question3.o: question3.cpp statistics.h
	g++ -Wall -g -c question3.cpp

statistics.o: statistics.cpp statistics.h
	g++ -Wall -g -c statistics.cpp

clean:
	rm -f *.o execute
