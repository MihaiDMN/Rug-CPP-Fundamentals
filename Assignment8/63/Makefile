# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -g -I. -Idata


# Executable name
TARGET = main

# Automatically collect all .cc source files
SRC = main.cc \
      getdouble.cc getvalue.cc getword.cc gettype.cc \
      wrapcopyassign.cc wrapcopyconst.cc wrapdestructor.cc \
      wrapdouble.cc wrapmoveassign.cc wrapmoveconst.cc wrapstring.cc wrapvalue.cc \
      $(wildcard data/*.cc) \
      $(wildcard data/*/*.cc)

# Object files
OBJ = $(SRC:.cc=.o)

# Default target
all: $(TARGET)

# Link all object files
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

# Generic compilation rule
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Cleanup
clean:
	rm -f $(OBJ) $(TARGET)

# Convenience target for rebuild
re: clean all

# Optional: show all sources/objects (debug helper)
print:
	@echo "Sources: $(SRC)"
	@echo "Objects: $(OBJ)"

