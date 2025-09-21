18: 18.o combine.o boundcall.o structcall.o
	g++ -o 18 18.o combine.o boundcall.o structcall.o

18.o: 18.cc main.ih
	g++ -c 18.cc

combine.o: combine.cc main.ih
	g++ -c combine.cc

boundcall.o: boundcall.cc main.ih
	g++ -c boundcall.cc

structcall.o: structcall.cc main.ih
	g++ -c structcall.cc

clean:
	rm -f *.o 18
