

#include "change.h"
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
void change(int& a, int& b) {
    cout << "前"
         << "a=" << a << "  b=" << b << endl;
    int c = 0;
    c = a;
    a = b;
    b = c;
    cout << "a=" << a << "  b=" << b << endl;
}