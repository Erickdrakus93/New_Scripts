#include <iostream>

using namespace std;

double* duplicate(double* p[], int n){
    double* const a = new double[n]; // This is exactly an array type.
    for(int i=0; i<n; i++){
        a[i] = *p[i];
    }
    return a;
}
// Here we return the part of the main example
// Here we declare the print function

void Print_Pointer(double* a[], int n){
    for ( int i=0;i<n;i++){
        std::cout << *a[i] << ",";
        std::cout << std::endl;
    }
}

void Print(double* a, int n){
    for(int i=0;i<n;i++){
        std::cout << a[i] << ",";
        std::cout << std::endl;
    }
}

int main(){
    double a[8] = {44.4, 77.7, 55.5, 44.78, 66.6,99.9,10.22, 55.5};
    Print(a, 8);
    double* p[8]; // Array of Pointers to point the last array //
    for(int i=0;i<8;i++){
        p[i] = &a[i];
    }
    Print_Pointer(p,8);
    double* const b = duplicate(p, 8);
    Print(b,8);
}
