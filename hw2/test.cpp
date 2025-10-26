#include "client.h"
using namespace std;


int main()
{
    string n1;
    cin>>n1;
    CLIENT client1(n1);
    string a=client1.GetServerName();
    cout<<"name"<<a<<endl;
    client1.ChangeServerName();
    a=client1.GetServerName();
    cout<<"name"<<a<<endl;
}

