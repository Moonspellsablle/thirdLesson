#include <iostream>
#include <cstdint>

int main() {
  uint64_t userDataVariable;
  uint16_t userDataShift;
  std::cout << "Please, enter number and bit shift, separated by a space: (I will find, if the bit is setted): ";
  std::cin >> userDataVariable >> userDataShift;
  bool isBitSetted = (((userDataVariable >> (userDataShift - 1)) & 1) && (userDataShift > 0));
  std::cout << (isBitSetted ? "Yes\n" : "No\n");

  return 0;
}
