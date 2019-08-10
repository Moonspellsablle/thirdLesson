#include <iostream>
#include <cstdint>
#include <cmath> 

int main() {
  std::cout << "Please, enter a number (I will revert it): ";
  int32_t number;
  std::cin >> number;

  bool isNumberNegative = (number < 0);
  if (isNumberNegative) {
    number *= -1;
  }

  int16_t countOfDigitsInNumber;
  int32_t resultNumber = number;
  for (countOfDigitsInNumber = 0; resultNumber != 0; ++countOfDigitsInNumber) {
    resultNumber /= 10;
  }

  resultNumber = 0;

  for (int16_t multiplier = --countOfDigitsInNumber; multiplier >= 0; --multiplier, number /= 10) {
    resultNumber += (number % 10) * pow(10, multiplier);
  }

  std::cout << (isNumberNegative ? resultNumber * (-1) : resultNumber);
  std::cout << std::endl;

  return 0;
}
