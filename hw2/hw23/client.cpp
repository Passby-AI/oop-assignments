#include "client.h"
std::string CLIENT::ServerName;
int CLIENT::ClientNum=0;
void CLIENT::ChangeServerName()
{
    std::cout<<"please put in"<<std::endl;
    std::string name;
    std::cin>>name;
    ServerName=name;
}
