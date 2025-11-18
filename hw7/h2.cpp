#include <iostream>
#include <string>
using namespace std;

class Document
{
    protected:
        string name;
};

class Book: public Document
{
    private:
        int pageCount;
};

int main()
{
    return 0;
}
