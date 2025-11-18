#include <iostream>
#include <string>

using namespace std;

class BaseClass
{
    public:
        void fn1()
        {
            cout<<"BaseClass fn1"<<endl;
        }
        void fn2()
        {
            cout<<"BaseClass fn2"<<endl;
        }
};

class DerivedClass: public BaseClass
{
    public:
        void fn1()
        {
            cout<<"DerivedClass fn1"<<endl;
        }
        void fn2()
        {
            cout<<"DerivedClass fn2"<<endl;
        }
};

int main()
{

    DerivedClass D{};
    BaseClass* p1 = &D;
    DerivedClass* p2 = &D;

    cout << "--- Object Call ---" << endl;
    D.fn1();
    D.fn2();

    cout << "--- Base Pointer Call ---" << endl;
    p1->fn1();
    p1->fn2(); 

    cout << "--- Derived Pointer Call ---" << endl;
    p2->fn1();
    p2->fn2(); 

    return 0;
}

