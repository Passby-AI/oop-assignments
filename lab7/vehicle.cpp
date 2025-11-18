#include <iostream>

using namespace std;

class vehicle
{
    public:
        void Run()
        {
            cout<<"start up the vehicle"<<endl;
        }
        void Stop()
        {
            cout<<"Stop the vehicle"<<endl;
        }
    protected:
        int MaxSpeed,Weight;

};

class motorcar: virtual public vehicle
{
    protected:
        int SeatNum;
};

class bicycle: virtual public vehicle
{
    protected:
        int Height;
};

class motorcycle: public bicycle, public motorcar
{

};
int main()
{
  motorcycle moto{};
  moto.vehicle::Run();
  moto.motorcar::Stop();
  return 0;
}
