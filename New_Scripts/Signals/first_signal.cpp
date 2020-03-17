//
// Created by erick-hdz on 07/03/20.
//

#include <iostream>
#include <stdio.h>
#include <csignal>

using namespace std;
// THis is the subroutine that emits a signal
void signal_Handler(int signum){
    std::cout << "Interrupt signal in the next context" << signum << "received.\n";
    exit(signum);
}


int main(void){
    signal(SIGINT, signal_Handler);

    while(true){
        std::cout << "Going to sleep ..." << std::endl;
        sleep(1);
    }
    return 0;
}