#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
    std::string name;
    unsigned int hitpoint;
    unsigned int energy;
    unsigned int damage;
public:
    ClapTrap();
    ClapTrap( std::string name );
    ClapTrap(const ClapTrap& claptrap);
    ~ClapTrap();

    ClapTrap& operator=(const ClapTrap& claptrap);

    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    unsigned int getDamage( void ) const;
};

#endif
