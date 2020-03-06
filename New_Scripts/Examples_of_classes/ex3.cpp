#include <iostream>

using namespace std;


// We write the next part of the mext exaple as overloading


class Rational{
public:
    Rational(void){
        num = 0;
        den = 1;
    }
    Rational(int n){
        num = n;
        den = 1;
    }
    Rational(int n, int d){
        num = n;
        den = d;

    }

    void print(void){
        std::cout << n << '/' << d << endl;
    }

private:
    int num, den;
};


/So here we have the next part of the exampke