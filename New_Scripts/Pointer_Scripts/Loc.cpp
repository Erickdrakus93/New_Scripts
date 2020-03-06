#include <iostream>

using namespace std;

int* Location(int a[], int n, int target){
    for(int i = 0; i < n; i++){
        if (a[i] == target){
            return &a[i];
        }
    }
    return NULL;
}
 // Here we have the main call

 int main(){
    int  a[9] = {1,2,3,4,5,6,7,8,9},n;
    int* p;
    do{
        std::cout << "Enter the number: \n";
        cin >> n;
        if (p = Location(a, 9,n)){
            std::cout << p << ", " << *p << std::endl;
        }
        else {
            cout << n << "  was not found. \n";
        }
    } while(n > 0);
}
