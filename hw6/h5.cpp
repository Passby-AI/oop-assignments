/*
 * 5. 编写函数 void reverse(string &s)，用递归算法使字符串 s 倒序。
 */

#include <iostream>
#include <string>

using namespace std;

void reverse(string &s)
{
    if(s.length()<=1)
    {
        //当长度小于等于1时，正序倒序一样，直接返回
        return;
    }
    //保存第一个字符
    char first=s[0];
    //保存除第一个字符外剩下的字符
    string rest=s.substr(1);
    //递归，将剩下的字符串也倒置
    reverse(rest);
    s=rest+first;
}
int main()
{
    string s;
    cin>>s;

    reverse(s);
    cout<<s<<endl;
}
