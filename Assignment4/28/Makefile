line: main.o line.o
	g++ -o line main.o line.o

main.o: main.cc line.h
	g++ -c main.cc

line.o: line.cc line.h
	g++ -c line.cc

clean:
	rm -f *.o line

