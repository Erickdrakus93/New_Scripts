#include <iostream>
#include <math.h>

// Here we can define the next part of the main example

class Point{
public:
    float x, y, z;

    //Here we have the member functions

    void x_value(float a );
    void y_value(float b);
    void z_value(float c);
    void print(void);
    double norm(void);
};

// this is the member functions as we can see
void Point::x_value(float a) {
    x = a;
    return;
}
void Point::y_value(float b ) {
    y = b;
    return;
}
void Point::z_value(float c) {
    z = c;
    return;
}
void Point::print() {
    std::cout << "( " << x << ", " << y << ", " << z << ")";
    return;
}
double Point::norm(void){
    return sqrt(x*y*z);
};

// Here we define the next part of the main function


int main(void){
    Point ptr;
    ptr.x_value(55.55);
    ptr.y_value(999.550);
    ptr.z_value(788.565);
    std::cout << "The asign of ptr is :";
    ptr.print();
    std::cout << "\nThe norm of ptr is the next: " << ptr.norm() << std::endl;
}