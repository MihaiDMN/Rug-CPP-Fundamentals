person: main.o person.o readpersons.o writepersons.o
	g++ -o person main.o person.o readpersons.o writepersons.o

main.o: main.cc person.h
	g++ -c main.cc

readpersons.o: readpersons.cc rwperson.h
	g++ -c readpersons.cc

writepersons.o: writepersons.cc rwperson.h
	g++ -c writepersons.cc

person.o: person.cc person.h person.ih
	g++ -c person.cc

clean:
	rm -f *.o person

