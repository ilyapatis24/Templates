#include "Square_func.h"

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Russian");
    auto number1 = 0;
    std::vector<int> vect{ 1,2,3 };
    std::cout << "[IN]: ";
    std::cin >> number1;
    std::cout << "[OUT]: " << square(number1) << "\n";
    std::cout << "[IN]: ";
    print_vector(vect);
    std::cout << std::endl;
    std::cout << "[OUT]: ";
    square(vect);
    print_vector(vect);
    return 0;
}