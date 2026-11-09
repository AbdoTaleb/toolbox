CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++20

BUILD_DIR = build

KALLOR := $(wildcard *.cpp)

OBJEKT = $(KALLOR:%.cpp=$(BUILD_DIR)/%.o)

verktygslada: $(OBJEKT)
	$(CXX) $(CXXFLAGS) $(OBJEKT) -o verktygslada

$(BUILD_DIR)/%.o: %.cpp verktyg.h | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $@

.PHONY: clean

clean:
	rm -rf $(BUILD_DIR) verktygslada verktygslada.exe