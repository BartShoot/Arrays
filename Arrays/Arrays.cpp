#include <iostream>
#include "Array1D.h"

using namespace std;

int main()
{
    Array1D a1(4);
    Array1D a2(10);
    a2.SetValue(1, 2);
    a2.SetValue(3, 4);
    Array1D a3 = a2;
    a1.Display();
    a2.Display();
    a3.Display();

    a1 = a2;
    a2 = 4;
    a2[2] = 10;
    a3 = a2 - a2;

    cout << a1 << endl;
    cout << a2 << endl;
    cout << a3 << endl;
}