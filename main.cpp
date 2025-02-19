#include <stdlib.h>
#include <iostream>
#include <string>
#include "change.h"
using namespace std;

int main() {
    cout << "hello world!" << endl;
    int a = 10;
    int b = 20;
    change(a, b);
    cout << "a=" << a << "  b=" << b << endl;
    cout << "------------" << endl;

    system("pause");
    return 0;
}
