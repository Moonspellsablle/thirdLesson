#include <iostream>

int main() {
  unsigned long int userDataVariable;
  std::cout << "Please, enter number (I will calculate count of '1' bits): " << std::endl;
  std::cin >> userDataVariable;
  short int count = 0;
  for(size_t shift = 0; userDataVariable >> shift; ++shift) {
    if ((userDataVariable >> shift) & 1) {
      ++count;
    }
  }
  std::cout << count << std::endl;
}
