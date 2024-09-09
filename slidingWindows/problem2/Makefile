# Compiler
CXX = g++

# Target executable name
TARGET = program

# Find all .cpp files
SRCS = $(wildcard *.cpp)

# Find all .hpp files (header files)
HDRS = $(wildcard *.hpp)

#includes for googletest
GTEST_INC=~/workspace/c_workspace/commonPatterns/googletest/googlemock/include/

#libraries for googletest
GTEST_LIBS=~/workspace/c_workspace/commonPatterns/googletest/build/lib/

# Rule to build the executable
$(TARGET): $(SRCS) $(HDRS)
	$(CXX) -o $@ $^ -I$(GTEST_INC) -L$(GTEST_LIBS) -lgtest -lgtest_main -pthread

# Rule to build and run the executable
run: $(TARGET)
	./$(TARGET)

# Clean up generated files
clean:
	rm -f $(TARGET)

help:
		@echo "arguments: [run|help]"
		@echo "arg: <run> for runing the binary"
		@echo "arg: <no arg> for build the code"
		@echo "arg: <help> for help "
.PHONY: clean run help

