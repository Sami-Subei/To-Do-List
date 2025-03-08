#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
using namespace std;
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#endif //FUNCTIONS_H


void SlowPrint(const string &text, int delay) {
    for(char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
}

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

}