# Makefile for Falling Apart problem

CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

TARGET = falling_apart
UNIT_TEST = unit_test

.PHONY: all clean unit_test

# Default rule
all: $(TARGET)

# Build the main target
$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# Build unit test
unit_test: main.cpp unit_test.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET)_test main.cpp unit_test.cpp

# Clean up build files
clean:
	rm -f $(TARGET) $(TARGET)_test

