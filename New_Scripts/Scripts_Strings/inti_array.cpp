#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){ // Here we can use the c use of char* names[] and print them //
    std::string names[] = { "George Whashington" ,
                      "Jhon Addams",
                     "Thomas Jefferson"
    };
    cout << "The names are:\n";
    for(int i = 0; i<3; i++){
        std::cout << "\t"<< i  << ".[" << names[i] << "]" << std::endl;
    }
    return 0;
}

