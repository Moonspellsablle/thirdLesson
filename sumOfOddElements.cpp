#include <iostream>
#include <cstdint>

int main() {
  std::cout << "Please, enter a count of input elements [1..50], each of element must be in range [-60..90] (I will calculate summ of odd elements): ";
  uint16_t countOfElements;
  int16_t RANGE_LOWER_VALUE = 1;
  uint16_t RANGE_UPPER_VALUE = 50;
  while (!(std::cin >> countOfElements) || (countOfElements < RANGE_LOWER_VALUE || countOfElements > RANGE_UPPER_VALUE)) {
    std::cout << "Error! Re-Input count of elements in range [1..50]" << std::endl;
    std::cin.clear();
    std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
  }

  int32_t sumOfOddElements = 0;
  RANGE_LOWER_VALUE = -60;
  RANGE_UPPER_VALUE = 90;
  for (size_t i = 0; i < countOfElements; ++i) {
    std::cout << "Please, enter an element in range [-60..90]: ";
    int16_t element;
    while (!(std::cin >> element) || (element < RANGE_LOWER_VALUE || element > RANGE_UPPER_VALUE)) {
      std::cout << "Error! Re-Input count of elements in range [-60..90]" << std::endl;
      std::cin.clear();
      std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
    }
    if ((element % 2) != 0) {
      sumOfOddElements += element;
    }
  }

  std::cout << sumOfOddElements << std::endl;

  return 0;
}
