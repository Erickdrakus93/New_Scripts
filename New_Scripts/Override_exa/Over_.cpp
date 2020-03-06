#include <iostream.h>
using namespace std;

// This is the override class

public class Rational_1{
    friend int operator==(Rational_1&, Rational_1&);
    friend ostream& operator<<(ostream&, const Rational_1&);

public:
    // THe next is the constructors
    Rational_1(int n, int d ): num(n), den(d){};
    int& operator[](int);
    Rational_1& operator=(const Rational_1&);
private:
    int num, den;
};


// here we declare the methods here //
ostream& Rational_1::operator<<(ostream &ostr, const Rational_1 &r){
    return ostr << r.num << "/" << r.den;
}

Rational_1& Rational_1::operator=(const Rational_1& ptr) {
    num = ptr.num;
    den = ptr.den;
    return *this;
}

int Rational_1::operator==(Rational_1 &r1, Rational_1 &r2) {
    return (r1.num * r2.den == r1.den*r2.den);
}
// This is the reference of the main example as we can see in the part of the main example
int& Rational_1::operator[](int i) {
    if (i ==1){
        return num;
    }
    if(i == 2){
        return den;
    }
    std::cerr << "ERROR: index out of range\n";
    exit(0);
}