parser: main.o line.o parser.o
	g++ -o parser main.o line.o parser.o

main.o: main.cc line.h
	g++ -c main.cc

line.o: line.cc line.h
	g++ -c line.cc

parser.o: parser.cc parser.h parser.ih
	g++ -c parser.cc

clean:
	rm -f *.o parser

