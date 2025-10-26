#pragma once
#include <string>
#include <iostream>
class CLIENT
{
    public:
        static void ChangeServerName();
    private:
        static std::string ServerName;
        static int ClientNum;
};
