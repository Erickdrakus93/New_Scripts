#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

// Here we can use the main void


// Here we use a c low level of the next part

void reverse_1(char* str){
    for(int i =strlen(str)-1; i>=0;i--){
        std::cout << str[i] << std::endl;
    }
}

void reverse_str(string& str){
    int n = str.length();
    for(int i=0;i<n/2;i++){
        swap(str[i], str[n-i-1]);
    }
}

void another_version_reverse(string str){
    for(int i = str.length()-1; 0<=i;i--){
        std::cout << str[i] << std::endl;
    }
}


int main(void){
    char a[80];
    cin.getline(a, 80);
    std::cout << "The string is [" << a << "].\n" <<std::endl;
    std::cout << "Now this is the part[\n";
    reverse_1(a);
    std::cout << "].\n" << std::endl;

}