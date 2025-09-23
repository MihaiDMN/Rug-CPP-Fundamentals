all: indented_cout.o indent_more.o indent_less.o reset_indentation.o step_size.o libindent.a

indented_cout.o: indented_cout.cc indent.h indent_internal.ih
	g++ -c indented_cout.cc

indent_more.o: indent_more.cc indent.h indent_internal.ih
	g++ -c indent_more.cc

indent_less.o: indent_less.cc indent.h indent_internal.ih
	g++ -c indent_less.cc

reset_indentation.o: reset_indentation.cc indent.h indent_internal.ih
	g++ -c reset_indentation.cc

step_size.o: step_size.cc indent.h indent_internal.ih
	g++ -c step_size.cc

libindent.a: indented_cout.o indent_more.o indent_less.o reset_indentation.o step_size.o
	ar rcs libindent.a indented_cout.o indent_more.o indent_less.o reset_indentation.o step_size.o

clean:
	rm -f *.o *.a
