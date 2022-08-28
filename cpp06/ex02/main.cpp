#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base *generate(void)
{
	Base *ptr;

	srand(time(NULL));
	int r = rand() % 3;
	if (r == 0)
		ptr = new A();
	else if (r == 1)
		ptr = new B();
	else
		ptr = new C();

	return (ptr);
}

void identify(Base *p)
{
	Base *tmp;

	tmp = dynamic_cast<A *>(p);
	if (tmp != NULL)
	{
		std::cout << "A";
		return;
	}
	tmp = dynamic_cast<B *>(p);
	if (tmp != NULL)
	{
		std::cout << "B";
		return;
	}
	tmp = dynamic_cast<C *>(p);
	if (tmp != NULL)
	{
		std::cout << "C";
		return;
	}
	std::cerr << "Can't cast (A,B,C)" << std::endl;
}

void identify(Base &p)
{
	Base tmp;

	try
	{
		tmp = dynamic_cast<A &>(p);
		std::cout << "A";
		return;
	}
	catch (std::exception &e)
	{
	}

	try
	{
		tmp = dynamic_cast<B &>(p);
		std::cout << "B";
		return;
	}
	catch (std::exception &e)
	{
	}

	try
	{
		tmp = dynamic_cast<C &>(p);
		std::cout << "C";
		return;
	}
	catch (std::exception &e)
	{
	}

	std::cerr << "Can't cast (A,B,C)" << std::endl;
}

int main()
{
	Base *base = generate();

	std::cout << "Pointer:[Type: ";
	identify(base);
	std::cout << "]" << std::endl;

	std::cout << "Reference:[Type: ";
	identify(*base);
	std::cout << "]" << std::endl;

	delete base;
}