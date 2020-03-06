#include <iostream>

using namespace std;

class X{
public:
    int data; //THis is mutable
};

int main(void){
    X* ptr = new X;
    (*ptr).data = 33;
    // Here we use to stdout the lecture as the next form
    std::cout << "(*ptr).data = " << (*ptr).data << "=" << ptr->data << std::endl;
    ptr->data = 444;
    std::cout << "ptr->data = " << (*ptr).data << "=" << ptr->data << std::endl;
}