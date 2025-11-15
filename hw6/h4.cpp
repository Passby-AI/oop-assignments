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
    //使用getline函数获取输入流内容，不会因为空格提前终止。
    getline(cin,s);

    int sum=0;

    for(int i=0;i<s.length();i++)
    {
        //使用isaplha函数判断字符是否是字母
        if(isalpha(s[i])) sum++; 
    }
    
    cout<<sum<<endl;

}
