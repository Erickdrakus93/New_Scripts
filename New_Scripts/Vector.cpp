//
// Created by erick-hdz on 10/04/20.
//

#include "Vector.h"


int Vector::size() {
    return size;
}
Vector::Vector(int s) {};
double& Vector::operator[](int i) {
    return element[i];
}
Vector::~Vector() {
    delete [] element;
}
//here we can define the push_back method as we can see in the next lines