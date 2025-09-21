17: 17.o sum.o sum2.o
	g++ -o 17 17.o sum.o sum2.o

17.o: 17.cc sum.h
	g++ -c 17.cc

sum2.o: sum2.cc sum.h
	g++ -c sum2.cc

sum.o: sum.cc sum.h
	g++ -c sum.cc

clean:
	rm -f *.o 17
