#include <iostream>
#include <cstdint>

uint32_t getSumOfDigits (uint64_t number) {
  uint32_t summ = 0;
  for (; number > 0; number /= 10) {
    summ += (number % 10);
  }
  return summ;
}

int main() {
  std::cout << "Please, enter a number (I will find the best divider): ";
  uint64_t number;
  std::cin >> number;

  uint64_t bestDivider = number;
  uint32_t sumOfDigits = getSumOfDigits(number);
  const uint64_t halfOfNumber = number / 2;

  for (size_t i = 1; i <= halfOfNumber; ++i) {
    if (((number % i) == 0) && (getSumOfDigits(i) > sumOfDigits)) {
      bestDivider = i;
    }
  }

  std::cout << bestDivider << std::endl;

  return 0;
}
