/*
 *2.在函数 fn1() 中定义一个静态变量 n，fn1() 中对 n 的值加 1，在主函数中，调用 fn1() 10 次，显示 n 的值。
 */

#include <iostream>

using namespace std;
void fn1()
{
//在函数fn1()定义一个静态变量n
    static int n=0;
    n++;
//打印加1后当前n的值
    cout<<n<<endl;
}

int main()
{
//通过for循环调用10次n
    for(int i=0;i<10;i++)
    {
//显示这是第几次调用
        cout<<i+1<<":"<<endl;
        fn1();
    }
}
