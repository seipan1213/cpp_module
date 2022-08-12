#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::complain(std::string level)
{
	int filter_level = 0;

	void (Harl::*fpFunc[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	std::string enum_level[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(enum_level[i]))
			break;
		filter_level++;
	}

	if (filter_level == 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

	switch (filter_level)
	{
	case 0:
		(this->*fpFunc[0])();
		(this->*fpFunc[1])();
		(this->*fpFunc[2])();
		(this->*fpFunc[3])();
		break;
	case 1:
		(this->*fpFunc[1])();
		(this->*fpFunc[2])();
		(this->*fpFunc[3])();
		break;
	case 2:
		(this->*fpFunc[2])();
		(this->*fpFunc[3])();
		break;
	case 3:
		(this->*fpFunc[3])();
		break;
	}
}
