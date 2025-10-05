main: main.o charcount.o showchar.o clocate.o cinfo.o ccount.o
	g++ -o main main.o charcount.o showchar.o clocate.o cinfo.o ccount.o

main.o: main.cc charcount.h
	g++ -c main.cc

showchar.o: showchar.cc charcount.h
	g++ -c showchar.cc

charcount.o: charcount.cc charcount.h
	g++ -c charcount.cc

ccount.o: ccount.cc charcount.h
	g++ -c ccount.cc

cinfo.o: cinfo.cc charcount.h
	g++ -c cinfo.cc

clocate.o: clocate.cc charcount.h
	g++ -c clocate.cc

clean:
	rm -f *.o main

