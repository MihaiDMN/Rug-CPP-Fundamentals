CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -O0 -g

NUMBERS_DIR = Numbers
OBJS = \
    $(NUMBERS_DIR)/defaultconstructor.o \
    $(NUMBERS_DIR)/numbers1.o \
    $(NUMBERS_DIR)/numbers2.o \
    $(NUMBERS_DIR)/copyconstructor.o \
    $(NUMBERS_DIR)/moveconstructor.o \
    $(NUMBERS_DIR)/destructor.o \
    $(NUMBERS_DIR)/copyassign.o \
    $(NUMBERS_DIR)/moveassign.o \
    $(NUMBERS_DIR)/at.o \
    $(NUMBERS_DIR)/length.o \
    $(NUMBERS_DIR)/write.o

TARGET = main

all: $(TARGET)

$(TARGET): main.o $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

main.o: main.cc main.ih Numbers/numbers.h
	$(CXX) $(CXXFLAGS) -c main.cc

$(NUMBERS_DIR)/%.o: $(NUMBERS_DIR)/%.cc $(NUMBERS_DIR)/numbers.h $(NUMBERS_DIR)/numbers.ih
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(NUMBERS_DIR)/*.o *.o $(TARGET)

