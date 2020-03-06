#include <iostream>
#include <string.h>

using namespace std;

void next_char(char* a) {
    do {
        std::cin >> a;
        if (*a) {
            std::cout << "\t\"[" << a << "]\"\n";
        }
    } while (*a);
    return;
}

int main(void){
    char* a = new char[50]; //This is another form to use the next part
    std::cout << "This is the words:" << std::endl;
    next_char(a);
    return 0;
}