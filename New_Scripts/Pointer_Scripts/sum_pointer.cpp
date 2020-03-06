#include <iostream>

using namespace std;

// Her we define a subroutines as we can see
// Here we define a sum of elements

int sum_int(int* ptr, int n){
    int s = 0;
    for(int i=0;i<=n;i++){
        s += *ptr;
    }
    return s;
}
int sum_func_pointers(int (*pf)(int k), int n){
    int s = 0;
    for(int i=0;i<=n;i++){
        s += (*pf)(i);
    }
    return s;
}

int sum_array_of_pointers(int* a[], int n){
    int sum = 0;
    for(int i=0; i<=n; i++){
        sum += *a[i];
    }
    return sum;
}


int square(int k){
    return k*k;
}

int cube(int k){
    return k*k*k;
}

// Here we invoke the main coroutine

int main(){
    cout << sum_func_pointers(square, 3) << endl;
    cout << sum_func_pointers(cube,3) << endl;
    return 0;
}