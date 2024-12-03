 # Compiler settings
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Source and object files
SRCS = main.cpp  # Add any other source files here
OBJS = $(SRCS:.cpp=.o)

# Output executable
TARGET = game

# Default rule to build the program
all: $(TARGET)

# Rule to build the game executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile .cpp files to .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean up build artifacts
clean:
	rm -f $(OBJS) $(TARGET)

# Rule to remove the executable and object files
fclean: clean
	rm -f $(TARGET)

# Rule to rebuild the project from scratch
re: fclean all

# Rule to run the game after compilation
run: $(TARGET)
	./$(TARGET)

# Phony targets (these are not files, but names for rules)
.PHONY: all clean fclean re run
