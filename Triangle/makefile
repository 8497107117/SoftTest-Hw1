CXX = g++
GTEST_DIR = ../googletest/googletest
TARGET = Triangle
OBJECTS = test.cpp main.cpp triangle.cpp

all: $(TARGET)

$(TARGET):
	$(CXX) -isystem ${GTEST_DIR}/include -I${GTEST_DIR} -pthread -c ${GTEST_DIR}/src/gtest-all.cc  
	ar -rv libgtest.a gtest-all.o
	$(CXX) -isystem ${GTEST_DIR}/include -pthread $(OBJECTS) libgtest.a -o $@

clean:
	rm -f Triangle *.o *.a
