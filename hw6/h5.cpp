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
        return;
    }
    char first=s[0];
    string rest=s.substr(1);
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
