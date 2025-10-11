main: main.o strings1.o strings2.o strings3.o strings4.o enlarge.o reserve.o stringsdestructor.o add.o fill.o rawpointers.o resize.o swap.o count.o release.o safeat.o destroy.o
	g++ -o main main.o strings1.o strings2.o strings3.o strings4.o enlarge.o reserve.o stringsdestructor.o add.o fill.o rawpointers.o resize.o swap.o count.o release.o safeat.o destroy.o

destroy.o: destroy.cc strings.h
	g++ -c destroy.cc

safeat.o: safeat.cc strings.h
	g++ -c safeat.cc

release.o: release.cc strings.h
	g++ -c release.cc

count.o: count.cc strings.h
	g++ -c count.cc

swap.o: swap.cc strings.h
	g++ -c swap.cc

resize.o: resize.cc strings.h
	g++ -c resize.cc

rawpointers.o: rawpointers.cc strings.h
	g++ -c rawpointers.cc

fill.o: fill.cc strings.h
	g++ -c fill.cc

add.o: add.cc strings.h
	g++ -c add.cc

stringsdestructor.o: stringsdestructor.cc strings.h
	g++ -c stringsdestructor.cc

reserve.o: reserve.cc strings.h
	g++ -c reserve.cc

enlarge.o: enlarge.cc strings.h
	g++ -c enlarge.cc

strings4.o: strings4.cc strings.h
	g++ -c strings4.cc

strings3.o: strings3.cc strings.h
	g++ -c strings3.cc

strings2.o: strings2.cc strings.h
	g++ -c strings2.cc

strings1.o: strings1.cc strings.h
	g++ -c strings1.cc

clean:
	rm -f *.o main

