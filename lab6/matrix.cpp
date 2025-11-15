#include <iostream>

using namespace std;

auto Translate(int a[3][3])-> int(*)[3]
{
    int (*result)[3]=new int[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            result[j][i]=a[i][j];
        }
    }
    return result;

}


int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int(*result)[3]=Translate(a);
    cout << "转置矩阵 (3x3 形式): " << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    delete[] result;
}
