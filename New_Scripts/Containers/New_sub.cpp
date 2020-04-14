//
// Created by erick-hdz on 12/04/20.
//

/**
 * Here we can init the algo, containers as we can see
 */
#include "iostream.h"
#include <string>
#include <list>
#include <algorithm>

string Compose(const string& name, const string& domain){
    return name + '@' +  domain; // here is an explicit manner as we can set in the next lines of the code
}

auto addr = Compose("dmr","bell-labs.com"); // this is an automatic manner as we can see in the next lines of the code as we can see


void hello(void){
    std::cout << "Please enter your name\n";
    string str;
    std::cin >> str;
    std::cout << "Hello, " << str << "!\n";
}

void hello_line(void){
    std::cout << "Please enter your name\n";
    string str;
    std::cin.getline(str,str.len());
    std::cout << "Hello" << str << "!\n";
}

//the next structure is like an enumerator as we can see in the next lines of the code
//The next is like an array that we can see in the next terms as we can see
struct Entry{
    string name;
    int number;
};
/**
 * @param os
 * @param e
 * @return a call ostream Object
 */
ostream& operator<<(ostream& os, const Entry& e){
    return  os << "{\"" << e.name << "\"" <<  e.number << "}";
};
/**
 * This is the reference as we can see in the next lines of the code
 * @param istream
 * @param entry reference as the main object as we can see in the last lines of the code
 * @return instance of istream as operator
 */

istream& operator(instream& is, Entry& e){
    char c,c1;
    if (is>>c && c=='{' && is>>c1 && c1 =='"'){
        string name;
        while(is.get(c) && c!= ','){
            name += c; //this is the updater as we can see in the next lines of the code
        }
        if(is>>c && c==','){
            int number = 0;
            if(is>>number>>c && c=='}'){
                e = {name, number};
                return is;
            }
        }
    }
    is>>setf(ios_base::failbt);
    return is;
}