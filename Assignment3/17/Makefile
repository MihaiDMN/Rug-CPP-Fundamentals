17: 17.o sum.o
	g++ -o 17 17.o sum.o

17.o: 17.cc sum.h
	g++ -c 17.cc

sum.o: sum.cc sum.h
	g++ -c sum.cc

clean:
	rm -f *.o 17
