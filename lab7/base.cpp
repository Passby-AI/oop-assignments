#include <iostream>

using namespace std;

class BaseClass
{
    public:
        BaseClass(int n=0)
        {
            this -> Number =n;
            cout<<"Created"<<endl;
        }
        ~BaseClass()
        {
            cout<<"Distroied"<<endl;
        }
    protected:
        int Number;
};

class DerivedClass:public BaseClass
{
    public:
    DerivedClass(int n):BaseClass(n)
    {
        cout<<"derived"<<endl;
    }
};

int main()
{
    DerivedClass derived(1);

}
