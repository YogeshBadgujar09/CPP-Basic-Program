#include <iostream>

int main() {
  int scores[] = {10, 20, 30, 40, 50};  // declare an array of integers
  int* ps;  // declare a pointer to an integer

  ps = scores;  // assign the address of the first element of scores to ps

  std::cout << "Values in the array:" << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cout << "scores[" << i << "] = " << *(ps + i) << std::endl;
  }

  *(ps + 2) = 35;  // change the value at the third element of the array

  std::cout << "Values in the array after modification:" << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cout << "scores[" << i << "] = " << *(ps + i) << std::endl;
  }

  return 0;
}