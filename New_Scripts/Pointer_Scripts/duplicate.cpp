#include <iostream>

using namespace std;

float* Duplicate(float* p[], int n){
    float* const b = new float[n]; // This is exactly an array type.
    for(int i=0;i<n;i++){
        b[i] = *p[i];
    p++;
    }
    return b;
}
// Here we return the part of the main example
// Here we declare the print function

void Print_Pointer(float* a[],  int n){
    for ( int i=0;i<n;i++){
        std::cout << "\n" << *a[i] << " ";
        std::cout << std::endl;
    }
}
void Print(float a[], int n){
    for(int i=0;i<n;i++){
        std::cout << "\n" << a[i] << "  ";
        std::cout << std::endl;
    }
}

int main(){
    float a[8] = {44.4, 77.7, 55.5, 44.78, 66.6,99.9,10.22, 55.5};
    Print(a, 8);
    float* p[8]; // Array of Pointers
    for(int i=0;i<8;i++){
        p[i]= &a[i]; // Here
    }
    Print_Pointer(p,8);
    float* const b = Duplicate(p,8);
    Print(b,8);
    return 0;
}