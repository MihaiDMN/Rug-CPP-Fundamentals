main: main.o convert.o lowercase.o
	g++ -o main main.o convert.o lowercase.o

main.o: main.cc main.ih
	g++ -c main.cc

convert.o: convert.cc main.ih
	g++ -c convert.cc

lowercase.o: lowercase.cc main.ih
	g++ -c lowercase.cc

clean:
	rm -f *.o main
