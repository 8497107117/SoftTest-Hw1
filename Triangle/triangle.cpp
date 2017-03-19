#include "triangle.h"

string isTriangle(int a, int b, int c) {
    string s;

    if(a + b <= c || a + c <= b || b + c <= a)
        s = "Not a triangle";
    else if(a == b && b == c)
        s = "Equilateral";
    else if(a == b || b == c || c == a)
        s = "Isosceles";

    return s;
}
