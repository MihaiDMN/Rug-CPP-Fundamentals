18: 18.o main.o
	g++ -o 18 18.o main.o

18.o: 18.cc main.h
	g++ -c 18.cc

main.o: main.cc main.h
	g++ -c main.cc

clean:
	rm -f *.o 18
