#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char a[80];// Here we use it as next buffer
    cin.getline(a,80); // This is a dynamic form
    char* ptr;
    ptr = strpbrk(a,"nopqr");
    cout << "strbkr(s, \"nopqr\") points to s[" << ptr - a << "].\n";
    ptr = strpbrk(a ,"\0");
    if (ptr == NULL) cout << "strpbkr(s, \"dcsdcdds\") returns NULL.\n";
}

