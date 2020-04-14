//
// Created by erick-hdz on 11/04/20.
//

#include <iostream>
using namespace std;
/**
 * This is the constructor of the main form as we can see in the next lines of the code
 * The typename is like the next sense as we can see in the next manner
 * @tparam T
 */
template <typename T>
class Vector{
private:
    int size;
    T* element;
public:
    Vector(int size);
    ~Vector();
    T& operator[](int i)const;
    int size(void) const;
};

template <typename T>
Vector<T>::Vector(int size) {
    if (size<0){
        throw Negative_size();
    }
    element = new T[size];
    size = size;
}

template <typename T>
const T& Vector::operator[](int i) const {
    if (i<0 || size()<= i){
        throw out_of_range("Vector operator []");
    }
    return element[i];
}
/**
 * Void that eats a reference of Vector<T>
 * @param vector
 */
void write(const Vector<string>& vector){
    for (int i = 0; i!=vector.size(); ++i) {
        std::cout << vector[i]<< "\n";
    }

}
/**
 * This is a subroutine that we can do in another forms as we can see in the next lines of the code
 * @tparam T
 * @param x
 * @return
 */
template <typename T>
T* begin(Vector<T>& x){
    return &x[0]; //here we are pointer tha the init of the vector as we can see
}
/**
 * Return the last value of the vector object
 * @tparam T
 * @param x
 * @return
 */
template <typename T>
T* end(Vector<T>& x){
    return begin(x) + x.size(); //this is the pointer as we can see in the
}