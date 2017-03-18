#include <iostream>
#include "triangle.h"
#include "gtest/gtest.h"

using namespace std;

TEST(Normal_Boundary_Value_Test, True) {
    EXPECT_EQ("Isosceles", isTriangle(100, 100, 1));
	EXPECT_EQ("Isosceles", isTriangle(100 , 100, 2));
	EXPECT_EQ("Equilateral", isTriangle(100, 100, 100));
	EXPECT_EQ("Isosceles", isTriangle(100, 100, 199));
    EXPECT_EQ("Isosceles", isTriangle(100, 1, 100));
    EXPECT_EQ("Isosceles", isTriangle(100, 2, 100));
	EXPECT_EQ("Equilateral", isTriangle(100, 100, 100));
    EXPECT_EQ("Isosceles", isTriangle(100, 199, 100));
    EXPECT_EQ("Isosceles", isTriangle(1, 100, 100));
    EXPECT_EQ("Isosceles", isTriangle(2, 100, 100));
	EXPECT_EQ("Equilateral", isTriangle(100, 100, 100));
    EXPECT_EQ("Isosceles", isTriangle(199, 100, 100));
}

TEST(Normal_Boundary_Value_Test, False) {
	EXPECT_EQ("Not a isTriangle", isTriangle(100, 100, 200));
	EXPECT_EQ("Not a isTriangle", isTriangle(100, 200, 100));
	EXPECT_EQ("Not a isTriangle", isTriangle(200, 100, 100));
}
