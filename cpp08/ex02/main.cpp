#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	{
		std::cout << "===MUTANT_STACk===" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << std::endl;
	}
	{
		std::cout << "===LIST===" << std::endl;
		std::list<int> list;
		list.push_back(5);
		list.push_back(17);
		std::cout << list.back() << std::endl;
		list.pop_back();
		std::cout << list.size() << std::endl;
		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);
		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;
	}
	{
		MutantStack<int> mstack;
		std::cout << mstack.empty() << std::endl;
		mstack.push(3);
		std::cout << mstack.empty() << std::endl;
		std::cout << std::endl;
	}
	{
		MutantStack<int> mstack;
		mstack.push(4);
		mstack.push(2);
		mstack.push(42);

		MutantStack<int> hoge;
		hoge = mstack;
		MutantStack<int>::iterator it = hoge.begin();
		MutantStack<int>::iterator ite = hoge.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;
	}
	{
		MutantStack<int> mstack;
		mstack.push(4);
		mstack.push(2);
		mstack.push(42);

		MutantStack<int> hoge(mstack);
		MutantStack<int>::iterator it = hoge.begin();
		MutantStack<int>::iterator ite = hoge.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
}