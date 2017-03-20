#include "triangle.h"

string isTriangle(int a, int b, int c) {
    string s;
    bool rangeA = true, rangeB = true, rangeC = true;

    if(a < 1 || a > 200)
        rangeA = false;
    if(b < 1 || b > 200)
        rangeB = false;
    if(c < 1 || c > 200)
        rangeC = false;

    if(!rangeA && !rangeB && !rangeC)
        return "Value of a,b,c is not in the range of permitted values";
    else if(!rangeA && !rangeB)
        return "Value of a,b is not in the range of permitted values";
    else if(!rangeB && !rangeC)
        return "Value of b,c is not in the range of permitted values";
    else if(!rangeA && !rangeC)
        return "Value of a,c is not in the range of permitted values";
    else if(!rangeA)
        return "Value of a is not in the range of permitted values";
    else if(!rangeB)
        return "Value of b is not in the range of permitted values";
    else if(!rangeC)
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
