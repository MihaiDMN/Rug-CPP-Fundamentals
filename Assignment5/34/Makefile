copycat: main.o copycat.o
	g++ -o copycat main.o copycat.o

main.o: main.cc copycat.h
	g++ -c main.cc

copycat.o: copycat.cc copycat.h copycat.ih
	g++ -c copycat.cc

clean:
	rm -f *.o copycat

