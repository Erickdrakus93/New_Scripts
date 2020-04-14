//
// Created by erick-hdz on 11/04/20.
//
#include <string>
#include "Container.h"
#include <iostream>

template <typename Container,typename value>

Value sum(const Container& container, Value value){
    for (auto x:container){
        value +=x;
    }
    return value;
}

/**
 *  This is here we work as a function call
 * @tparam T
 */
template <typename T>
class Less_than{
        const T val;
public:
        Less_than(const T& value):val(value){};
        bool operator()(const T& x) const{
            return x<val; //this is the boolean assigment
        }
    };

Less_than<int> iti{45};
Less_than<string> its{"backups"};
/**
 * This is is a subroutine that returns true or false in
 * the last context
 * @param n
 * @param s
 */
void func(int n, string s){
    bool b1 = iti(n);
    bool b2 = its(s);
}
/**
 * Here we iterate and tranverse in the elements of C genericType
 * @tparam C
 * @tparam P
 * @param c
 * @param pred as predicates in a logic sense
 * @return
 */
template <typename C, typename P>
int count(const C& c, P predicate){
    int count = 0; //this is the init of the main form
    for (const auto&x:c){
        if  (predicate(x)){
            ++count;
        }
    }
    return count; //this is the manner as we can see
}
/**
 *
 * @param vector
 * @param lst
 * @param x
 * @param s
 * This is the call in the next sense of the object as we can see
 */

void fun_example(const Vector<int>& vector, const list<string>& lst,int x, const string& s){
    std::cout << "number of values less than" << x
              << ":" << count(vector,Less_than<int>{x})
              <<"\n";
    std::cout << "number of the values less than " << s
              << count(lst,Less_than<string>{s})
              << "\n";
}

void fun_example(const Vector<int>& vector, const list<string> list, int x, const string& string){
    std::cout << "number of values less than" << x
              << ":" << count(vector,[&](int a){return a<x;})
              <<"\n";
    std::cout << "number of the values less than:" << string
              << ":" << count(list,[&](string& a){return a<string;})
              <<"\n";

}
/**
 * This is like the template as we can see in the las lines of the code as we can see
 * @tparam C
 * @tparam Oper
 * @param c
 * @param oper
 */
template <class C,class Oper>
void for_all(C& c, Oper oper){
    for (auto &x:c) {
        oper(*x);
    }
};
/**
 * This is an abstract class that we can inherit as we can see.
 * With as we can see in the last lines of the code
 */
class Shape{
public:
    virtual Point center() const = default;
    virtual void move(Point to) = default;
    virtual void draw(void) const = default;
    virtual void rotate(int angle) = default;
    //Constructor an destructors as we can see

    virtual Shape(){};
};
/**
 * This is an example of the delta functions as we can see in
 * The last lines of the call
 */
void Usage_for_the_form(void){
    Vector<unique_ptr<Shape>> vector;
    while (cin){
        v.push_back(read_shape(cin));
    }
    for_all(v,[&](Shape&s){s.draw();});
    for_all(v,[&](Shape&s){s.rotate(45);});
}

// Here we can use the Variadic Templates as we can see in the next lines of the code
template <typename T, typename... Tail>
void func_void(T head,Tail...tail){
    g(head); // do something with the head as we can see;
    func_void(tail...); //try again with the argument tail as we can see //
}
/**
 * This emulates the printf(); as we can see
 */
void func_void(void){}; //do nothing

int main(void){
    std::cout << "first";
    func_void(1,2,3,"hello"); // this is the call of func_void(2,2,"hello")

    sts::cout<<"\nSecond";
    func_void(0.2,'c'."Yunky!",1,2,3);
    std::cout << "\n";
}
/**
 * g implementation as we can set
 *
 */
template<typename T>
void g(T x){
    std::cout << x << ":"; //this is very simple as we can set in the last lines of the code as we can see
}

template <typename Key,Typename Value>
clas Map{

};

template <typename Value>
using String_map = Map<string,Value>;
String_map<int> stringMap; //this is the recall as we can see

using type_t = unsigned float; // This is for raname the Objects as we can see in the next lines of the code 