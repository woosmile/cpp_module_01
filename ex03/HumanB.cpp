#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;	
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;

}