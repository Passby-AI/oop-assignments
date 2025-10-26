/*
 *2.在函数 fn1() 中定义一个静态变量 n，fn1() 中对 n 的值加 1，在主函数中，调用 fn1() 10 次，显示 n 的值。
 */

#include <iostream>

using namespace std;
void fn1()
{
    static int n=0;
    n++;
    cout<<n<<endl;
}

int main()
{
    for(int i=0;i<10;i++)
    {
        cout<<i<<":"<<endl;
        fn1();
    }
}
