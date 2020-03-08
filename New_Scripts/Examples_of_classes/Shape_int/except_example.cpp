#include <stdio.h>
#include <iostream>

using namespace std;

struct My_exception{
    const char* what() const throw(){
        return "This is a new Exception";
    }
};


namespace my_space(){
    int main(){
        try {
            throw My_exception();
        }
        catch(std::My_exception& e){
            std::cout << "My exception is the next part of the main example " << std::endl;
            std::cout << e.what() << std::endl;
        }
        // catch(My_exception& e){// Here is to catch more Exceptions}
        catch (std::My_exception& e){
            // Catch more Exceptions //
        }
    }
}
