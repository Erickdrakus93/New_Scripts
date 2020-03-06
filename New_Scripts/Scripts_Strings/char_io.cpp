#include <iostream>

using namespace std;

// Another form to do is the next part


int main(void){
    char word[80];
    while(word){
        cin >> word;
        if(*word){
            std::cout << "\t\" " << word << "\"\n";
        }
    }
}

// Here we can use the next

