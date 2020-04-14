//
// Created by erick-hdz on 14/04/20.
//

#include <iostream>
#include <string>
#include <vector>


using namespace std;


struct Entry{
    string name;
    int number;
};
vector<Entry> phone_book = {
        {"David Hume", 666666}, // this is the memory 1, etc
        {"Erick Hernandez", 5545556556},
        {"Bertrand Russel",6564644},
        {"Rebeca Sanchez",85544}
};
/**
 * oustream object as the return the element as we can see
 * @param book
 */
void print_book(const vector<Entry>& book){
    for (int i = 0; i!=book.size(); ++i) {
        std::cout << book[i] << '\n';

    }
}


//more examples of vector<T>
template <typename T>
vector<T> vector;

// Concrete examples as we can see
vector<int> v1 = {1,2,3,4};
vector<string> v2;
/**
 * void
 */
void input(void){
    for (Entry e; cin>>e;){
        phone_book.push_back(e);
    }
}


template <typename T>
class Vec: public std::vector<T>{
    using vector<T>::vector;
    T&operator[](int i){
        return vector<T>::at(i);
    }
    const T&operator[](int i){
        return vector<T>::at(i);
    }
};

void check_size(Vec<Entry> book){
    try {
        book[book.size()] = {"Joe", 5555555};
    }
    catch (out_of_range){
        std::cout << "range of error \n";
    }
}
