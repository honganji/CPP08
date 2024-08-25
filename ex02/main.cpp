#include "include/MutantStack.hpp"
#include <list>
#include <stack>

int main()
{
	{
		std::cout << "\033[31mTest for MutantStack class\033[0m" << std::endl;
		std::cout << "\033[31m---------------------------\033[0m" << std::endl;
		std::list<int> list;
		list.push_back(5);
		list.push_back(17);
		std::cout << "The element on the top: " << list.back() << std::endl;
		list.pop_back();
		std::cout << "The stack size: " << list.size() << std::endl;
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
			std::cout << "element: " << *it << std::endl;
			++it;
		}
	}
	std::cout << "\033[32m---------------------------\033[0m" << std::endl << std::endl;

	{
		std::cout << "\033[32mTest for MutantStack class\033[0m" << std::endl;
		std::cout << "\033[32m---------------------------\033[0m" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "The element on the top: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "The stack size: " << mstack.size() << std::endl;
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
			std::cout << "element: " << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "\033[32m---------------------------\033[0m" << std::endl << std::endl;
	return (0);
}
