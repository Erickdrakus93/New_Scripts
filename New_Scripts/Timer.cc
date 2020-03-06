#include <iostream>
#include <ctime>

using namespace std;
// Function Declaration //

double get_Average(int *arr, int size);

int main() {
    int balance[5] = {100,4552,89555};
    double average;
    // Pass the pointer to the invoke function //
    average = get_Average(balance, 5);
    std::cout << "Average value of the balance is:";
    std::cout << average << std::endl;
    return 0;
}


double get_Average(int *arr, int size){
    int i, sum = 0;
    double avg;
    for(i=0; i<size; i++){
        sum += arr[i];
    }
    avg = double(sum) / size;
    return avg;
}