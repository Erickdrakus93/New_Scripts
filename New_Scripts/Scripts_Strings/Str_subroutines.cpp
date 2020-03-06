#include <iostream>
#include <ctype.h>

using namespace std;
//Here is not necessary the scope of  the subroutine
int next_int(void){
    char ch;
    int n;
    while(cin.get(ch)){
        if (ch>= '0' && ch <= '9'){
            cin.putback(ch);
            cin >> n;
            break;
        }
    }
    return n;

}

// Here we can use another Routine as we can see

int next_catch_int(void){
    char ch;
    int n;
    while( ch = cin.peek()){
        if(ch >= '0' && ch <= '9'){
            cin >> n;
            break;
        }
        else{
            cin.get(ch);
        }
    }
    return n;
}


int main(void){
    int m = next_catch_int(), n = next_catch_int();
    cin.ignore(80, '\n');
    std::cout << m << "+" << n << "=" << m+n << std::endl;
}

