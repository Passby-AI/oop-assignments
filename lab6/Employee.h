#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
class Employee
{
    public:
        Employee()=default;
        Employee(const std::string& n,const std::string& a,const std::string& c,const std::string& p):name(n),adress(a),city(c),post_code(p){}
        void change_name(std::string &n){
            name=n;
        }
        void display()
        {
            std::cout<<"name: "<<name<<std::endl;
            std::cout<<"adress: "<<adress<<std::endl;
            std::cout<<"city: "<<city<<std::endl;
            std::cout<<"post_code"<<post_code<<std::endl;
        }
        friend std::ostream& operator<<(std::ostream&,Employee&);
    private:
        std::string name,adress,city,post_code;

};
inline std::ostream& operator<<(std::ostream& os,Employee& e)
{
    os<<e.name<<std::endl;
    os<<e.adress<<std::endl;
    os<<e.city<<std::endl;
    os<<e.post_code;
    return os;

}
#endif
