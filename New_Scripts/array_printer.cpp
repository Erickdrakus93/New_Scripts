#include <iostream>
using namespace std;

int main(){
    short a[3] = {45,13,70}, *ptr;
    ptr = a;
    for(int i=0; i<3;i++){
        cout << *ptr << endl;
        ptr++;
    }
    return 0;
}

