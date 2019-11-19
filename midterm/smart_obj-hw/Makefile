.SUFFIXES: .cpp .o

OBJECTS =smart_obj.o human.o student.o weak_pointer.o shared_ref.o

TEST_FILE=test.o $(OBJECTS)

CXX=g++
SMT_PTR=smart_obj

TARGET=test
TEST=test_all

$(TARGET) : $(TEST_FILE)
	$(CXX) -o $(TARGET) $(TEST_FILE)
clean:
	rm -rf $(TARGET) $(TEST) $(TEST_FILE)

