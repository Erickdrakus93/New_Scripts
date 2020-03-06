#include <iostram>

using namespace std;



// Here we can use the namespace as we can see in the next example
// Here we use the notion of the main example

void Bublee_Sort(float* p[], int n){
    float* temp; // Here we declare a pointer
    for(int i=0;i<n;i++) {
        for (int j = 0; j<n-i; j++){
            if (*p[j] > *p[j+1]){  // Here is t
                temp = p[j]; // temp is the sentinel
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}
