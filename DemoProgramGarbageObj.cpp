#include<iostream>

class MyClass {
public:
    int x;
    MyClass() {} // No initialization
};

int main() {
    MyClass obj; // obj.x has a garbage value
    std::cout << obj.x << std::endl; // Prints a random value
    return 0;
}
