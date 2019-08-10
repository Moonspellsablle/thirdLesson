#include <iostream>
#include <cstdint>

int main() {
  std::cout << "Please, enter a count of input elements, and after that - input your numbers (I will find if this numbers can divide to 3): ";
  uint16_t countOfElements;
  std::cin >> countOfElements;

  uint16_t valueOfUserData;
  uint32_t result = 0;

  for (size_t i = 0; i < countOfElements; ++i) {
    uint32_t divider = 10;
    std::cin >> valueOfUserData;
    while (!(valueOfUserData < (divider / 10))) {
      result += (valueOfUserData % divider) / (divider / 10);
      divider = divider * 10;
    }
  }

  std::cout << ((result % 3) ? "No\n" : "Yes\n");

  return 0;
}
