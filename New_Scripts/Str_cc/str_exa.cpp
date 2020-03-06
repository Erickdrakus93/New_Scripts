#include <iostream>
#include <ctype.h>

using namespace std;
// Here we use the cin object as we can see
// This function of O(n) Time-Complexity
int main(){
    char ch, pre = '\0';
    while (cin.get(ch)){
        if (pre == ' ' || pre == '\n'){
            std::cout.put(char(toupper(ch)));
        }
        else{
            cout.put(ch);
        }
        pre = ch;
    }
}
