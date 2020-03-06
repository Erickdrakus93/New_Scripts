#include <iostream>
#include <ctype.h>

using namespace std;

// Another form to do this shit is the next manner
// Here we can use the pointers as we can see in the next manner

int main(){
    char buffer[40];
    cin.getline(buffer,80,'$');
    char* name[8];
    name[0] = buffer;
    int counter= 0;
    for(char* p = buffer; *p != '\0'; p++){
        if (*p == '\n') {
            *p = '\0';
            name[++counter] = p + 1;
        }
    }
    std::cout << "The name are:\n";
    for(int i=0;i<counter;i++){
        std::cout << "\t" << i << ".["  << name[i] << "]" << std::endl;
    }
}
