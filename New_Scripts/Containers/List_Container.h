//
// Created by erick-hdz on 10/04/20.
//

#ifndef NEW_SCRIPTS_LIST_CONTAINER_H
#define NEW_SCRIPTS_LIST_CONTAINER_H

#include <Container.h>

class List_Container: public Container {
    std::list<double> ld; //this is the list container as we can see in the next lines of the code.
public:
    List_Container(void){};
    List_Container(initializer_list<double> il):ld(il){};
    ~List_Container(){}; // this is the destructor as we can see in the next lines as we can see
    double&operator[](int i);
    int size(void) const; // this is the constant as we can see in the next lines as we can see in the next lines


};


#endif //NEW_SCRIPTS_LIST_CONTAINER_H
