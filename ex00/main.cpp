#include "Zombie.hpp"

int main(void)
{
	//using newZombie
	Zombie*	heap_zombie = newZombie("heap_zombie");
	heap_zombie->announce();
	delete heap_zombie;

	//using randomChump
	randomChump("stack_zombie");

	return (0);
}