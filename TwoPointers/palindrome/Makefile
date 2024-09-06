# Compiler
CXX = g++

# Target executable name
TARGET = program

# Find all .cpp files
SRCS = $(wildcard *.cpp)

# Rule to build and run the executable
run: $(TARGET)
	./$(TARGET)

# Rule to build the executable
$(TARGET): $(SRCS)
	$(CXX) -o $@ $^

# Clean up generated files
clean:
	rm -f $(TARGET)

.PHONY: clean run

