#include "hw53.h"
#include <iostream>
using namespace std;
int main()
{
    X x;
    X* xptr=&x;
    Y y;
    Z z;

    y.g(xptr);
    z.f(xptr);
    h(xptr);
    cout<<"x:"<<endl;
    x.Print();
}


