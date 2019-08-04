#include <iostream>
#include <cstdint>

int main() {
  std::cout << "Please, enter a ticket number: ";
  uint64_t number;
  std::cin >> number;

  uint32_t summ_first_part = 0;
  uint32_t summ_second_part = 0;

  uint16_t countOfDigitsInNumber = 1;

  uint64_t tmp = number;
  while ((tmp / 10) != 0) {
    ++countOfDigitsInNumber;
    tmp /= 10;
  }
  if (countOfDigitsInNumber != 6) {
    std::cout << "Ticket must include only 6 digit. Please, try again later." << std::endl;
    return 0;
  }
  uint16_t countOfDigitsInHalfNumber = countOfDigitsInNumber / 2;

  for(size_t count = 0; number > 0; ++count) {
    if (count < (countOfDigitsInHalfNumber)) {
      summ_second_part += (number % 10);
    } else {
      summ_first_part += (number % 10);
    }
    number /= 10;
  }

  std::cout << ((summ_first_part == summ_second_part) ? "Your ticket is lucky\n" : "Your ticket is not lucky\n");

  return 0;
}
