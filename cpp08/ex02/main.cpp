#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	std::cout << "--------------------------" << std::endl;
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
	std::cout << "--------------------------" << std::endl;
	std::list<int> tList;
	tList.push_back(5);
	tList.push_back(17);
	std::cout << tList.back() << std::endl;
	tList.pop_back();
	std::cout << tList.size() << std::endl;
	std::cout << "--------------------------" << std::endl;
	tList.push_back(3);
	tList.push_back(5);
	tList.push_back(737);
	tList.push_back(0);
	std::list<int>::iterator lit = tList.begin();
	std::list<int>::iterator lite = tList.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::list<int> t(tList);
	std::cout << "--------------------------" << std::endl;
	MutantStack<int>	mstackcpy(mstack);
	it = mstackcpy.begin();
	ite = mstackcpy.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	return (0);
}