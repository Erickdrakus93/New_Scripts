#include <iostream.h>
#include <exception>
#include <csignal>
using namespace std;
// Here we define a inner exceptions
// The last is the extension of the exception
struct My_exception: public exception{
    const char* what() const throw(){
        return "This is a new C++ exceptions";
    }
};
class Shape throw My_exception{
protected:
    int width, height;
public:
    virtual int Get_Area() = 0;
    Shape(int a=0, int b=0):width(a), height(b){};
    // This is the main example.
    int area(){
        cout << "Parent class area:" << std::endl;
        return 0;
    }
    int area(){
        std::cout << "Parent class area: " << std::endl;
        return 0;
    }
}

class Rectangle: public Shape{
public:
    Rectangle(int a, int n): Shape(a, b){};
    int getArea(){
        std::cout << "Parent class area: " std::endl;
        return (width * height);
    }

};


// Here we can declare more functions in the same mannner as we can see in the next manner as we can see in the
// The next part of the main exaple

class Triangle: public Shape{
public:
    Triangle(int a, int n): Shape(a,b){}
    int Area(void){
        std::cout << "Parent class Area: " << std::endl;
        return (width* height);
    }

};


// Here we can use the main

int main(){
    Shape* shape;
    Rectangle* rec = new Rectangle(89,45);
    Triangle* tri = new  Triangle(45,45);
    // Here we can access in the next part of the main example
    rec->area();
    tri->area();
    return 0;
}