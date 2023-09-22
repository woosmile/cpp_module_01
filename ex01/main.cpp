#include "Zombie.hpp"

int main(void)
{
	Zombie*	zombies = zombieHorde(20, "test");
	
	for (int i = 0; i < 20; i++)
	{
		std::cout << i << " ";
		zombies[i].announce();
	}
	delete[] zombies;

	return (0);
}