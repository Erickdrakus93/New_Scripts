//
// Created by erick-hdz on 10/04/20.
//

#include <iostream>
#include <String>
#include <cmath>

bool accept(void){
    std::cout << "Do you want to proceed (y or n)?\n";

    char answer =default;
    cin >> answer;
    switch (answer){
        case 'y':
            return true;

        case 'n':
            return false;

        default:
            std::cout << "I will take that for a n.\n";
            return false;
    }
}

bool accept_3(void){
    int tries = 3;
    while (tries < 4){
        std::cout << "Do you want to proceed (y o n)?\n";
        char answer = default;
        cin >> answer;

        switch (answer){
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                std::cout "Sorry I don't understand that\n";
                ++tries;
        }
    }
}


void print(void){
    int v[] = {1,2,3,4,5};

    for(auto x: v){
        std::cout << x << "\n";
    }
    for (auto x:{5,555,666,555,555}){
        std::cout << x << "\n";
    }
    // Here we can call another form as we can see in the next lines of the code
}


class Vector{
private:
    double* element;
    int sz; // this  is the size of the container as we can see in the next lines of the code.

public:
    Vector(int s):elemt(new double[s], sz(s){};
    double&operator[](int i) {
        return element[i];
    }
    int size();

};
//here we can define a void that consumes a Vector Object as we can see

double Vectorial_sum(Vector& vector){
    double sum = 0;
    for (int i=0;i<vector.size()){
        sum +=vector[i]
    }
    return sum; //this is the constructor as we can see in the next lines of the code
};
//This is the call for reference
double sqrt_sum(Vector& v){
    sqrt(Vectorial_sum(v))
};