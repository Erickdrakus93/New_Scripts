//
// Created by erick-hdz on 10/04/20.
//

#include "Vector_container.h"

Vector_container::Vector_container(int s) {};
int Vector_container::size() {
    return vector.size();
}
double& Vector_container::operator[](int i) {
    return vector[i];
}