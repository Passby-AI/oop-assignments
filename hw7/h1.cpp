#include <iostream>
#include <string>

using namespace std;

class Mammal
{
    public:
        Mammal()
        {
            cout<<"Create a Mammal"<<endl;
        }
        ~Mammal()
        {
            cout<<"Destroy a Mammal"<<endl;
        }

};

class Dog:public Mammal
{
    public:
    Dog()
    {
        cout<<"Create a dog"<<endl;
    }
    ~Dog()
    {
        cout<<"Destroy a dog"<<endl;
    }
};

int main()
{
    Dog dog1{};
    return 0;
}

        
