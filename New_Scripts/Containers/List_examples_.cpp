//
// Created by erick-hdz on 14/04/20.
//

#include <string>
#include <iostream>
#include <list>

/**
 * This is a Simple Structure
 */
struct Entry {
    string name;
    int number;
};
/**
 *
 */
list<Entry> phone_book = {
        {"David Hume", 444},
        {"Erick Hernandez",6660}
};


int get_number(const string& s){
    for (const auto& x:phone_book){
        if(x.name == s){
            return x.number;
        }
    }
    std::cout << "number not found";
    return 0;
}

int get_number(const string& s){
    for (auto p:phone_book.begin(); p!=phone_book.end(),++p) {
        if (p->name == s){
            return p->number;
        }

    }
    std::cout << "number not found";
    return 0;

}