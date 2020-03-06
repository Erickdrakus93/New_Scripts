#include <iostream>
using namespace std;
// This is the recurrence in the next part of the example.
short* loc(short* a1, short* a2, int n1, int n2) {
    short* end1 = a1 + n1;
    for (short* p1 = a1; p1 < end1; p1++){
        if (*p1 == *a2){
            for(int j=0;j<n2;j++){
                if(p1[j] != a2[j]){
                    break;
                }
                if(j == n2){
                    return p1;
                }
            }
        }
    }
    return 0;
}


// Here we use the main

int main(){
    short a1[9] = {11,11,11,11,11,22,33,55}, *ptr1;
    ptr1 = a1; // Here is the equivalent to a[0] == *a;
    short a2[5] = {11,11,11,22,33}, *ptr2;
    ptr2 = a2;
    std::cout << "Array a1 begins at location\t" << a1 << std::endl;
    std::cout << "Array a2 begins at location\t" << a2 << std::endl;
    short* p = loc(ptr1, ptr2, 9,5); // The invocation of the patch searching
    if (p){
        std::cout << "Array a2 founds the location\t" << p << std::endl;
        for(int i=0;i<5;i++){
            std::cout << "\t" << &p[i] << ":" << p[i] << std::endl;
            std::cout << "\t" << &a2[i] << ": " << a2[i] << std::endl;
        }
    }
    else {
        std:cout << "Not found.\n" << std::endl;
    }
    return 0;
}