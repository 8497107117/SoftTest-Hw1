CXX = g++
GTEST_DIR = ../googletest/googletest
TARGET = Triangle

all: $(TARGET)

$(TARGET):
	$(CXX) -isystem ${GTEST_DIR}/include -I${GTEST_DIR} -pthread -c ${GTEST_DIR}/src/gtest-all.cc  
	ar -rv libgtest.a gtest-all.o
	$(CXX) -isystem ${GTEST_DIR}/include -pthread ./test.cpp ./main.cpp libgtest.a -o $@

clean:
	rm -f Triangle *.o *.a
