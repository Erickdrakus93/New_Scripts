#include <iostream>

using namespace std;

int main() {
    short a[] = {22, 33, 44, 55}, *ptr;
    ptr = a;
    std::cout << "a = " << a << ", *a = " << *ptr << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cout << "ptr = " << ptr << ", *ptr= " << *ptr << std::endl;
        ptr++;
        // Another form to use this part of the script is the use of the pointer
        // As the index of the recursive manner of the example
    }
    return 0;
}
