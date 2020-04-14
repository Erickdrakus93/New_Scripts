//
// Created by erick-hdz on 14/04/20.
//
#include <iostream>
#include <string>
#include <list>
#include <map>
/**
 * This is the main example of the container
 */

struct Entry{
    string name;
    int number;
};
map<string,int> phone_book{
        {"david Hume",      5555},
        {"erick Hernandez", 555},
};

int get_number(const string& name){
    return phone_book[name];
    // here if is not found the num return 0;
}

//examples of not ordered maps, we can see in the next lines the next as we can see


unordered_map<string,int> unorderedMap{
        {"David Hume", 555},
        {"Erick Hernandez",6665},
        {"Bertrand rousell",5555}
};

int get_number_unordered(string& name){
    return unorderedMap[name];
}


// Here we can define the next algorithm
// the last is the friend operator of the class Vector as we can see
// Creating a vector in the next lines of the code as we can see.
bool operator<(const Entry& x, const Entry& y) {
    return x.name < y.name;
}


void routine_as_an_example(vector<Entry>& vector, list<Entry>& list){
    sort(vector.begin(),vector.end());
    unique_copy(vector.begin(),vector.end(),list.begin());
}