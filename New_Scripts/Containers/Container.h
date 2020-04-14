//
// Created by erick-hdz on 10/04/20.
//

#ifndef NEW_SCRIPTS_CONTAINER_H
#define NEW_SCRIPTS_CONTAINER_H


class Container {
public:
    virtual Container(){};
    virtual double&operator[](int i) = default;
    virtual int size() const = default;
    virtual ~Container(){};

};


#endif //NEW_SCRIPTS_CONTAINER_H
