#include "Zombie.hpp"

int main(void)
{
	//using newZombie
	Zombie*	test1 = newZombie("test");
	test1->announce();
	test1->~Zombie();


	//using randomChump
	randomChump("foo1");
	randomChump("foo2");
	randomChump("foo3");
	randomChump("foo4");
	randomChump("foo5");

	//차이점
	//동적할당(new)을 통해서 만든 객체는 소멸자를 별도로 호출해줘야 사라짐 (사용자가 직접 제어 가능)
	//스택에 만들어진 객체는 더이상 실행할 것이 없으면 자동으로 소멸자가 호출되어서 사라짐
	return (0);

}