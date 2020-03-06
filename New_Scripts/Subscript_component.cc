#include <iostream>

using namespace std;
//Here is the subroutine to-do the k-value
float& component(float* v, int k){
    return v[k];
}

int main(){
    float v[4];
    for (int k=1;k<=4;k++){
        component(v,k) = 1.0/k;
    }
    for(int i=0;i<4; i++){
        std::cout << "v[" << i << "] = " << v[i] << std::endl;
    }
}

