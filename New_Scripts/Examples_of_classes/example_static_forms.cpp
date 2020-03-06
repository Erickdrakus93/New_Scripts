#include <iostream>

using namespace std;

class Widget{
public:
    Widget(void){
        ++count;
    }
    ~Widget(void){
        --count;
    }
    // int static count;

    // This is the functionality and
    //int num_of_Widgets(void){
    //    return count;
    // }
    int static num_of_Widgets(void){
        return count;
    }
 //This is the private form as we can see in the next manner
private:
    int static  count;
    // Here we have the static method
};

// Here we define the count integer

int Widget::count = 0; // This is the init in the integer form;

// This is the copy function

Widget func_cpp(Widget u){
    Widget v(u);
    Widget w = v;
    return w;
}

int main(void){
    Widget x;
    Widget y = func_cpp(func_cpp(x));
}