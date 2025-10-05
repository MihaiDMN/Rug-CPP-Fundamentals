line: main.o next.o getline.o
	g++ -o line main.o next.o getline.o

main.o: main.cc line.h
	g++ -c main.cc

next.o: next.cc line.h
	g++ -c next.cc

getline.o: getline.cc line.h
	g++ -c getline.cc

clean:
	rm -f *.o line

