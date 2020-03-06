#include <iostream>

using namespace std;

// Here we define the void copy

double* Copy(double a[], int n){
    double* p = new double[n]; // This is the instance of the Pointer Type.
    for(int i=0; i<n;i++){
        p[i] = a[i];
    }
    return p;
}

void print(double* a, int n){
    for(int i=0;i<n;i++){
        std::cout << "\n" << a[i] << " ";
        std::cout << std::endl;
    }
}

// Here we use the main example

int main() {
    double a[8] = {22.2, 44.5, 5.5, 66.6, 77.7, 88.8, 99.9, 100};
    print(a, 8);
    double* b = Copy(a, 8); // Here is the pointer
    a[2] = a[4] = 11.01;
    print(a, 8);
    print(b, 8);
}

