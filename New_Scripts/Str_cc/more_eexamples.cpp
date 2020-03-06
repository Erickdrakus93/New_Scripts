#include <ctype.h>
#include <iostream>

using namespace std;

int main(){
    char line[80];
    while (line) {
        cin.getline(line, 80);
        if (*line) {
            std::cout << "\t[" << line << "]\n";
        }
    }
}
