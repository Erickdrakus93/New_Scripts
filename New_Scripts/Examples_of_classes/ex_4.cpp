#include <iostream>

using namespace std;

// Here we use more than 1 constructor

class Rational{
public:
    // Here we have the main example as we
    // Here we can see in the next part of the main example as
    // In the main example

    Rational(void){
        num = 0;
        den = 1;
    }

    Rational(int n){
        num = n;
        den =1;
    }
    Rational(int d, int n){
        num = n;
        den = d;
    }
    void Print(void){
        cout << num << '/' << den;
    }

private:
    int num, den;
};

int main(void){
    Rational x, y(4), z(1,2);
    cout << "x = ";
    x.Print();
    cout << "y = ";
    y.Print();
    cout << "\nz =";
    z.Print();
    cout << endl;
}