BUILD_DIR = build
SOURCE_DIR = src
TEST_DIR = test
CFLAGS = -g -Wall -Wextra -Wpedantic #-Werror
GTEST_LIB = -lgtest -lgtest_main -lpthread

all: $(BUILD_DIR) main run_tests

main: $(BUILD_DIR)/test.o $(BUILD_DIR)/main.o
	clang++ -o $(BUILD_DIR)/test $(CFLAGS) $(BUILD_DIR)/test.o $(BUILD_DIR)/main.o $(GTEST_LIB)

$(BUILD_DIR)/test.o: $(TEST_DIR)/test.cpp
		clang++ -c $(CFLAGS) $(TEST_DIR)/test.cpp -o $(BUILD_DIR)/test.o

$(BUILD_DIR)/main.o: $(SOURCE_DIR)/main.cpp
		clang++ -c $(CFLAGS) $(SOURCE_DIR)/main.cpp -o $(BUILD_DIR)/main.o

run_tests: $(BUILD_DIR)/test
	$(BUILD_DIR)/test

clean: 
		rm -f $(BUILD_DIR)/test $(BUILD_DIR)/*.o

.PHONY: all clean

