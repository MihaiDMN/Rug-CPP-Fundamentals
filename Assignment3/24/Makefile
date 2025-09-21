# Compiler and flags
CXX = g++
CXXFLAGS = -O1 -pg -Wall -std=c++17

# Executable name
TARGET = main

# Source files
SRC = main.cc fun.cc fun2.cc callvalue.cc callref.cc

# Object files
OBJ = $(SRC:.cc=.o)

# Default target
all: $(TARGET)

# Link objects into executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile .cc files into .o
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJ) $(TARGET) gmon.out report.txt

