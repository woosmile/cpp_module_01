#include "Zombie.hpp"

int main(void)
{
	//using newZombie
	Zombie*	heap_zombie = newZombie("heap_zombie");
	heap_zombie->announce();
	delete heap_zombie;

	//using randomChump
	randomChump("randomChump1");
	randomChump("randomChump2");
	randomChump("randomChump3");
	randomChump("randomChump4");
	randomChump("randomChump5");

	return (0);
}