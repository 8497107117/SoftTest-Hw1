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
	EXPECT_EQ("Not a triangle", isTriangle(100, 100, 200));
	EXPECT_EQ("Not a triangle", isTriangle(100, 200, 100));
	EXPECT_EQ("Not a triangle", isTriangle(200, 100, 100));
}

TEST(Robust_Boundary_Value_Test, False) {
    EXPECT_EQ("Value of c is not in the range of permitted values", isTriangle(100, 100, 0));
	EXPECT_EQ("Value of c is not in the range of permitted values", isTriangle(100, 100, 201));
    EXPECT_EQ("Value of b is not in the range of permitted values", isTriangle(100, 0, 100));
    EXPECT_EQ("Value of b is not in the range of permitted values", isTriangle(100, 201, 100));
    EXPECT_EQ("Value of a is not in the range of permitted values", isTriangle(0, 100, 100));
    EXPECT_EQ("Value of a is not in the range of permitted values", isTriangle(201, 100, 100));
}

TEST(Worst_Case_Boundary_Value_Test, True) {
	EXPECT_EQ("Equilateral", isTriangle(1, 1, 1));
	EXPECT_EQ("Isosceles", isTriangle(1, 2, 2));
	EXPECT_EQ("Isosceles", isTriangle(1, 100, 100));
	EXPECT_EQ("Isosceles", isTriangle(1, 199, 199));
	EXPECT_EQ("Isosceles", isTriangle(1, 200, 200));
	EXPECT_EQ("Isosceles", isTriangle(2, 1, 2));
	EXPECT_EQ("Isosceles", isTriangle(2, 2, 1));
	EXPECT_EQ("Equilateral", isTriangle(2, 2, 2));
	EXPECT_EQ("Isosceles", isTriangle(2, 100, 100));
	EXPECT_EQ("Isosceles", isTriangle(2, 199, 199));
	EXPECT_EQ("Scalene", isTriangle(2, 199, 200));
	EXPECT_EQ("Scalene", isTriangle(2, 200, 199));
	EXPECT_EQ("Isosceles", isTriangle(2, 200, 200));
	EXPECT_EQ("Isosceles", isTriangle(100, 1, 100));
	EXPECT_EQ("Isosceles", isTriangle(100, 2, 100));
	EXPECT_EQ("Isosceles", isTriangle(100, 100, 1));
	EXPECT_EQ("Isosceles", isTriangle(100, 100, 2));
	EXPECT_EQ("Equilateral", isTriangle(100, 100, 100));
	EXPECT_EQ("Isosceles", isTriangle(100, 100, 199));
	EXPECT_EQ("Isosceles", isTriangle(100, 199, 100));
	EXPECT_EQ("Isosceles", isTriangle(100, 199, 199));
	EXPECT_EQ("Scalene", isTriangle(100, 199, 200));
	EXPECT_EQ("Scalene", isTriangle(100, 200, 199));
	EXPECT_EQ("Isosceles", isTriangle(100, 200, 200));
	EXPECT_EQ("Isosceles", isTriangle(199, 1, 199));
	EXPECT_EQ("Isosceles", isTriangle(199, 2, 199));
	EXPECT_EQ("Scalene", isTriangle(199, 2, 200));
	EXPECT_EQ("Isosceles", isTriangle(199, 100, 100));
	EXPECT_EQ("Isosceles", isTriangle(199, 100, 199));
	EXPECT_EQ("Scalene", isTriangle(199, 100, 200));
	EXPECT_EQ("Isosceles", isTriangle(199, 199, 1));
	EXPECT_EQ("Isosceles", isTriangle(199, 199, 2));
	EXPECT_EQ("Isosceles", isTriangle(199, 199, 100));
	EXPECT_EQ("Equilateral", isTriangle(199, 199, 199));
	EXPECT_EQ("Isosceles", isTriangle(199, 199, 200));
	EXPECT_EQ("Scalene", isTriangle(199, 200, 2));
	EXPECT_EQ("Scalene", isTriangle(199, 200, 100));
	EXPECT_EQ("Isosceles", isTriangle(199, 200, 199));
	EXPECT_EQ("Isosceles", isTriangle(199, 200, 200));
	EXPECT_EQ("Isosceles", isTriangle(200, 1, 200));
	EXPECT_EQ("Scalene", isTriangle(200, 2, 199));
	EXPECT_EQ("Isosceles", isTriangle(200, 2, 200));
	EXPECT_EQ("Scalene", isTriangle(200, 100, 199));
	EXPECT_EQ("Isosceles", isTriangle(200, 100, 200));
	EXPECT_EQ("Scalene", isTriangle(200, 199, 2));
	EXPECT_EQ("Scalene", isTriangle(200, 199, 100));
	EXPECT_EQ("Isosceles", isTriangle(200, 199, 199));
	EXPECT_EQ("Isosceles", isTriangle(200, 199, 200));
	EXPECT_EQ("Isosceles", isTriangle(200, 200, 1));
	EXPECT_EQ("Isosceles", isTriangle(200, 200, 2));
	EXPECT_EQ("Isosceles", isTriangle(200, 200, 100));
	EXPECT_EQ("Isosceles", isTriangle(200, 200, 199));
	EXPECT_EQ("Equilateral", isTriangle(200, 200, 200));
}

