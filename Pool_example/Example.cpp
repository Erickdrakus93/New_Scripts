//
// Created by erick-hdz on 10/04/20.
//

#include "Example.h"


class Example{

public:
    virtual void function_example(void){
        std::cout << "X::function_call() executing\n";
    };
};


class Example_2{
public:
    void function_example(void){
        std::cout << "Y::function_example_2() executing\n";
    };
};


int main(void){
    Example x;
    Example_2 y;

    Example* p = &x;

    p = &y;
    p->function_example();
}