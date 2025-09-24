person: main.o person.o
	g++ -o person main.o person.o

main.o: main.cc person.h
	g++ -c main.cc

person.o: person.cc person.h person.ih
	g++ -c person.cc

clean:
	rm -f *.o person

