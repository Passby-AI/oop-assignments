#include <iostream>
using namespace std;
class Point
{
    public:
        friend ostream& operator<<(ostream&,Point&);
        friend istream& operator>>(istream&,Point&);
        Point& operator++();
        Point& operator--();
        Point operator++(int);
        Point operator--(int);
        Point(const int x,const int y):x(x),y(y){}
        Point():x(0),y(0){}

    private:
        int x,y;

};

ostream& operator<<(ostream &out, Point& point)
{
    out<<"("<<point.x<<","<<point.y<<")"<<endl;
    return out;
}

istream& operator>>( istream& in, Point&point)
{
    in>>point.x;
    in>>point.y;
    return in;
}

Point Point::operator++(int)
{
    Point temp=*this;
    (this->x)++;
    (this->y)++;
    return temp;
}

Point Point::operator--(int)
{
    Point temp=*this;
    (this->x)--;
    (this->y)--;
    return temp;
}

Point& Point::operator++()
{
    ++(this->x);
    ++(this->y);
    return *this;
}

Point& Point::operator--()
{
    --(this->x);
    --(this->y);
    return *this;
}




int main()
{
    Point p1(1,2);
    Point p2;
    cin>>p2;
    cout<<p1<<endl;
    cout<<p2<<endl;
    p1++;
    p2--;
    cout<<p1<<endl;
    cout<<p2<<endl;
    
}
