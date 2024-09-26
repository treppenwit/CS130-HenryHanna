CC = g++
CFLAGS = -Wall -Wextra -std=c++11
TARGET = calculator

all: build

build: main.cpp
	$(CC) $(CFLAGS) -o $(TARGET) main.cpp

run: build
	./$(TARGET)

clean:
	rm -f $(TARGET)