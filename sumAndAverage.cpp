#include <iostream>
#include <cstdint>


int main() {
  std::cout << "Please, enter a number (I will calculate summ, and average of digits in your number): ";
  uint32_t number;
  std::cin >> number;

  uint16_t count = 0;
  uint32_t summ = 0;

  for (; (number > 0); ++count, number /= 10) {
    summ += number % 10;
  }

  std::cout << "Sum: " << summ << std::endl;
  std::cout << "Average: " << (summ / count + 0.f) << std::endl;

  return 0;
}
