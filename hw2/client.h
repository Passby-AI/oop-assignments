#pragma once
#include <string>
#include <iostream>

class CLIENT
{
    public:
        CLIENT(){};
        CLIENT(std::string name):ServerName(name){}
        ~CLIENT(){};
        void ChangeServerName();
        std::string GetServerName();
    private:
        std::string ServerName;
        int ClientNum=0;

};
