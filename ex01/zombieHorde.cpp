#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cout << "Spawn more overlords..." << std::endl;
        return (NULL);
    }
	Zombie* zombies = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombies[i].SetName(name);
    }
    return zombies;
}