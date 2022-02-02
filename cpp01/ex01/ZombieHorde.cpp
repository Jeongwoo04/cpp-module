#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string str )
{
    Zombie *zombie;
    int i = 0;

    zombie = new Zombie[N];
    while (i < N)
    {
        std::stringstream stream;
        stream << i + 1;
        zombie[i].setName(str + stream.str());
        i++;
    }
    return (zombie);
}