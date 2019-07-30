#include <iostream>

int main() {
  std::cout << "Please, enter a ticket number: ";
  int number;
  std::cin >> number;

  short int summ_first_part = 0;
  short int summ_second_part = 0;
  const short int COUNT_OF_DIGITS_IN_HALF_NUMBER = 3;
  const short int MAGIC_CONST = 10;

  for(size_t count = 0; number > 0; ++count) {
    if (count < (COUNT_OF_DIGITS_IN_HALF_NUMBER)) {
      summ_second_part += number % MAGIC_CONST;
    } else {
      summ_first_part += number % MAGIC_CONST;
    }
    number /= MAGIC_CONST;
  }

  if (summ_first_part == summ_second_part) {
    std::cout << "Your ticket is lucky" << std::endl;
  } else {
    std::cout << "Your ticket is not lucky" << std::endl;
  }

  return 0;
}
