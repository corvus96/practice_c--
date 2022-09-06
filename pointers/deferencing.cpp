#include <iostream>

int main(){
    int *pointer;
    int a;
    a = 5;
    pointer = &a;
    *pointer = 10;
    std::cout << "pointer: " << pointer << std::endl;
    std::cout << "&a: " << &a << std::endl;
    std::cout << "&pointer: " << &pointer << std::endl;
    std::cout << "*pointer: " << *pointer << std::endl; // deferencing here
    std::cout << "a: " << a << std::endl;
}