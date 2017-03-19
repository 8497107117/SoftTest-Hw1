#include "triangle.h"

string isTriangle(int a, int b, int c) {
    string s;

    if(a < 1 || a > 200)
        return "Value of a is not in the range of permitted values";
    else if(b < 1 || b > 200)
        return "Value of b is not in the range of permitted values";
    else if(c < 1 || c > 200)
        return "Value of c is not in the range of permitted values";

    if(a + b <= c || a + c <= b || b + c <= a)
        s = "Not a triangle";
    else if(a == b && b == c)
        s = "Equilateral";
    else if(a == b || b == c || c == a)
        s = "Isosceles";
    else
        s = "Scalene";

    return s;
}
