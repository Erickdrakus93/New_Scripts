#include <iostream>

using namespace std;

//This is the main example


class Rational{
public:
    void assign(int, int);
    double convert(void);
    void invert(void);
    void print(void);

    // Here we have the private thing

private:
    int num, den;

};

// Here we define the function

// The subroutines as we can see

void Rational::assign(int numerator, int denominator) {
    num = numerator;
    den = denominator;
}

double Rational::convert(void){
    return double(num)/den;
}


void Rational::invert(void) {
    int temp = num;
    num = den;
    den = temp;
}

void Rational::print(void) {
    cout << num << '/' << den;
}

int main() {
    Rational x;
    x.assign(22, 7);
    cout << "x = " << x.print();
    cout < " = " << x.convert() << endl;
    x.invert();
    cout << "1/x = ";
    x.print();
    cout << endl;
    return 0;
}

// This is the internal form of the
class Rational{
public:
    void assign(int numerator, int denominator){
        num = numerator;
        den = denominator;
    }

    double convert(void){
        return float(num)/den;
    }

    void print(void){
        cout << num << '/' << den;
    }

    void invert(void){

        // In the next lines is the invert part of the main example
        int temp = num;
        num = den;
        den = temp;

    }
};