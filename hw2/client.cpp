#include "client.h"
void CLIENT::ChangeServerName()
{
    std::cout<<"Please ChangeServerName"<<std::endl;
    std::string name;
    std::cin>>name;
    ServerName=name;
}

std::string CLIENT::GetServerName()
{
    return ServerName;
}

