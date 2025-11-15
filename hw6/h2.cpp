/*
 *2. 声明一个 int 型变量 a，一个 int 型指针 p，一个引用 r，通过 p 把 a 的值改为 10，通过 r 把 a 的值改为 5。
 */


#include <iostream>

using namespace std;

int main()
{
    //将a先初始化为1
    int a=1;
    //输出a的值
    cout<<"a: "<<a<<endl;
    //声明指针p和引用 r
    int *p=&a;
    int &r =a;
    //通过指针把值修改为10，输出此时a的值
    *p=10;
    cout<<"a: "<<a<<" *p: "<<*p<<endl;
    //通过引用修改为5，输出a值
    r=5;
    cout<<"a: "<<a<<" r: "<<r<<endl;
    return 0;
}
