#include <iostream>
#include <string.h>

using namespace std;


// Here we module the next part
// Define the next variables

const int Name_Len= 20;
const int max_num_Names = 25;
const int buffer_len = max_num_Names*(Name_Len + 1);



// Reads up 25 str into buffer

void input(char* buffer){
    std::cout << "Enter up to \t "<< max_num_Names << "Names, one per line\t";
    std::cout << "Terminate with \'$\'.\nNames are limited by: \t";
    std::cout << Name_Len << "Characters.\n";
    cin.getline(buffer, buffer_len, '$');
}

void tokenize(char** name, int& n, char* buffer){
    char* p = strtok(buffer, "\n");
    for(n =0; p && *p != '$'; n++){
        name[n] = p;
        p = strtok(NULL, "\n");
    }
}


//Prints the n names stored in buffer

void print(char** name,  int n){ // Here is eating something
    std::cout << "The names are:\n";
    for(int i =0; i< n;i++){
        std::cout << "\t" << i << "." << name[i] << endl;
    }

}
// This is the subroutine that we can use in the context of the main form
void sort(char** name, int n) {
    char* temp;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (strcmp(name[j], name[j + 1]) > 0) {
                temp = name[j];
                na  me[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }
}


// Here we use the main() function

int main(){
    char* name[max_num_Names]; // This is an array of pointers
    char buffer[buffer_len];
    int numNames;
    input(buffer);
    tokenize(name, numNames, buffer);
    print(name, numNames);
    sort(name, numNames);
    print(name, numNames);
}