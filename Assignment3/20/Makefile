wc: main.o wc.o countchars.o countwords.o countlines.o
	g++ -o wc main.o wc.o countchars.o countwords.o countlines.o

main.o: main.cc main.ih
	g++ -c main.cc

wc_functions.o: wc.cc main.ih
	g++ -c wc.cc

countchars.o: countchars.cc main.ih
	g++ -c countchars.cc

countwords.o: countwords.cc main.ih
	g++ -c countwords.cc

countlines.o: countlines.cc main.ih
	g++ -c countlines.cc

clean:
	rm -f *.o wc
