// Call by reference reduce memory usage because we don't create new data
#include <iostream>

void PrintArray(int *num, size_t length);

int main(){
    int a[] = {1, 3, 5, 7, 9, 4};
    PrintArray(a, sizeof(a)/sizeof(a[0]));

}

void PrintArray(int *num, size_t length){ // You also can use int num[]
    size_t i = 0;
    while (i < length)
    {
        std::cout << *num ++<< std::endl;
        i ++;
    }
    
}