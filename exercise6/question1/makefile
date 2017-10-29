execute: question1.o IntegerArray.o
	g++ -g question1.o IntegerArray.o -o execute
question1.o: question1.cpp IntegerArray.h
	g++ -Wall -g -c question1.cpp
IntegerArray.o: IntegerArray.cpp IntegerArray.h
	g++ -Wall -g -c IntegerArray.cpp
clean:
	rm -f *.o execute
