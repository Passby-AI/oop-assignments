#include <iostream>
using namespace std;

class vehicle
{
    public:
       virtual  void Run()
        {
            cout<<"Car run"<<endl;
        }
        virtual void Stop()
        {
            cout<<"Car Stop"<<endl;
        }
};

class bicycle: virtual public vehicle
{
    public:
         virtual void Run()
        {
            cout<<"bicycle run"<<endl;
        }
        virtual void Stop()
        {
            cout<<"bicycle Stop"<<endl;
        }

};

class motorcar: virtual public vehicle
{
    public:
        void Run()
        {
            cout<<"motorcar run"<<endl;
        }
        void Stop()
        {
            cout<<"motorcar stop"<<endl;
        }
};

class motorcycle: public motorcar,public bicycle
{
    public:
        void  Run()
        {
            cout<<"motorcycle run"<<endl;
        }
        void Stop()
        {
            cout<<"motorcycle stop"<<endl;
        }
};

int main()
{
    motorcycle m1{};
    m1.Run();
    m1.Stop();
    bicycle b1{};
    b1.Run();
    b1.Stop();
    vehicle v{};
    v.Stop();
    v.Run();
    vehicle* ptr=&m1;
    ptr->Run();
    ptr->Stop();
    vehicle* ptr2=&b1;
    ptr2->Run();
    ptr2->Stop();
    return 0;
}

