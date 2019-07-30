#include <iostream>
#include <string>

int main() {
  std::cout << "Please, enter a count of input elements: ";
  short int countOfElements;
  std::cin >> countOfElements;

  std::string allElementsData = "";
  std::cout << "Please, enter elements separeted by space: ";
  for (size_t i = 0; i < countOfElements; ++i) {
      int temp;
      std::cin >> temp;
      allElementsData += std::to_string(temp);
  }

  bool isSuccessfullResult = false;
  std::string tempAllElementsData = allElementsData;
  for (size_t i = 0; i < allElementsData.length(); ++i) {
    for (size_t j = (i + 1); j < allElementsData.length(); ++j) {
      if (j < allElementsData.length()) {
        std::swap(tempAllElementsData[i], tempAllElementsData[j]);
        if ((tempAllElementsData[0] != '0') && ((std::stoi(tempAllElementsData) % 3) == 0)) {
          isSuccessfullResult = true;
          break;
          //std::cout << "Result: " << tempAllElementsData << std::endl;
        }
        tempAllElementsData = allElementsData;
      }
    }
  }
  
  if (isSuccessfullResult) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }

  return 0;
}
