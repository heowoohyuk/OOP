.SUFFIXES: .cpp .o


OBJECTS =vehicle.o bike.o car.o
CPP=vehicle.cpp bike.cpp car.cpp

MAIN = main.o $(OBJECTS)
CXX = g++
CPPFLAGS = -c
TARGET=test

$(TARGET) : $(MAIN)
	$(CXX) -o $(TARGET) $(MAIN)

clean :
	rm -rf $(OBJECTS)
	
vehicle.o : vehicle.cpp
bike.o : bike.cpp
car.o : car.cpp
main.o: main.cpp

