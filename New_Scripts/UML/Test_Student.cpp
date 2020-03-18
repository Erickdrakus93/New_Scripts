//
// Created by erick-hdz on 17/03/20.
//

// Here use the macros include

#include <iostream>
#include "Student.h"
int main(void) {

    Student x("Erick Hernandez", "5544455"); // The constructor
    x.Set_DOB();
    std::cout << "He born in:";
    x.Print_DOB;
    std::cout << "\t";
    x.Set_DOM();
    std::cout << "He died in:";
    x.Print_DOM();
    std::cout << std::endl;
}