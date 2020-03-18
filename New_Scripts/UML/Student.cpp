//
// Created by erick-hdz on 17/03/20.
//
#include <iostream>
#include "Student.h"
#include <String.h>
#include "Date.h
#include "Person.h

class Student: public Person{
public:
    Student(char* n , bool s= true, String i = ''): Person(n,s), id(i), credits(0){};
    void Set_DOB(int m, int d, int y){
        dom.Set_Date(m,d,y);
        return;
    }
    void print_DOB(void){
        std::cout << DOB;
    }
    void Set_DOM(int m, int d, int y){
        DOM.Set_Date(m,d,y);
        return;
    }

    void Print_DOM(void){
        std::cout << DOM
    }
private:
    String id;
    Date DOB,DOM;
    int credits;
    float gps;

}
