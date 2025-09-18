CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
TARGET = netflix.o
SOURCE = netflix.cpp

all: $(TARGET)

# will be something like this in command
# g++ -std=c++11 -Wall -Wextra -o netflix netflix.cpp
$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCE)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)