#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;
    int i = 0;

    zombie = zombieHorde(9, "zombie");
    while (i < 9)
    {
        zombie[i].announce();
        i++;
    }
    delete [] zombie;
    return (0);
}