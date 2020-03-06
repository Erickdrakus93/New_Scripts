#include <iostream>
using namespace std;
void get_the_time(unsigned long *ptr);

int main(){
    // Here we define the next part of the variables as we can see
    unsigned long sec;
    get_the_time(&sec);
    // Here we define the next part of the lines of the code

    std::cout << "The time real is the: ";
    std::cout << sec << std::endl;
    return 0;
}

void get_the_time(unsigned long *ptr){
    *ptr = time(NULL);
    return;
}