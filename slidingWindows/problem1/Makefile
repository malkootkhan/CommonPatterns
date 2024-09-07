# Compiler
CXX = g++

# Target executable name
TARGET = program

# Find all .cpp files
SRCS = $(wildcard *.cpp)

#includes for googletest
GTEST_INC=~/workspace/c_workspace/commonPatterns/googletest/googlemock/include/

#libraries for googletest
GTEST_LIBS=~/workspace/c_workspace/commonPatterns/googletest/build/lib/


# Rule to build and run the executable
run: $(TARGET)
	./$(TARGET)

# Rule to build the executable
$(TARGET): $(SRCS)
	$(CXX) -g -o $@ $^ -I$(GTEST_INC) -L$(GTEST_LIBS) -lgtest -lgtest_main -pthread


# Clean up generated files
clean:
	rm -f $(TARGET)

.PHONY: clean run

