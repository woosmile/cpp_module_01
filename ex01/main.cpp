#include "Zombie.hpp"

int main(void)
{
	int	n = 0;
	Zombie	*zombies = zombieHorde(n, "zombie");
	
	for (int i = 0; i < n; i++)
	{
		std::cout << "[" << i << "] ";
		zombies[i].announce();
	}
	delete[] zombies;

	return (0);
}