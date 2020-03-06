#include <iostream>

// Here we define the next init of the clas Rational

class Rational {
public:
    // This is the constructor of the main form
    Rational(int n,int d){
        num = n;
        den = d;
    }
    void print(void){
        std::cout << num << '/' << den;
    }

private:
    int num, den;
};


// Here we call the main function.

int main(void) {
    Rational x(-1,3), y(22,6);
    std::cout << "x = ";
    x.print();
    std::cout << "\t y = "; // Here we have the fact to do the same object as wer can see in the nex
    y.print();
    std::cout << std::endl;
    // Here is to finall the line of the code is the main
    // This is the line of the code as the main example

}


