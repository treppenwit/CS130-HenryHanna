# Makefile for Falling Apart problem

CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

TARGET = falling_apart
OBJ = falling_apart.o

# Unit test executable
UNIT_TEST = unit_test
UNIT_TEST_OBJ = unit_test.o

# Kattis test executable
KATTIS_TEST = kattis_test

.PHONY: all clean unit_test kattis_test

# Default rule
all: $(TARGET)

# Build the main target
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build unit test
$(UNIT_TEST): $(UNIT_TEST_OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule for compiling the main program
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Rule for unit test object
unit_test.o: unit_test.cpp falling_apart.cpp
	$(CXX) $(CXXFLAGS) -c unit_test.cpp

# Rule for Kattis test (assuming input and output files)
kattis_test: $(TARGET)
	@echo "Running Kattis tests..."
	@./$(TARGET) < input.txt > output.txt
	@diff output.txt expected_output.txt
	@echo "Kattis test complete!"

# Clean up build files
clean:
	rm -f $(TARGET) $(OBJ) $(UNIT_TEST) $(UNIT_TEST_OBJ) output.txt
