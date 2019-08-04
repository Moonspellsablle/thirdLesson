#include <iostream>
#include <cstdint>

int main() {
  uint16_t bottom_leafs_count;
  std::cout << "Enter count of bottom leafs for christmas-tree: " << std::endl;
  std::cin >> bottom_leafs_count;

  bottom_leafs_count += (bottom_leafs_count % 2 == 0);

  for (size_t line_asterisks_count = 1; line_asterisks_count <= bottom_leafs_count; line_asterisks_count += 2) {
    uint16_t half_of_empty_space_count = ((bottom_leafs_count - line_asterisks_count) / 2);
    for (size_t i = 0; i < (half_of_empty_space_count + line_asterisks_count); ++i) {
      std::cout << ((i < half_of_empty_space_count) ? " " : "*");
    }
    std::cout << std::endl;
  }

  return 0;
}
