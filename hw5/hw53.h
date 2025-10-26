/*
 定义类 X、Y、Z，函数 h(X*)，满足：类 X 有私有成员 i，Y 的成员函数 g(X*) 是 X 的友元函数，实现对 X 的成员 i 加 1；类 Z 是类 X 的友元类，其成员函数 f(X*) 实现对 X 的成员 i 加 5；函数 h(X*) 是 X 的友元函数，实现对 X 的成员 i 加 10。在一个文件中定义和实现类，在另一个文件中实现 main() 函数。
 */
/*
 定义类 X、Y、Z，函数 h(X*)，满足：类 X 有私有成员 i，Y 的成员函数 g(X*) 是 X 的友元函数，实现对 X 的成员 i 加 1；类 Z 是类 X 的友元类，其成员函数 f(X*) 实现对 X 的成员 i 加 5；函数 h(X*) 是 X 的友元函数，实现对 X 的成员 i 加 10。在一个文件中定义和实现类，在另一个文件中实现 main() 函数。
 */
#include <iostream>

// 1. 前向声明 X，Y 的声明中会用到 X*
class X;

// 2. 定义 Y，但只 *声明* g()，不 *定义*
class Y
{
public:
    // 声明 g()。我们不能在这里定义它，
    // 因为 X 此时还是一个不完整的类型。
    void g(X* xptr);
};

// 3. 完整定义 X
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

// 4. 现在 X 是一个完整类型了，我们可以 *定义* Y::g
//    并且因为它在 X 中被声明为友元，它可以访问 X::i
void Y::g(X* xptr)
{
    // (*xptr).i = (*xptr).i + 1;
    // 使用 -> 操作符更简洁
    xptr->i += 1;
}

// 5. 定义 Z（并修复我上次提到的逻辑错误）
class Z
{
public:
    void f(X* xptr)
    {
        // 错误：x = *xptr;  这是在修改 Z 自己的成员 x
        // 正确：直接修改 xptr 指向的对象
        xptr->i += 5;
    }
private:
    // 这个成员 x 对于 f() 的功能来说是不必要的
    // X x; 
};

// 6. 定义 h()
void h(X* x)
{
    // (*x).i = (*x).i + 10;
    x->i += 10;
}


