main: main.o charcount.o showchar.o
	g++ -o main main.o charcount.o showchar.o

main.o: main.cc charcount.h showchar.h
	g++ -c main.cc

showchar.o: showchar.cc showchar.h
	g++ -c showchar.cc

charcount.o: charcount.cc charcount.h
	g++ -c charcount.cc

clean:
	rm -f *.o main

