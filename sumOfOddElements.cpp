#include <iostream>

int main() {
  std::cout << "Please, enter a count of input elements: ";
  short int countOfElements;
  std::cin >> countOfElements;

  int sumOfOddElements = 0;
  for (size_t i = 0; i < countOfElements; ++i) {
    std::cout << "Please, enter an element: ";
    short int element;
    std::cin >> element;
    if (!((element % 2) == 0)) {
      sumOfOddElements += element;
    }
  }

  std::cout << sumOfOddElements << std::endl;

  return 0;
}
