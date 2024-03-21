#include "Functor.h"

template<typename V>
std::ostream& operator<<(std::ostream& out, const std::vector<V>& vect)
{
	for (const auto& val : vect) out << val << " ";
	return out;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");

	std::vector<int> v{ 1, 3, 6, 12, 10, 25 };
	Functor f;
	f(v);
	std::cout << "[IN]: " << v << std::endl;
	std::cout << "[OUT]: get_sum() = " << f.getSum() << std::endl;
	std::cout << "[OUT]: get_count() = " << f.getCount() << std::endl;

	return 0;
	
}