#include <iostream>

using namespace std;

// Here we define the next part of the main
int main(){
    const int size = 3;
    short a[size] = {22, 33, 44};
    std::cout << "a = " << a << std::endl;
    std::cout << "sizeof(short)" << sizeof(short) << std::endl;
    short* end = a + size;
    short sum = 0;
    for(short* p =a;p<end;p++){ // here we are the pointer of the a[0]
        sum+= *p;
        std::cout << "\t p = " << p;
        std::cout << "\t *p = " << *p;
        std::cout << "\t sum = " << sum  << std::endl;
    }
    std::cout << "end = " << end << std::endl;
    return 0;
}
  
