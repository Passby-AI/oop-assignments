/*
 * 3. 编写一个矩阵转置的函数，矩阵的行数和列数在程序中由用户输入。
 */
#include <iostream>

using namespace std;



void PrintTranspose(int** lines,int n,int m)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<lines[j][i]<<" "; 
        }
        cout<<endl;
    }
}
int main()
{
    int n,m;
    //获取行数，列数
    cout<<"The number of lines"<<endl;
    cin>>n;
    cout<<"The number of columns"<<endl;
    cin>>m;
    //声明一个指向长度为n的，元素为整型指针的数组的指针
    int** lines=new int*[n];
    for(int i=0;i<n;i++)
    {
        //每个指针元素指向一个长度为m的整型数组
        lines[i]=new int[m];
    }
    int s=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            lines[i][j]=s;
            s++;
            cout<<lines[i][j]<<" ";
        }
        cout<<endl;
    }

    

    PrintTranspose(lines,n,m);
    // 释放内存
    for(int i=0;i<n;i++)
    {
        //先释放每一行
        delete [] lines[i];
    }
    //释放储存行指针的数组
    delete [] lines;

    return 0;

    
}
