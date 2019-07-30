#include <iostream>

int main() {
  unsigned long int userDataVariable;
  short int userDataShift;
  std::cout << "Please, enter number and bit shift, separated by a space: ";
  std::cin >> userDataVariable;
  std::cin >> userDataShift;
  if ((userDataVariable >> (userDataShift - 1)) & 1) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }
}
