#include "Functor.h"

Functor::Functor() : _sum(0), _count(0) {}

void Functor::operator()(std::vector<int>& v)
{
	if (!v.empty())
	{
		_sum = 0;
		_count = 0;
		for (const int& elem : v)
		{
			if (!(elem % 3))
			{
				_sum += elem;
				++_count;
			}
		}
	}
}

int Functor::getSum()
{
	return _sum;
};

int Functor::getCount()
{
	return _count;
};