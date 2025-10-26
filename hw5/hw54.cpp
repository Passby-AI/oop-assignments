/*
 * 4. 定义 Boat 与 Car 两个类，二者都有 weight 属性，定义二者的一个友元函数 getTotalWeight()，计算二者的重量和
 */

#include <iostream>

using namespace std;
class Car;
class Boat
{
    public:
        Boat(float w):weight(w){}
        friend float getTotalWeight(const Boat& boat,const Car& car);
    private:
        float weight;
};

class Car
{
    public:
        Car(float w):weight(w){}
        friend float getTotalWeight(const Boat& boat,const Car& car);
    private:
        float weight;
};

float getTotalWeight(const Boat& boat,const Car& car)
{
    return boat.weight+car.weight;
}

int main()
{
    const Boat boat(1.f);
    const Car car(2.f);
    float sum=getTotalWeight(boat,car);
    cout<<"Totalweight:"<<sum<<endl;
    return 0;
    

}
