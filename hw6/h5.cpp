/*
 * 5. 编写函数 void reverse(string &s)，用递归算法使字符串 s 倒序。
 */

#include <iostream>
#include <string>

using namespace std;

void reverse(string &s)
{
    for(int i=s.length()-1;i>=0;i--)
        cout<<s[i];
}
int main()
{
    string s;
    cin>>s;

    reverse(s);
    cout<<endl;
}
