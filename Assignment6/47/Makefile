CXX = g++
CXXFLAGS = -Wall -std=c++17

# Directories
SRC_DIRS = . symtab symbol value calculator tokenizer

# Collect all .cc source files
SRCS = $(wildcard $(addsuffix /*.cc, $(SRC_DIRS)))
OBJS = $(SRCS:.cc=.o)

TARGET = main

# Build target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Generic rule for compiling .cc -> .o
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up all object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)

