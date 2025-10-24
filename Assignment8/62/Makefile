# Compiler and flags
CXX := g++
CXXFLAGS := -std=c++20 -Wall -Wextra -I. -Idata

# Executable name
TARGET := main

# Source folders
SRC_DIRS := . data \
	data/copy data/destroy data/get data/move data/swap data/tables

# Find all .cc source files
SRCS := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.cc))

# Object files (mirror folder structure)
OBJS := $(SRCS:.cc=.o)

# Default rule
all: $(TARGET)

# Link all objects into the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile each .cc into .o
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean all build artifacts
clean:
	rm -f $(OBJS) $(TARGET)

# Convenience rule for a fresh build
rebuild: clean all

# Optional: show all compiled files (for debugging)
print:
	@echo "Sources: $(SRCS)"
	@echo "Objects: $(OBJS)"

