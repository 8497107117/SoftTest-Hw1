#include <iostream>
#include "nextDate.h"
#include "gtest/gtest.h"

using namespace std;

TEST(Normal_Boundary_Value_Test, bound_in_year) {
    EXPECT_EQ("16,6,1812", nextDate(15, 6, 1812));
    EXPECT_EQ("16,6,1813", nextDate(15, 6, 1813));
    EXPECT_EQ("16,6,2011", nextDate(15, 6, 2011));
    EXPECT_EQ("16,6,2012", nextDate(15, 6, 2012));
}

TEST(Normal_Boundary_Value_Test, bound_in_month) {
    EXPECT_EQ("16,1,1900", nextDate(15, 1, 1900));
    EXPECT_EQ("16,2,1900", nextDate(15, 2, 1900));
    EXPECT_EQ("16,11,1900", nextDate(15, 11, 1900));
    EXPECT_EQ("16,12,1900", nextDate(15, 12, 1900));
}

TEST(Normal_Boundary_Value_Test, bound_in_day) {
    //  30 days per month
    EXPECT_EQ("2,6,1900", nextDate(1, 6, 1900));
    EXPECT_EQ("3,6,1900", nextDate(2, 6, 1900));
    EXPECT_EQ("30,6,1900", nextDate(29, 6, 1900));
    EXPECT_EQ("1,7,1900", nextDate(30, 6, 1900));
    //  31 days per month
    EXPECT_EQ("2,7,1900", nextDate(1, 7, 1900));
    EXPECT_EQ("3,7,1900", nextDate(2, 7, 1900));
    EXPECT_EQ("31,7,1900", nextDate(30, 7, 1900));
    EXPECT_EQ("1,8,1900", nextDate(31, 7, 1900));
    //  28 or 29 dayse per month
    EXPECT_EQ("2,2,1900", nextDate(1, 2, 1900));
    EXPECT_EQ("3,2,1900", nextDate(2, 2, 1900));
    EXPECT_EQ("28,2,1900", nextDate(27, 2, 1900));
    EXPECT_EQ("1,3,1900", nextDate(28, 2, 1900));
}
