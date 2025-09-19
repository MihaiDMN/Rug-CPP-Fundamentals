wc: main.o wc_functions.o
	g++ -o wc main.o wc_functions.o

main.o: main.cc main.ih
	g++ -c main.cc

wc_functions.o: wc_functions.cc main.ih
	g++ -c wc_functions.cc

clean:
	rm -f *.o wc
