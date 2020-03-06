#include <iostream>

using namespace std;

float* max(float* p[], int n){
    float* ptr = p[0];
    for(int i=0;i<n;i++){
        if(*p[i] > *ptr){
            ptr = p[i];
        }

    }
    return ptr;
}

void Print(float* a, int n){
    for(int i=0;i<n;i++){
        std::cout << a[i] << " " << std::endl;
    }
}

// Here is the same in the type of Pointer
void Print_ptr(float* a[], int n){
    for(int i=0;i<n;i++){
        std::cout << *a[i] << " " << std::endl;
    }
}

int main(){
    // Here we declare an array of float type
    float a[8] = {44.4,77.7,22.2,88.8,66.6,3.3,99.9,55.5};
    Print(a,8);
    float* p[8];
    for(int i=0; i<8;i++){
        p[i] = &a[i]; // Here p is pointer a //
    }
    Print_ptr(p,8);
    float* m = max(p, 8);
    std::cout << m << ", " << *m << std::endl;
}