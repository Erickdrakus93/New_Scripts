#include <iostream>

using namespace std;

int main(){
    int n = 33;
    int& r = n;
    std::cout << "&n = " << &n << ", &r = \t" << &n << std::endl;

}


// A for to determine the address of the main example as we can see
// This is the form that use in the semantic of *, and the new operator
int main(){
    double p* = new double;
    if (p==0){
        abort();
    }
    else {
        p* = 3.1415952226
    }
}