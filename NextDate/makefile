CXX = g++
GTEST_DIR = ../googletest/googletest
TARGET = NextDate
OBJECTS = test.cpp main.cpp nextDate.cpp

all: $(TARGET)

$(TARGET):
	$(CXX) -isystem ${GTEST_DIR}/include -I${GTEST_DIR} -pthread -c ${GTEST_DIR}/src/gtest-all.cc  
	ar -rv libgtest.a gtest-all.o
	$(CXX) -isystem ${GTEST_DIR}/include -pthread $(OBJECTS) libgtest.a -o $@

clean:
	rm -f NextDate *.o *.a
