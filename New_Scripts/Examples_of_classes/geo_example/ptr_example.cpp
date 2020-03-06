#include <iostream>
#include <math.h>

using namespace std;

class Pointer{
public:
    // So in the next lines is the part of the assignment issue;
    Pointer(float x,float y, float z): x_(x), y_(y), z_(z){};
    Pointer(const Pointer& ptr): x_(ptr.x_), y_(ptr.y_), z_(ptr.z_){}; // This is the copy subroutine
    void print(void);
    double norm(void);
    Pointer negate(Pointer& ptr);
    void neg(void);
private:
    float x_, y_, z_;
};

// Another form of the neg code is the next

void Pointer::neg() {
    x_*= -1, y_*= -1, z_*= -1;
    return;
}

Pointer Pointer::negate(Pointer& ptr) {
    ptr.x_*= -1;
    ptr.y_ *= -1;
    ptr.z_ *= -1;
    return ptr;
}


void Pointer::print() {
    std::cout << "(" << x_ << ", " << y_ << ", " << z_ << ")";
    return;
}

double Pointer::norm() {
    return sqrt(x_*x_ + y_*y_ + z_*z_);
}

int main(void) {
    Pointer ptr(565.55, 566.66, 555.66);
    Pointer y(ptr);
    std::cout << "ptr is the next: ";
    ptr.print();
    std::cout << "\nThe norm of ptr is the next: " << ptr.norm();
    std::cout << "\ny is the copy and is: ";
    y.print();
    std::cout << "\nThe norm is the next: " << y.norm();
    std::cout << "\nThe negative is the next: ";
    ptr.neg();
    ptr.print(); // ptr.negate(ptr);
    std::cout << std::endl;
    return 0;
}