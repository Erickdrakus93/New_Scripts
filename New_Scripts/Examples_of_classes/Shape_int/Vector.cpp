//
// Created by erick-hdz on 08/03/20.
//

#include <iostream>
#include "Vector.h"

using namespace std;

class Vector{
    friend operator==(const Vector&, const Vector&);
    friend ostream&operator<<(ostream&, const Vector&);
    friend istream& operator>>(istream&, const Vector&);

public:
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
    const Vector&operator==(const Vector&);
    double&operator[](int) const;
    // Here we have the hidden info in the privatee part

private:
    int size; // this is the size
    double* data;
};