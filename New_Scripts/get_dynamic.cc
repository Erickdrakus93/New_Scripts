#include <iostream>

using namespace std;
// Here we define a get subroutine, to define a dynamic array.
void get_array(double*& a, int& n){ // Here is the imput of the command line
    cout << "Enter number of the items "; // So here we have the reference of the n, because is the next
    cin >> n;
    a = new double[n];
    cout << "Enter: \n " << n << "\nItems one per line:\n";
    for(int i=0; i<n; i++){
        cout << "\t" << i+1 << ":";
        cin >> a[i]; // Here is the finally part of the example
    }
}

// Here we define the next part of the example

void print(double* a, int n){
    for(int i=0;i<n;i++)
        cout << a[i] << ' ';
    cout << endl;
}

int main(){
    double* a;
    int n;
    get_array(a,n);
    print(a,n);
    delete[] a;
    get_array(a,n);
    print(a,n);
    return 0;
}