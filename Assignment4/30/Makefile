calculator: main.o calculator.o getoperator.o number.o expression.o evaluate.o
	g++ -o calculator main.o calculator.o getoperator.o number.o expression.o evaluate.o

main.o: main.cc calculator.h
	g++ -c main.cc

calculator.o: calculator.cc calculator.h
	g++ -c calculator.cc

evaluate.o: evaluate.cc calculator.h
	g++ -c evaluate.cc

expression.o: expression.cc calculator.h
	g++ -c expression.cc

number.o: number.cc calculator.h
	g++ -c number.cc

getoperator.o: getoperator.cc calculator.h
	g++ -c getoperator.cc

clean:
	rm -f *.o calculator

