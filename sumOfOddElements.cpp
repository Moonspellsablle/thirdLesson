#include <iostream>
#include <cstdint>

int main() {
  std::cout << "Please, enter a count of input elements [1..50], each of element must be in range [-60..90] (I will calculate summ of odd elements): ";
  uint16_t countOfElements;
  std::cin >> countOfElements;

  int32_t sumOfOddElements = 0;
  for (size_t i = 0; i < countOfElements; ++i) {
    std::cout << "Please, enter an element: ";
    int16_t element;
    std::cin >> element;
    if ((element % 2) != 0) {
      sumOfOddElements += element;
    }
  }

  std::cout << sumOfOddElements << std::endl;

  return 0;
}
