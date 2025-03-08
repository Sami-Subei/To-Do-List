#include <iostream>
#include <stdlib.h>
#include <vector>
#include "functions.h"
using namespace std;

//to make a vector: vector<type> vectorName;

void SlowPrint(const string &text, int delay);
void clearScreen();

int main() {
    vector<string> tasks;
    int menu_choice;
    SlowPrint("------- Hello and Welcome --------\nto Sami's To-Do-List Application! \n", 80);
        do {
        SlowPrint("Your Options are:\n 1. Add Task \n 2. Remove Task \n 3. View Tasks \n 4. Exit Program\n Option:", 80)
        cin >> menu_choice;



        if(menu_choice == 1) {
            clearScreen(); //doesn't work
            cout <<"blackbalckac";
        }
    } while(menu_choice != 4);





    return 0;
}