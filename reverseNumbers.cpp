#include <iostream>

int main() {
  std::cout << "Please, enter a number: ";
  int number;
  std::cin >> number;

  bool isPositive = true;
  if (number < 0) {
    isPositive = false;
    number *= -1;
  }

  std::string reverseNumber = "";
  while((number % 10) != 0) {
    reverseNumber += std::to_string(number % 10);
    number /= 10;
  }

  if (!isPositive) {
      reverseNumber = "-" + reverseNumber;
  }
  std::cout << reverseNumber << std::endl;

  return 0;
}
