# Makefile for lineup program
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Compile main program
lineup: main.cpp
	$(CXX) $(CXXFLAGS) -o lineup main.cpp

# Rule for unit testing
unit_test: lineup
	./lineup test < test_case1.in > test_case1.out
	./lineup test < test_case2.in > test_case2.out
	./lineup test < test_case3.in > test_case3.out
	./lineup test < test_case4.in > test_case4.out
	diff test_case1.out expected_case1.out
	diff test_case2.out expected_case2.out
	diff test_case3.out expected_case3.out
	diff test_case4.out expected_case4.out

# Rule for testing the entire program with Kattis-style input
kattis_test: lineup
	./lineup < test_case1.in > test_case1.out
	./lineup < test_case2.in > test_case2.out
	./lineup < test_case3.in > test_case3.out
	./lineup < test_case4.in > test_case4.out

# Clean compiled files
clean:
	rm -f lineup *.out
