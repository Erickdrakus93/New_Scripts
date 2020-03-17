#include <iostream>

using namespace std;

// Here we define the next part of a Copy instance in the class


class Rational {
    
public:
    Rational(int n, int d) : num(n), den(d) {

    }

    Rational(const Rational& r) : num(r.num), den(r.den) {
        std::cout << "COPY constructor callled\n";

    }

private:
    int num, den;
};

Rational  func(Rational s){
    Rational r = s;
    return r;
}

int main(void){
    Rational x(22, 3);
    Rational y(x);
    func(y);
}

