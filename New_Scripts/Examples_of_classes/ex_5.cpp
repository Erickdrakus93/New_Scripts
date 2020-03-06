#include <iostream>
using namespace std;


// Here we use the notion of the
// The next part of the main example as
// The next part of the next


class Rational{
public:
    Rational(int n =0, int d=1): num(n), den(d){
    }
    int const  numerator(void){
        return num;
    }
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
