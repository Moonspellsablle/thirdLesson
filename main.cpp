#include<iostream>

int main() {
  int bottom_trees_count;
  do {
    std::cout << "Enter count of bottom fir-trees range[3..59]: " << std::endl;
    std::cin >> bottom_trees_count;
  } while (!(bottom_trees_count >+ 3 && bottom_trees_count <= 59));

  if (bottom_trees_count % 2 == 0) {
      bottom_trees_count += 1;
  }
  for (int line_trees_count = 1; line_trees_count <= bottom_trees_count; line_trees_count += 2) {
    std::cout << std::string((bottom_trees_count - line_trees_count) / 2, ' ') << std::string(line_trees_count, '*') << std::string((bottom_trees_count - line_trees_count) / 2, ' ') << std::endl;
  }
  return 0;
}
