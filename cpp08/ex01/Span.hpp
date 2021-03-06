#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <random>
# include <time.h>
# include <algorithm>

class Span
{
private:
	unsigned long		_size;
	std::vector<int>	_span;

	Span(void);
public:
	~Span(void);
	Span(int N);
	Span(Span const& src);

	Span&	operator=(Span const& rhs);
	
	void	addNumber(int nb);
	int		shortestSpan(void);
	int		longestSpan(void);
	void	fillUp(void);
	void	printSpan(void);

	class SpanFullException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Span is full.");
		}
	};

	class NoSpanException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Cannot get a span with current data.");
		}
	};
};

int		randNum(void);

#endif