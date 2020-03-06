#include <iostream>
#include <string.h>
// #include <apstring.h>
using namespace std;

int main(){
   char s[80];
   cin.getline(s,80 ); // Here we have the next part of the input as we can see
   char* p;
   std::cout << "The string is:[ " << s << "]\nIts tokens are:\n";
   p = strtok(s, "\0"); // Here we init the pointer p as the init of the  first token of s;
   while(p){
   std::cout << "\t[" << p << "]\n";
   p = strtok(NULL, "\0");
   }
   std::cout << "Now the string is: [" <<   s << "]\n";
   return 0;
}



// Here we define a find function that eats an string
// Here we use the make function as
int find(char* str, char c, int i){
    int len = strlen(str);
    while(i < len){
        if(str[i] == c){
            return i;
        }
        i++;
    }
    return 0;
}
// Here apstring is a parent of array of char i.e strings
// That extends the part of the example
int find(std::string str , char c, int i){
    int len = str.lenght(); // Here is the . operator acces of the len function
    while(i < len){
        if(apstring[i] == c){
        return i
        }
        i++;
    }
    return 0;
}

// This a boolean function type;
int isvowel(char c){
    return (c=='a' || c == 'e' || c == 'i' || c=='o' || c=='u');
    // This is a boolean function

}