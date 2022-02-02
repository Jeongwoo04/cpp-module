#include "Weapon.hpp"

Weapon::Weapon( std::string str )
{
    name = str;
}

void    Weapon::setType( std::string str )
{
    name = str;
}

const std::string& Weapon::getType( void )
{
    return (name);
}