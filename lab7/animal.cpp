#include <iostream>

using namespace std;

class Animal
{
    public:
        int age;
};

class Dog: Animal
{
    public:
        void SetAge(int n)
        {
            age=n;
        }
};

int main()
{
    Dog dog{};

    dog.SetAge(10);
}
