#include <iostream>
#include <math.h>
using namespace std;

class Box{
public:
    double length;
    double breadth;
    double height;

    // This is the member functions

    double get_Volume(void);
    void set_Length(double len);
    void  set_Breadth(double bre);
    void set_Heigth(double hei);
};

// The extern functions are the next
double Box::get_Volume() {
    return sqrt(length * breadth * height);
}

void Box::set_Breadth(double bre) {
    breadth = bre;
}

void Box::set_Heigth(double hei) {
    height = hei;
}
void Box::set_Length(double len) {
    length = len;
}

// Here is the test main functions;

int main(void){
    Box Box1, Box2;
    double volume = 0.0; // This is the mutable as we can see in the init
    // Here we have the especifications as we can see

    Box1.set_Length(6.0);
    Box1.set_Breadth(7.0);
    Box1.set_Heigth(5.0);
    //Box2 especifications

    Box2.set_Length(6.0);
    Box2.set_Breadth(1.3);
    Box2.set_Heigth(458.55);

    // Volume of the next objects as we can see

    volume = Box1.get_Volume();
    cout << "Volume of the Box1 is : " << volume << endl;

    //Volume of the box 2 //
    volume = Box2.get_Volume();
    cout << "The volume of the box 2 is :" << volume << endl;
    return 0;
}

