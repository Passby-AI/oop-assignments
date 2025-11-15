#include "Book.h"

using namespace std;

/*
1、定义一个 Book 类，编写构造函数和析构函数并在 main() 中创建与销毁对象。
2、定义 Student 类并组合 Book 类，使用前向引用解决依赖问题并在 main() 中演示借书。
3、定义 struct Person 和 union Data，用 sizeof 比较结构体与联合体的内存占用。
4、定义 enum Weekday 并编写函数输出一周七天的名称。
*/
void print_weekday(int day);
struct Person
{
    int i;
} p;

union Data
{
    int j;
} d;

enum Weekday
{
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

int main()
{
    //  task2
    Book book1("红与黑");
    Book book2("红楼梦");
    Student stu1("小明");
    Student stu2("小王");
    Student stu3("小华");
    stu1.Borrow(book1);
    stu2.Borrow(book2);
    stu1.Return(book1);
    stu2.Return(book1);
    stu3.Return(book1);

    // task3
    cout << "size of struct is  " << sizeof(p) << "size of union is   " << sizeof(d) << endl;
    // task4
    for (int i = 1; i < 8; i++)
        print_weekday(i);
}

void print_weekday(int day)
{
    switch (day)
    {
    case MON:
        cout << "周一" << endl;
        break;
    case TUE:
        cout << "周二" << endl;
        break;
    case WED:
        cout << "周三" << endl;
        break;
    case THU:
        cout << "周四" << endl;
        break;
    case FRI:
        cout << "周五" << endl;
        break;
    case SAT:
        cout << "周六" << endl;
        break;
    case SUN:
        cout << "周日" << endl;
        break;
    }
}