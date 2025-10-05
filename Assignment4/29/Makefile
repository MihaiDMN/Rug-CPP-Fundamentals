parser: main.o line.o parser.o puredouble.o convert.o next.o isintegral.o reset.o
	g++ -o parser main.o line.o parser.o puredouble.o convert.o next.o isintegral.o reset.o

main.o: main.cc line.h
	g++ -c main.cc

line.o: line.cc line.h
	g++ -c line.cc

parser.o: parser.cc parser.h parser.ih
	g++ -c parser.cc

reset.o: reset.cc parser.h parser.ih
	g++ -c reset.cc

isintegral.o: isintegral.cc parser.h parser.ih
	g++ -c isintegral.cc

next.o: next.cc parser.h parser.ih
	g++ -c next.cc

convert.o: convert.cc parser.h parser.ih
	g++ -c convert.cc

puredouble.o: puredouble.cc parser.h parser.ih
	g++ -c puredouble.cc

clean:
	rm -f *.o parser

