// Call by reference reduce memory usage because we don't create new data
#include <iostream>

void Increment(int *num);

int main(){
    int a = 25;
    std::cout << "Not increment a: " << a << std::endl;
    Increment(&a);
    std::cout << "Incremented a: " << a << std::endl;

}

void Increment(int *num){
    *num += 1;
}