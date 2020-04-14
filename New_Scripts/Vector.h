//
// Created by erick-hdz on 10/04/20.
//
#ifndef NEW_SCRIPTS_VECTOR_H
#define NEW_SCRIPTS_VECTOR_H


class Vector {
private:
    int size;
    double* element; //this is the pointer as the element
public:
    Vector(int s):element(new double[s]),size(s){};
    double&operator[](int i);
    int size(void);
    ~Vector(void){};
    void push_back(double);

};


#endif //NEW_SCRIPTS_VECTOR_H
