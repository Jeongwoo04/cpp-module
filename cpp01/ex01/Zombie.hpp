#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <sstream>

class Zombie {

private:
    std::string name;

public:
    Zombie();
    Zombie( std::string str );
    ~Zombie();
    
    void    announce( void );
    void    setName( std::string str );
};

Zombie* zombieHorde( int N, std::string str );

#endif