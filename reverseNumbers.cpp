#include <iostream>
#include <cstdint>

int main() {
  std::cout << "Please, enter a number (I will revert it): ";
  int32_t number;
  std::cin >> number;

  if (number < 0) {
    std::cout << "-";
    number *= -1;
  }

  for (; (number > 0); (number /= 10)) {
    std::cout << (number % 10);
  }

  std::cout << std::endl;

  return 0;
}
