#include "Zombie.hpp"

int main(void)
{
	int	n = 10;
	Zombie	*zombies = zombieHorde(n, "zombie");
	if (zombies == NULL)
		return (0);
	for (int i = 0; i < n; i++)
	{
		std::cout << "[" << i << "] ";
		zombies[i].announce();
	}
	delete[] zombies;

	return (0);
}