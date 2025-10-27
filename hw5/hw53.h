/*
 定义类 X、Y、Z，函数 h(X*)，满足：类 X 有私有成员 i，Y 的成员函数 g(X*) 是 X 的友元函数，实现对 X 的成员 i 加 1；类 Z 是类 X 的友元类，其成员函数 f(X*) 实现对 X 的成员 i 加 5；函数 h(X*) 是 X 的友元函数，实现对 X 的成员 i 加 10。在一个文件中定义和实现类，在另一个文件中实现 main() 函数。
 */
#include <iostream>

//前向声明 X，Y 的声明中用到 X*
class X;

//定义 Y
class Y
{
public:
    // 声明 g()
    void g(X* xptr);
};

//完整定义 X
class X
{
    friend class Z; // Z 是友元类
    friend void h(X* x); // h 是友元函数
    friend void Y::g(X* x); // Y::g 是友元成员函数

public:
    void Print()
    {
        std::cout << i << std::endl;
    }

private:
    int i = 1;
};

//定义Y::g
void Y::g(X* xptr)
{
    xptr->i += 1;
}

//定义 Z
class Z
{
public:
    void f(X* xptr)
    {
        xptr->i += 5;
    }
};

//定义 h()
void h(X* x)
{
    x->i += 10;
}


