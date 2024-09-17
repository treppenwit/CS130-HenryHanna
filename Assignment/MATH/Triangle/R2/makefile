CXX = g++


CXXFLAGS = -c -g -Wall -std=c++17


PROGRAM = r2.exe


CPPFILES = main.cpp


all:
	$(CXX) $(CXXFLAGS) $(CPPFILES)
	$(CXX) -o $(PROGRAM) *.o

run:
	./$(PROGRAM)
	
clean:
	rm -f $(PROGRAM) *.o