#pragma once
#include <iostream>
#include <vector>
class Functor
{
private:
	int _count = 0;
	int _sum = 0;

public:
	Functor();

	void operator()(std::vector<int>& v);
	int getSum();
	int getCount();
};