//
// Created by erick-hdz on 10/04/20.
//

#ifndef NEW_SCRIPTS_VECTOR_CONTAINER_H
#define NEW_SCRIPTS_VECTOR_CONTAINER_H


class Vector_container {
    Vector vector;
public:
    Vector_container(int s):vector(s){};
    ~Vector_container(){};

    //this is the operators as we can write in the next lines

    double&operator[](int i);
    int size const (void);
};


#endif //NEW_SCRIPTS_VECTOR_CONTAINER_H
