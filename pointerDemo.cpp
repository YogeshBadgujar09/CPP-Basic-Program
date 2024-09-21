#include <iostream>

using namespace std;

int main() {
  int x = 10;  // declare a variable x with value 10
  int* px;  // declare a pointer px to an integer

  px = &x;  // assign the address of x to px

  cout << "Value of x: " << x << endl;
  cout << "Address of x: " << &x << endl;
  cout << "Value of px: " << px << endl;
  cout << "Value at address px: " << *px << endl;

  *px = 20;  // change the value at the address px points to

  cout << "New value of x: " << x << endl;

  return 0;
}