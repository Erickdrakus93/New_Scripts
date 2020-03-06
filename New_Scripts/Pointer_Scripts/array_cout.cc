#include <iostream>

using namespace std;

int main(){
    short a[] = {22, 33, 45, 455};
    std::cout << "a = " << a << "\t *a = " << *a << std::endl;
    for(short* p = a; p<a+5; p++){
        cout << "p = " << p << "\t *p = " << *p << std::endl;
    }
    return 0;
}

