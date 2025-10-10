main: main.o charcount.o showchar.o clocate.o cinfo.o ccount.o capacity.o enlarge.o insert.o rawcapacity.o append.o increment.o
	g++ -o main main.o charcount.o showchar.o clocate.o cinfo.o ccount.o capacity.o enlarge.o insert.o rawcapacity.o append.o increment.o

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

capacity.o: capacity.cc charcount.h
	g++ -c capacity.cc

enlarge.o: enlarge.cc charcount.h
	g++ -c enlarge.cc

insert.o: insert.cc charcount.h
	g++ -c insert.cc

rawcapacity.o: rawcapacity.cc charcount.h
	g++ -c rawcapacity.cc

append.o: append.cc charcount.h
	g++ -c append.cc

increment.o: increment.cc charcount.h
	g++ -c increment.cc

clean:
	rm -f *.o main

