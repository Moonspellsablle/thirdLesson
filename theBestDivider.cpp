#include <iostream>

short int getSumOfDigits (long long number) {
  short int summ = 0;
  while (number > 0) {
    summ += number % 10;
    number /= 10;
  }
  return summ;
}

int main() {
  std::cout << "Please, enter a number: ";
  long long number;
  std::cin >> number;

  long long bestDivider = number;
  short int sumOfDigits = getSumOfDigits(number);

  for (size_t i = 1; i < (number / 2) + 1; ++i) {
    if (((number % i) == 0) && (getSumOfDigits(i) > sumOfDigits)) {
        bestDivider = i;
    }
  }

  std::cout << bestDivider << std::endl;

  return 0;
}