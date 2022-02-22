#include "Span.hpp"

Span::Span(void)
{
	this->_size = 0;
	this->_span.reserve(0);
}

Span::~Span(void)
{
	this->_span.clear();
}

Span::Span(int N) : _size(N)
{
	this->_span.reserve(this->_size);
}

Span::Span(Span const& src) : _size(src._size), _span(src._span)
{

}

Span&	Span::operator=(Span const& rhs)
{
	std::vector<int>::iterator	it;

	this->_span.clear();
	this->_size = rhs._size;
	this->_span.reserve(this->_size);
	this->_span = rhs._span;
	return (*this);
}

void	Span::addNumber(int nb)
{
	if (this->_span.size() >= this->_size)
		throw SpanFullException();
	this->_span.push_back(nb);
}

int	Span::shortestSpan(void)
{
	int diff;
	std::vector<int>::iterator it;
	std::vector<int>::iterator nit;

	if (this->_span.size() <= 1)
		throw NoSpanException();
	std::sort(this->_span.begin(), this->_span.end());
	it = this->_span.begin();
	nit = it + 1;
	diff = *nit - *it;
	for (it = this->_span.begin(); it != this->_span.end(); it++)
	{
		nit = it + 1;
		if (nit == this->_span.end())
			return (diff);
		if ((*nit - *it) < diff)
			diff = *nit - *it;
	}
	return (diff);
}

int	Span::longestSpan(void)
{
	std::vector<int>::iterator it;
	std::vector<int>::iterator eit;
	if (this->_span.size() <= 1)
		throw NoSpanException();
	it = this->_span.begin();
	eit = this->_span.end();
	return (*std::max_element(it, eit) - *std::min_element(it, eit));
}

void	Span::fillUp(void)
{
	this->_span.assign(this->_size, 0);
	srand(time(0));
	std::generate(this->_span.begin(), this->_span.end(), randNum);
}

void	Span::printSpan(void)
{
	for (std::vector<int>::iterator it = this->_span.begin(); it != this->_span.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}

int		randNum(void)
{
	return (rand() % 100000);
}
