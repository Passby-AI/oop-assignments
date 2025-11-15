/*
 *1. 声明一个有 5 个元素的 int 型数组，在程序中提示用户输入元素值，最后再在屏幕上显示出来。
 */

#include <iostream>

using namespace std;

int main()
{
    //将数组每个元素初始化为0，避免垃圾值的干扰
    int a[5]={0};

    //使用for循环获取每一个字符
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    //输出
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
