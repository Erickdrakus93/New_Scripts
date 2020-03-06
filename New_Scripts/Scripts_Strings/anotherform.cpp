#include <iostream>
#include <string.h>

using namespace std;

int main(void){
    char s[] = "##ABCD#EFG##EFG##L#MN######0##P#####";
    cout << "The string  is [" << s << "]\n Its tokens are:\n";
    char* p = strtok(s,"#");
    while(p){
        cout << "\t" << p << "]\n";
        p = strtok(NULL,"#");
    }
    cout << "Now the string is: [" << s << "]\n";
}

