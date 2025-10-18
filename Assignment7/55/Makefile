# === Compiler and tools ===
CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -O2
AR = ar
ARFLAGS = rcs

# === Library settings ===
LIBDIR = utility
LIB = $(LIBDIR)/libmdutility.a
OBJS = $(LIBDIR)/lock1.o \
       $(LIBDIR)/lock2.o \
       $(LIBDIR)/lockdestructor.o \
       $(LIBDIR)/valid.o \
       $(LIBDIR)/lockpath.o \
       $(LIBDIR)/openlockfile.o

# === Main program ===
TARGET = main
MAINOBJ = main.o

# === Default target ===
all: $(TARGET)

# === Link main executable ===
$(TARGET): $(MAINOBJ) $(LIB)
	$(CXX) $(CXXFLAGS) -o $@ $(MAINOBJ) $(LIB)

# === Build static library ===
$(LIB): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

# === Compile object files ===
$(LIBDIR)/%.o: $(LIBDIR)/%.cc $(LIBDIR)/Lock.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(MAINOBJ): main.cc
	$(CXX) $(CXXFLAGS) -c main.cc

# === Clean up ===
clean:
	rm -f $(LIBDIR)/*.o $(LIB) $(MAINOBJ) $(TARGET)

