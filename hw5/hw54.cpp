/*
 * 4. 定义 Boat 与 Car 两个类，二者都有 weight 属性，定义二者的一个友元函数 getTotalWeight()，计算二者的重量和
 */

#include <iostream>

using namespace std;
//前向声明Car类
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
//友元函数getTotalWeight()，计算重量和

float getTotalWeight(const Boat& boat,const Car& car)
{
    return boat.weight+car.weight;
}

int main()
{
//调用构造函数，定义Boat类实例boat和Car类实例car
    const Boat boat(1.f);
    const Car car(2.f);
//计算实例car和boat的重量和 
   float sum=getTotalWeight(boat,car);
//打印两者的重量和
    cout<<"Totalweight:"<<sum<<endl;
    return 0;
    

}
