#include <iostream>
#include <stdlib.h>
#include <vector>
#include "functions.h"
using namespace std;

//to make a vector: vector<type> vectorName;
// use for loop to print out vector elements for (type variable : vectorName) {}

void SlowPrint(const string &text, int delay);
void clearScreen();

int main() {
    vector<string> tasks;
    int menu_choice;
    string new_task;
    SlowPrint("------- Hello and Welcome --------\nto Sami's To-Do-List Application! \n", 20);
        do {
            SlowPrint("To-Do-List:\n 1. Add Task \n 2. Remove Task \n 3. View Tasks \n 4. Exit Program\n Choice:", 20);
            cin >> menu_choice;

            cin.ignore();

            if(menu_choice == 1) {
                clearScreen(); //doesn't work
                cout << "Enter Your New Task:";
                getline(cin, new_task);
                tasks.push_back(new_task);

            }
                else if (menu_choice == 2){
                    cout << "Enter Task To Remove: ";
                    getline(cin, new_task);
                    tasks.erase(find(tasks.begin(), tasks.end(), new_task));

                }
            else if (menu_choice == 3) {
                SlowPrint("\n \n \n \n \n \n \n \n \n", 40); //just till i figure out clearscreen();

                    for(int i = 0; i < tasks.size(); i++) {
                        cout << i + 1 << "." << tasks[i] << endl;
                    }
                }


    } while(menu_choice != 4);





    return 0;
}