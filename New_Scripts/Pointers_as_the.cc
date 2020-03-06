#include <iostream>

using namespace std;

int global_var = 42;

// Here we can define the next part of the example
void change_inter_value(int* pp){
    pp = &global_var;
}

// Here we use the main function:

int main() {
    int var = 22;
    int *ptr_to_var = &var;
    // So we use the void to mutate the next part of the example
    std::cout << "Passing Pointer to Function " << std::endl;
    std::cout << "Before: " << *ptr_to_var << std::endl;
    // Here we call the mutate the object;
    change_inter_value(ptr_to_var);
    std::cout << "After the change is:" << *ptr_to_var << std::endl;
    return 0;
}

