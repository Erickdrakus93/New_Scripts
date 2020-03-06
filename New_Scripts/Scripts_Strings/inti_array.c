#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){ // Here we can use the c use of char* names[] and print them //
    char* names[] = { "George Whashington" ,
                      "Jhon Addams",
                     "Thomas Jefferson"
    };
    cout << "The names are:\n";
    for(int i = 0; i<3; i++){
        std::cout << "\t"<< i  << ".[" << names[i] << "]" << std::endl;
    }
    return 0;
}

