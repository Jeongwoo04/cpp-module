#include "Zombie.hpp"

Zombie::Zombie()
{
    name = "no name zombie";
}

Zombie::Zombie( std::string str )
{
    name = str;
}

Zombie::~Zombie()
{
    std::cout << name << " : is gone" << std::endl;
}

void    Zombie::setName( std::string str )
{
    name = str;
}

void    Zombie::announce( void )
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}