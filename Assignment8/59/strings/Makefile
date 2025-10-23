# --- Configuration Variables ---
CXX := g++
# Using C++20 standard, all warnings, and optimization level 2
CXXFLAGS := -Wall -O2 -std=c++20
TARGET := strings_test
SRC_DIR := strings
HEADERS := strings.h strings.ih main.ih

# --------------------------------------------------------------------------
# Source and Object Files List
# --------------------------------------------------------------------------

# 1. Main source file
MAIN_SRC := main.cc

# 2. Library source files (all .cc files inside the strings directory)
LIB_SRCS := $(wildcard $(SRC_DIR)/*.cc)

# Combine all sources
SOURCES := $(MAIN_SRC) $(LIB_SRCS)

# Convert all source names to object names (e.g., strings/add.cc -> strings/add.o)
OBJECTS := $(patsubst %.cc, %.o, $(SOURCES))

# --------------------------------------------------------------------------
# Targets
# --------------------------------------------------------------------------

# Default target: builds the executable
all: $(TARGET)

# Linking Rule: The executable depends on all object files
$(TARGET): $(OBJECTS)
	@echo "Linking $(TARGET)..."
	$(CXX) $(OBJECTS) -o $@ 

# --------------------------------------------------------------------------
# Compilation Rules (Pattern Rules)
# --------------------------------------------------------------------------

# Pattern Rule for compiling root-level sources (e.g., main.cc)
# The object file depends on its source and the main header files.
%.o: %.cc $(HEADERS)
	@echo "Compiling $<..."
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Pattern Rule for compiling library sources (inside the strings/ directory)
# The object file depends on its source and the main header files.
$(SRC_DIR)/%.o: $(SRC_DIR)/%.cc $(HEADERS)
	@echo "Compiling $<..."
	$(CXX) $(CXXFLAGS) -c $< -o $@

# --------------------------------------------------------------------------
# Utility Targets
# --------------------------------------------------------------------------

clean:
	@echo "Cleaning project..."
	# Remove the executable
	rm -f $(TARGET)
	# Remove all object files in the root directory
	rm -f *.o
	# Remove all object files in the strings directory
	rm -f $(SRC_DIR)/*.o

.PHONY: all clean
