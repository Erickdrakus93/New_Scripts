#include <iostream>

using namespace std;

int main() {
    const int size = 3;
    short a[3] = {22, 33, 44}, *ptr;
    ptr = a;
    std::cout << "a = " << a  << std::endl;
    std::cout << "sizeof(short) = " << sizeof(long) << std::endl;
    short sum = 0;
    short *end = a + size;
    // Here we can iterate on the index of the type integer
    for(int i=0;i<3;i++){
        sum += *ptr;
        std::cout << "\t ptr = " << ptr << std::endl;
        std::cout << "\t *ptr = " << *ptr << std::endl;
        std::cout << "\t sum = " << sum << std::endl;
        ptr++;
    }
    std::cout << "end = " << end << std::endl;
    return 0;
}


