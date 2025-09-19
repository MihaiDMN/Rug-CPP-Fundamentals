21: 21.o quicksort.o
	g++ -o 21 21.o quicksort.o

20.o: 21.cc quicksort.h
	g++ -c 21.cc

quicksort.o: quicksort.cc quicksort.h
	g++ -c quicksort.cc

clean:
	rm -f *.o 21
