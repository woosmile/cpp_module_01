#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;	
}

void	HumanB::attack()
{
	if (_weapon == NULL)
	{
		std::cout << _name << " is unarmed." << std::endl;
		exit(0);
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}