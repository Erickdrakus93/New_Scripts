#include <iostream>
using namespace std;


// Here we use the notion of the
// The next part of the main example as
// The next part of the next


class Rational{
    friend operator*=(const Rational&);
    friend ostream& operator<<(ostream&, const Rational&);
    friend istream& operator>>(istream&, const Rational&);
public:
    int&operator[](int;
    Rational(int n =0, int d=1): num(n), den(d){
    }
    Rational operator++();
    int const  numerator(void){
        return num;
    }
    Rational operator++(int);
    int const denominator(void){
        return den;
    }

private:
    int num, den;
};

int main(void){
    Rational x(22,4);
    cout << x.numerator() << '/' << x.denominator() << endl;
}



ostream & Rational::operator<<(ostream& ptr, const Rational& r) {
    return ptr << r.num << "/" << r.den <<;
}

istream & Rational::operator>>(istream& ptr, const Rational& r) {
    cout << "\t Numerator ";
    ptr >> r.num;
    cout << "\t Denominator ";
    ptr >> r.den;
    return ptr;
}


int Rational::operator*=(const Rational& r) {
    num *= r.num;
    den *= r.den;
    return *this;
}

Rational Rational::operator++() {
    den += num;
    return *this;
}

Rational Rational::operator++(int) {
    Rational temp = *this; // This is the pointer in the usual form as we can see in the next part

    den += num;
    return temp;
}

int& Rational::operator[](int n) {
    if (n == 1){
        return num;
    }
    if (n == 2){
        return den;
    }
    std::cerr << "ERROR: index out of the range\n";
    exit(0);
    return 0;
}