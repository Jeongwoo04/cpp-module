#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap( std::string name );
    FragTrap(const FragTrap& fragtrap);
    ~FragTrap();

    FragTrap& operator=(const FragTrap& fragtrap);

    void attack(std::string const & target);
    void highFivesGuys( void );
};

#endif
