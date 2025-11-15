/*
 * 4. 编写一个函数，统计一条英文句子中字母的个数，在主程序中实现输入输出。
 */

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    int sum=0;

    for(int i=0;i<s.length();i++)
    {
        if(isalpha(s[i])) sum++; 
    }
    
    cout<<sum<<endl;

}
