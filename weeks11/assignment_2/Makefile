.SUFFIXES: .cpp .o

OBJECTS=Complex.o Integer.o Float.o
CPP=Complex.cpp Float.cpp Integer.cpp


TEST_FILE = test.o $(OBJECTS)
CXX = g++
CPPFLAGS = -c
TARGET=test

$(TARGET) : $(TEST_FILE)
	$(CXX) -o $(TARGET) $(TEST_FILE)
clean :
	rm -rf $(OBJECTS)




