#include <iostream>
#include "Employee.h"

using namespace std;

char * link(char* a,char*b)
{
    int m=0;
    int n=0;
    while(a[m]!='\0')
        m++;
    while(b[n]!='\0')
        n++;
    char* c=new char[m+n+1];
    for(int i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for(int j=m;j<m+n;j++)
    {
        c[j]=b[j-m];
    }
    c[m+n]='\0';
    return c;
}

int main()
{
    Employee p[3]=
    {
        Employee("Alice","Ts","Beijing","123456"),
        Employee("John","Bj","Tianjing","1234890"),
        Employee("Lisa","GZ","Guangzhou","2345678")
    };
    char a[]="abc";
    char b[]="def";
    char* c=link(a,b);
    cout<<c<<endl;
}
