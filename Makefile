BUILD_DIR := build
TARGET := rev

.PHONY: all build clean run

all: build

build:
	cmake -S . -B $(BUILD_DIR) -DCMAKE_BUILD_TYPE=Release
	cmake --build $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)

run: build
	./$(BUILD_DIR)/$(TARGET) $(ARGS)
