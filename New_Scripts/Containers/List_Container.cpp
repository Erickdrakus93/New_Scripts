//
// Created by erick-hdz on 10/04/20.
//

#include "List_Container.h"

double& List_Container::operator[](int i) {
    //this is the iterative manner as we can see in the next lines of the code
    for (auto &x:ld) {
        if  (i==0){
            return x;
        }
        --i;

    }
    throw out_of_range("List Container") //this is the catch example as we can see in the next lines of the code
}

int List_Container::size() const {
    return ld.size();
}