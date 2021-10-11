#include <iostream>

int main() {
    double i, j;
    std::cin >> i >> j;

		std::cout.precision(12);
		std::cout << std::fixed;
    std::cout << i / j << std::endl;
    
    return 0;
}