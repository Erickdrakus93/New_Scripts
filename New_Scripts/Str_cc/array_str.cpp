#include <iostream>
using namespace std;

int main() {
    char s[] = "ABCD";
    for (int i = 0; i < 5; i++) {
        std::cout << "s[" << i << "] = '" << s[i] << "'\n ";
        std::cout << std::endl;
    }
}
