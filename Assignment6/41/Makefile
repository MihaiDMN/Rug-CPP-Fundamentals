# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -O2

# Source files
SRCS = append.cc actionforidx.cc capacity.cc charcount.cc sactions.cc charcountdestructor.cc \
       ccount.cc clocate.cc enlarge.cc increment.cc insert.cc cinfo.cc rawcapacity.cc addchar.cc showchar.cc main.cc

# Object files
OBJS = $(SRCS:.cc=.o)

# Executable
TARGET = main

# Default rule: build executable
all: $(TARGET)

# Link objects into executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile .cc files into .o
%.o: %.cc charcount.h charcount.ih
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean

