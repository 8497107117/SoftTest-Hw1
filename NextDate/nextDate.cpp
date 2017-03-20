#include "nextDate.h"

bool leapyear(int y) {
    return y%4 == 0 ? y%100 == 0 ? y%400 == 0 ? true : false : true : false ;
}

string nextDate(int d, int m, int y) {
    string s = "";
    int nd, nm, ny;

    if(y < 1812 || y > 2012 || m < 1 || m > 12)
        return "not in valid date";

    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 ) {
        if(d < 1 || d > 31)
            return "not in valid date";

        if(d == 31 && m == 12) {
            nd = 1;
            nm = 1;
            if(y == 2012)
                return "not in valid date";
            else
                ny = y + 1;
        }
        else if(d == 31) {
            nd = 1;
            nm = m + 1;
            ny = y;
        }
        else {
            nd = d + 1;
            nm = m;
            ny = y;
        }
    }
    else if(m != 2) {
        if(d < 1 || d > 30)
            return "not in valid date";

        if(d == 30) {
            nd = 1;
            nm = m + 1;
            ny = y;
        }
        else {
            nd = d + 1;
            nm = m;
            ny = y;
        }
    }
    else {
        bool leap = leapyear(y);
        if(d < 1 || (d > 28 && !leap) || (d > 29 && leap))
            return "not in valid date";

        if((d == 28 && !leap) || (d == 29 && leap)) {
            nd = 1;
            nm = m + 1;
            ny = y;
        }
        else {
            nd = d + 1;
            nm = m;
            ny = y;
        }
    }
    
    s = to_string(nd) + "," + to_string(nm) + "," + to_string(ny);

    return s;
}
