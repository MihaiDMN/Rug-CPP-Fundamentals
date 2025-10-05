person: main.o person.o setname.o setaddress.o insert.o mass.o extract.o setphone.o setmass.o phone.o name.o address.o isdigits.o
	g++ -o person main.o person.o setname.o setaddress.o insert.o mass.o extract.o setphone.o setmass.o phone.o name.o address.o isdigits.o
 
main.o: main.cc person.h
	g++ -c main.cc

person.o: person.cc person.h person.ih
	g++ -c person.cc

setname.o: setname.cc person.h person.ih
	g++ -c setname.cc

setaddress.o: setaddress.cc person.h person.ih
	g++ -c setaddress.cc

mass.o: mass.cc person.h person.ih
	g++ -c mass.cc

extract.o: extract.cc person.h person.ih
	g++ -c extract.cc

setphone.o: setphone.cc person.h person.ih
	g++ -c setphone.cc

setmass.o: setmass.cc person.h person.ih
	g++ -c setmass.cc

phone.o: phone.cc person.h person.ih
	g++ -c phone.cc

name.o: name.cc person.h person.ih
	g++ -c name.cc

insert.o: insert.cc person.h person.ih
	g++ -c insert.cc

address.o: address.cc person.h person.ih
	g++ -c address.cc

isdigits.o: isdigits.cc person.h person.ih
	g++ -c isdigits.cc

clean:
	rm -f *.o person

