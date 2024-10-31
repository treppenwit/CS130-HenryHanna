# Makefile for C++ name sorting program

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

TARGET = name_sorting
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

# Rule to build the executable
all: $(TARGET)

$(TARGET): $(OBJ)
    $(CXX) $(CXXFLAGS) -o $@ $^

# Rule to run unit tests
unit_test: $(TARGET)
    ./$(TARGET) << EOF
5
Alice
Bob
Charlie
David
Eve
EOF

# Rule to run Kattis tests (assuming input is redirected from a file)
kattis_test: $(TARGET)
    ./$(TARGET) < kattis_input.txt

# Rule to clean up build artifacts
clean:
    rm -f $(TARGET) $(OBJ)

.PHONY: all unit_test kattis_test clean
