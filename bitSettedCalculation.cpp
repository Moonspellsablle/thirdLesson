#include <iostream>
#include <stdint.h>

int main() {
  uint64_t userDataVariable;
  std::cout << "Please, enter number (I will calculate count of '1' bits): " << std::endl;
  std::cin >> userDataVariable;
  uint16_t count = 0;
  for(size_t shift = 0; userDataVariable >> shift; ++shift) {
    count += ((userDataVariable >> shift) & 1);
  }
  std::cout << count << std::endl;
}
