#include <iostream>

int main() {
  std::cout << "Please, enter a number: ";
  uint number;
  std::cin >> number;

  uint count = 0;
  uint summ = 0;
  while (number > 0) {
    summ += number % 10;
    number /= 10;
    count += 1;
  }

  std::cout << "Sum: " << summ << std::endl;
  std::cout << "Average: " << (summ / float(count)) << std::endl;

  return 0;
}
