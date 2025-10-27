/*
 *1. 在一个文件中定义一个全局变量 n，主函数 main()，在另一个文件中定义函数 fn1()，在 main() 中对 n 赋值，再调用 fn1()，在 fn1() 中也对 n 赋值，显示 n 最后的值。

2.在函数 fn1() 中定义一个静态变量 n，fn1() 中对 n 的值加 1，在主函数中，调用 fn1() 10 次，显示 n 的值。

3. 定义类 X、Y、Z，函数 h(X*)，满足：类 X 有私有成员 i，Y 的成员函数 g(X*) 是 X 的友元函数，实现对 X 的成员 i 加 1；类 Z 是类 X 的友元类，其成员函数 f(X*) 实现对 X 的成员 i 加 5；函数 h(X*) 是 X 的友元函数，实现对 X 的成员 i 加 10。在一个文件中定义和实现类，在另一个文件中实现 main() 函数。

4. 定义 Boat 与 Car 两个类，二者都有 weight 属性，定义二者的一个友元函数 getTotalWeight()，计算二者的重量和。
 */
#include "hw51.h"
#include <iostream>
static int n;
using namespace std;
int main()
{
	//对n赋值
    n=5;
//显示当前n的值
    cout<<n<<endl;
//调用fn1()
   fn1(n); 
//再次显示当前n的值
    cout<<n<<endl;
    return 0;


}


