#include <iostream>
#include "Array1D.h"

using namespace std;

int main()
{
    Array1D a1(4);
    Array1D a2(5);
    a2.SetValue(1, 2);
    a2.SetValue(3, 4);
    Array1D a3 = a2;
    a1.Display();
    a2.Display();
    a3.Display();

    //cout << a << endl;
    //cout << a[1] << endl;
}