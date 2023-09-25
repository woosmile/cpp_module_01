//이 연습의 목표는 멤버 함수에 대한 포인터를 사용하는 것
#include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	void	(Harl::*f)( std::string level ) = &Harl::complain;

	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");

	(harl.*f)("debug");

}