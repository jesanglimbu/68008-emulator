# Compiler and flags
CC := gcc
CFLAGS := -Wall -Wextra -Iinclude -std=c99 -O2

# Directories
SRC_DIR := src
BUILD_DIR := build
BIN := emulator

# Source and object files
SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))

# Default target
all: $(BUILD_DIR) $(BIN)

# Link executable
$(BIN): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files to object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR) $(BIN)

.PHONY: all clean
