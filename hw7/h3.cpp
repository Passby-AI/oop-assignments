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
//声明指向BaseClass类型的指针p1,指向DerivedClass类型的指针p2,都指向DerivedClass的实例D
    BaseClass* p1 = &D;
    DerivedClass* p2 = &D;
//直接调用成员函数
    cout << "--- Object Call ---" << endl;
    D.fn1();
    D.fn2();
//通过指向基类指针调用函数
    cout << "--- Base Pointer Call ---" << endl;
    p1->fn1();
    p1->fn2(); 
//通过指向子类DerivedClass类型指针调用函数
    cout << "--- Derived Pointer Call ---" << endl;
    p2->fn1();
    p2->fn2(); 

    return 0;
}

