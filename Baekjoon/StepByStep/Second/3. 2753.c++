#include <iostream>

int main() {
    int A;
    std:: cin >> A;

    if (A % 4 == 0) {
      if (A % 100 != 0 || A % 400 == 0) {
        std::cout << 1 << std::endl;
      } else 
        std::cout << 0 << std::endl;
    } else 
        std::cout << 0 << std::endl;
    return 0;
}