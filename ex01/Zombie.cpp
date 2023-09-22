#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "born to be die..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": goodbye..." << std::endl;
}

void	Zombie::SetName(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}