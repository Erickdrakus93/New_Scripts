#include <iostream>
#include <string.h>

using namespace std;


int main(void){
    char str[80];
    cin.getline(str, 80);
    char* p = strtok(str, " ");
    while(p){
        std::cout << "\t ["  << p << "].\n";
        p = strtok(NULL, " ");
    }
    return 0;c
}


