#include <iostream>
using namespace std;

int main(){
    char buffer[80];
    cin.getline(buffer, 80,'$');
    char* name[4];
    name[0] = buffer;
    int counter = 0;
    for(char* p=buffer;*p != '\0';p++){
        if (*p == '\n'){
            *p = '\0';
            name[++counter] = p+1;
        }
    }
    std::cout << "The name are:\n";
    for(int i=0;i<counter;i++){
        std::cout << "\t" << i << ".[" << name[i] << "]" << std::endl;
    }
}

