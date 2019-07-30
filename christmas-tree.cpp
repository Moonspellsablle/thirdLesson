#include<iostream>

int main() {
  int bottom_leafs_count;
  std::cout << "Enter count of bottom leafs for christmas-tree: " << std::endl;
  std::cin >> bottom_leafs_count;

  const short int MAGIC_NUMBER = 2;

  if (bottom_leafs_count % MAGIC_NUMBER == 0) {
      bottom_leafs_count += 1;
  }

  std::string tree = "";
  for (size_t line_trees_count = 1; line_trees_count <= bottom_leafs_count; line_trees_count += MAGIC_NUMBER) {
    std::string half_of_empty_space = std::string(((bottom_leafs_count - line_trees_count) / MAGIC_NUMBER), ' ');
    std::string leafs = std::string(line_trees_count, '*');
    tree += half_of_empty_space + leafs + "\n";
  }
  std::cout << tree;
  return 0;
}
