#include <iostream>
#include <cstdint>

int main() {
  uint64_t userDataVariable;
  uint16_t userDataShift;
  std::cout << "Please, enter number and bit shift, separated by a space: (I will find, if the bit is setted): ";
  std::cin >> userDataVariable >> userDataShift;
  bool isBitSetted = ((userDataShift > 0) && ((userDataVariable >> (userDataShift - 1)) & 1));
  std::cout << (isBitSetted ? "Yes\n" : "No\n");

  return 0;
}
