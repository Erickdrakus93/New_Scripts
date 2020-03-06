#include <iostream>
#include <math.h>
#include <iostream.h>
using namespace std;


class Rational{
    // So here we need the next part of the examples
    // So were we have the friendship is the example)
    // This is the main example of the examples
    friend istream operator >>(istream&, Rational&);
    friend ostream& o   perator <<(ostream&, Rational&);
    friend int operator==(const Rational&, const Rational&);
    Rational& operator+(const Rational&);
    friend Rational operator*(const Rational&, const Rational&);
    friend operator==(const Rational&, const Rational&);
public: // In general we need the constructors in this parts of the main
    int& operator[](int);
    operator double(void);
    Rational operator++(void);
    Rational operator++(int);
    Rational(int x, int y){};
    Rational(const Rational&){};
    //So here we need the private part
    // This is the print function
    void Print(void);
    void operator=(const Rational& ptr);
    void minus(const Rational& ptr);
    void plus(const Rational& ptr);
    void product(const Rational& ptr);
    Rational&operator-=(Rational&)
    Rational& operator+=(Rational&);
    Rational& operator*=(const Rational&);
private:
    int num;
    int den;
};

double Rational::operator double() {
    return double(num)/den;
}

// Here we can define the [] operator

int& Rational::operator[](int i) {
    if (i == 1){
        return num;
    }
    if (i == 2){
        return den;
    }
    std::err << "ERROR: index out of range: \n";
    exit(1);
}
Rational Rational::operator++() {
    num += den;
    return *this;
}

Rational Rational::operator++(int) {
    Rational temp = *this;
    num += den;
    return temp;
}

int Rational::operator==(const Rational& x, const Rational& y) {
    return (x.num * y.den == x.den * y.num);
}

Rational& Rational::operator-=(Rational &ptr) {
    num -= ptr.num;
    den -= ptr.den;
    return *this;
}

Rational& Rational& Rational::operator*=(const Rational& ptr){
    num = ptr.num;
    den = ptr.den;
    return *this;
}
Rational& Rational::operator+(const Rational &ptr) {
    num +=ptr.num;
    den +=ptr.den;
    return *this;
}


void Rational::product(const Rational &ptr) {
    num *= ptr.num;
    den *= ptr.den;
    return; // Here is not to remember;
}

istream Rational::operator>>(istream &istr, Rational &ptr) {
    std::cout << "\t Numerator";
    istr >> ptr.num;
    std::cout << "\t Denominator";
    istr >> ptr.den;
    return istr;
}
//The next part of the main example is like the next

int void int Rational::operator==(const Rational& x, const Rational& y) {
    return(x.num * y.den == x.den *  y.num);
};

ostream & Rational::operator<<(o    stream& otr, const Rational &ptr) {
    return otr << ptr.num << "/" << ptr.den;
}


Rational Rational::operator*(const Rational& x, const Rational& y) {
    // This is the input of the main form; as we can set in the next lines
    // Of the code;
    Rational z = (x.num * y.num, x.den * y.den);
    return z;
}
void Rational::Print() {
    std::cout << num << "/" << den << std::endl;
    return;
}
void Rational::minus(const Rational &ptr) {
    num -= ptr.num;
    den -= ptr.den;
    return;
}

void Rational::plus(const Rational &ptr) {
    num += ptr.num;
    den += ptr.den;
    return;
}

void Rational::operator=(const Rational &ptr) {
    den = ptr.den;
    num = ptr.num;
    return;
};


// Here we have as a Reference of self class


class Rational_with_reference{
public:
    Rational_with_reference(int a, int b): num(a), den(b){};
    Rational_with_reference(const Rational_with_reference& ptr): num(ptr.num), den(ptr.den){};
    Rational_with_reference& operator=(const Rational_with_reference& ptr);
    void print(void);

private:
    int num, den;
};

void Rational_with_reference::print(void) {
    std::cout << num << "/" << den << std::endl;
}

Rational_with_reference& Rational_with_reference::operator=(
        const Rational_with_reference &ptr) {
    num = ptr.num;
    den = ptr.den;
    return *this;
}

// So here we define the next part of the script
// So in the end of the script

// So here we define the next part of the main example


int main(void){
    Rational x(22,7);
    Rational y(x);
    std::cout << "The copy is the next; ";
    y.Print();
    std::cout << "The sum is the next: ";
    x.plus(y);
    x.print; // Here is the mutable of the principal objects;
    std::cout << "The minus is the next part: ";
    x.minus(y);
    // Here we can update the value as we can see
    x.Print();
}