TEST(Worst_Case_Boundary_Value_Test, False) {
	EXPECT_EQ("Not a triangle", isTriangle(1, 1, 2));
	EXPECT_EQ("Not a triangle", isTriangle(1, 1, 100));
	EXPECT_EQ("Not a triangle", isTriangle(1, 1, 199));
	EXPECT_EQ("Not a triangle", isTriangle(1, 1, 200));
	EXPECT_EQ("Not a triangle", isTriangle(1, 2, 1));
	EXPECT_EQ("Not a triangle", isTriangle(1, 2, 100));
	EXPECT_EQ("Not a triangle", isTriangle(1, 2, 199));
	EXPECT_EQ("Not a triangle", isTriangle(1, 2, 200));
	EXPECT_EQ("Not a triangle", isTriangle(1, 100, 1));
	EXPECT_EQ("Not a triangle", isTriangle(1, 100, 2));
	EXPECT_EQ("Not a triangle", isTriangle(1, 100, 199));
	EXPECT_EQ("Not a triangle", isTriangle(1, 100, 200));
	EXPECT_EQ("Not a triangle", isTriangle(1, 199, 1));
	EXPECT_EQ("Not a triangle", isTriangle(1, 199, 2));
	EXPECT_EQ("Not a triangle", isTriangle(1, 199, 100));
	EXPECT_EQ("Not a triangle", isTriangle(1, 199, 200));
	EXPECT_EQ("Not a triangle", isTriangle(1, 200, 1));
	EXPECT_EQ("Not a triangle", isTriangle(1, 200, 2));
	EXPECT_EQ("Not a triangle", isTriangle(1, 200, 100));
	EXPECT_EQ("Not a triangle", isTriangle(1, 200, 199));
	EXPECT_EQ("Not a triangle", isTriangle(2, 1, 1));
	EXPECT_EQ("Not a triangle", isTriangle(2, 1, 100));
	EXPECT_EQ("Not a triangle", isTriangle(2, 1, 199));
	EXPECT_EQ("Not a triangle", isTriangle(2, 1, 200));
	EXPECT_EQ("Not a triangle", isTriangle(2, 2, 100));
	EXPECT_EQ("Not a triangle", isTriangle(2, 2, 199));
	EXPECT_EQ("Not a triangle", isTriangle(2, 2, 200));
	EXPECT_EQ("Not a triangle", isTriangle(2, 100, 1));
	EXPECT_EQ("Not a triangle", isTriangle(2, 100, 2));
	EXPECT_EQ("Not a triangle", isTriangle(2, 100, 199));
	EXPECT_EQ("Not a triangle", isTriangle(2, 100, 200));
	EXPECT_EQ("Not a triangle", isTriangle(2, 199, 1));
	EXPECT_EQ("Not a triangle", isTriangle(2, 199, 2));
	EXPECT_EQ("Not a triangle", isTriangle(2, 199, 100));
	EXPECT_EQ("Not a triangle", isTriangle(2, 200, 1));
	EXPECT_EQ("Not a triangle", isTriangle(2, 200, 2));
	EXPECT_EQ("Not a triangle", isTriangle(2, 200, 100));
	EXPECT_EQ("Not a triangle", isTriangle(100, 1, 1));
	EXPECT_EQ("Not a triangle", isTriangle(100, 1, 2));
	EXPECT_EQ("Not a triangle", isTriangle(100, 1, 199));
	EXPECT_EQ("Not a triangle", isTriangle(100, 1, 200));
	EXPECT_EQ("Not a triangle", isTriangle(100, 2, 1));
	EXPECT_EQ("Not a triangle", isTriangle(100, 2, 2));
	EXPECT_EQ("Not a triangle", isTriangle(100, 2, 199));
	EXPECT_EQ("Not a triangle", isTriangle(100, 2, 200));
	EXPECT_EQ("Not a triangle", isTriangle(100, 100, 200));
	EXPECT_EQ("Not a triangle", isTriangle(100, 199, 1));
	EXPECT_EQ("Not a triangle", isTriangle(100, 199, 2));
	EXPECT_EQ("Not a triangle", isTriangle(100, 200, 1));
	EXPECT_EQ("Not a triangle", isTriangle(100, 200, 2));
	EXPECT_EQ("Not a triangle", isTriangle(100, 200, 100));
	EXPECT_EQ("Not a triangle", isTriangle(199, 1, 1));
	EXPECT_EQ("Not a triangle", isTriangle(199, 1, 2));
	EXPECT_EQ("Not a triangle", isTriangle(199, 1, 100));
	EXPECT_EQ("Not a triangle", isTriangle(199, 1, 200));
	EXPECT_EQ("Not a triangle", isTriangle(199, 2, 1));
	EXPECT_EQ("Not a triangle", isTriangle(199, 2, 2));
	EXPECT_EQ("Not a triangle", isTriangle(199, 2, 100));
	EXPECT_EQ("Not a triangle", isTriangle(199, 100, 1));
	EXPECT_EQ("Not a triangle", isTriangle(199, 100, 2));
	EXPECT_EQ("Not a triangle", isTriangle(199, 200, 1));
	EXPECT_EQ("Not a triangle", isTriangle(200, 1, 1));
	EXPECT_EQ("Not a triangle", isTriangle(200, 1, 2));
	EXPECT_EQ("Not a triangle", isTriangle(200, 1, 100));
	EXPECT_EQ("Not a triangle", isTriangle(200, 1, 199));
	EXPECT_EQ("Not a triangle", isTriangle(200, 2, 1));
	EXPECT_EQ("Not a triangle", isTriangle(200, 2, 2));
	EXPECT_EQ("Not a triangle", isTriangle(200, 2, 100));
	EXPECT_EQ("Not a triangle", isTriangle(200, 100, 1));
	EXPECT_EQ("Not a triangle", isTriangle(200, 100, 2));
	EXPECT_EQ("Not a triangle", isTriangle(200, 100, 100));
	EXPECT_EQ("Not a triangle", isTriangle(200, 199, 1));
}
