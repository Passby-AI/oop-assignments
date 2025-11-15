/*
 * 3. 编写一个矩阵转置的函数，矩阵的行数和列数在程序中由用户输入。
 */
#include <iostream>

using namespace std;



void Reverse(int** lines,int n,int m)
{
    //int (*result)[n]= new int[n][m];
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
    cout<<"The number of lines"<<endl;
    cin>>n;
    cout<<"The number of columns"<<endl;
    cin>>m;
    int** lines=new int*[n];
    for(int i=0;i<n;i++)
    {
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

    

    Reverse(lines,n,m);

    
}
