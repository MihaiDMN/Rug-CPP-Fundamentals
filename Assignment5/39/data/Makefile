# === Compiler and flags ===
CXX      = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -Idata

# === Targets ===
all: main

# --- Static library ---
libdata.a: data/data.o data/read.o data/display.o data/readimp.o data/displayimp.o
	ar rcs $@ $^

# Compile Data constructor / destructor
data/data.o: data/data.cc data/data.h data/dataimp.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compile Data::read()
data/read.o: data/read.cc data/data.h data/dataimp.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compile Data::display()
data/display.o: data/display.cc data/data.h data/dataimp.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compile DataImpl::read()
data/readimp.o: data/readimp.cc data/dataimp.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compile DataImpl::display()
data/displayimp.o: data/displayimp.cc data/dataimp.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# --- Main program ---
main.o: main.cc main.ih data/data.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

main: main.o libdata.a
	$(CXX) $(CXXFLAGS) main.o -L. -ldata -o $@

# --- Cleanup ---
clean:
	rm -f main *.o data/*.o libdata.a

