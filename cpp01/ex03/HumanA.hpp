#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"
//HumanA bob("Bob", club);

class   HumanA{
private:
    std::string name;
    Weapon &weapon;

public:
    HumanA(std::string str, Weapon &weapon);
    void    attack( void );
};


#endif