#include <iostream>

using namespace std;

// Here is an example to reminder the pointer as a referencing manner


int main(void){
    double* p = new double;
    double a = 3.1415169555;
    *p = a;
    std::cout << "The value of *p is the next: \t" << *p;
    std::cout << std::endl;
}
