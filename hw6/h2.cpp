/*
 *2. 声明一个 int 型变量 a，一个 int 型指针 p，一个引用 r，通过 p 把 a 的值改为 10，通过 r 把 a 的值改为 5。
 */


#include <iostream>

using namespace std;

int main()
{
    int a=1;
    cout<<"a: "<<a<<endl;
    int *p=&a;
    int &r =a;
    *p=10;
    cout<<"a: "<<a<<" *p: "<<*p<<endl;
    r=5;
    cout<<"a: "<<a<<" r: "<<r<<endl;
    return 0;
}
