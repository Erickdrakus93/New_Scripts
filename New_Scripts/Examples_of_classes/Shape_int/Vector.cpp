//
// Created by erick-hdz on 08/03/20.
//

#include <iostream>
#include "Vector.h"

using namespace std;

class Vector{
    friend int& operator*(const Vector&, const Vector&);
    friend bool operator==(const Vector&, const Vector&);
    friend ostream&operator<<(ostream&, const Vector&);
    friend istream& operator>>(istream&, const Vector&);

public:

    const Vector&operator=(const Vector&); // Here is the only form in the context of the same object
    Vector&operator*(const float);
    Vector(int i=0, double r= 0.0):size(i){
        data = new double(r); // This is the loc memory in the next context
        for(int i=0; i<size;i++){
            data[i] = r;
        }
    };
    // This is the location memory in the next context
    Vector(const Vector& v): size(v.size){
        data = new double(v.size);
        for(int i=0;i<size;i++){
            data[i] = v.data[i];
        }
    }
    ~Vector(void){};
    const Vector&operator=(const Vector&);
    double& operator[](int) const; // This is the reference in the next part of the example
    // Here we have the hidden info in the private part

private:
    int size; // this is the size
    double* data; // This is the pointer in the data
};



const Vector& Vector::operator=(const Vector& vr1) {
    if (vr1 != this) {
        delete[] data;
        size = vr1.size;
        data = new double(vr1.size);
        for (int i = 0; i < size; i++) {
            data[i] = vr1.data[i];
        }
    }
    return *this;  // Here is the location in the context mannner
}


int Vector::operator==(const Vector& vr1, const Vector& vr2) {
    if(vr1.size != vr2.size){
        return 0;
    }
    for(int i = 0; i<vr1.size;i++){ // This is the iterable manner in the manner form //
        if(vr1.data[i] != vr2.size[i]){
            return false;
        }
    }
    return true; // Here we can return in the int data type as we can see in the next part of the example
    // As we can see in the next part of the main example as we can see in the next part of the main examples as we ca
}

// The stream operator is in the next part of the examples
// Here we have the main example in all the main form
istream & Vector::operator>>(istream& istr, const Vector& ptr) {
    for(int i=0; i<ptr.size; i++){
        std::cout << i << ":";
        istr >> ptr[i];
    }
    return istr;

}


ostream & Vector::operator<<(ostream& ostr, const Vector& vr) {
    ostr << "("; // This is the init of the main form of the main example as we can see in the next part of the example // Here we can use the next part of the exemple;
    for (int i = 0; i < vr.size - 1; i++) {
        ostr << vr[i] << ",";
        if ((i + 1) % 8 == 0) { // This is a centinel form of the for loop in the sense //
            cout << "\n";
        }
    }
    // Here we have the main example as we can see in the next part of the example //
    // As we can see in the next part of the example as we can see in the next part of the example //
    return ostr << vr[i] << ")\n";
}

// This is the [] subscript operator
double& Vector::operator[](int i) const {
    return data[i];
}
// Here is the reference in the main object in the next part of the main example as we can see in the next part of th

int& Vector::operator*(const Vector& ptr1, const Vector& ptr2) {
    Vector w; // Here we can set in the next part of the examples as we can see
    int sum =0;
    if(ptr1.size < ptr2.size){
        for(int i=0; i<ptr2.size; i++){
            w.data[i] = ptr1.data[i] * ptr2.data[i];
        }
    }
    for(int i=0; i<w.size;i++){
        sum += w.data[i];
    }
    return sum;

}
//Here is the product of the constant
Vector& Vector::operator*(const float r) {
    for(int i=0; i<size;i++){
        data[i] *= r;
    }
    return *this;
}