// Coding1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>     // this aows us to send text to and from the console. 
using namespace std;    // this allows (tabs are great) us to NOT type "std::" all the GD time. 

int main()              // this is where our program starts.
{
    // variable are nicknames for data.
    // variable type is string, variable name is "name", variable value is "Jinx".
    string name = "Jinx";         // from Arcane
        // variable type in integer, variable name is health,variable value is 45.    
        int health = 45; // range of 0-100

    cout << "My name is " << name << ".\n";     // #1 task, add "I have <health> health.\n

    cout << "I have " << health << " health .\n";   // you put the variable where it is needed. For my name is, the variable is at the end because that is where it is.
    // For I have (blank) health, the variable health is in the middle because that is where the number will be. 

    std::cout << "Hello Adyann and Kaydyn\n";      // this line sends text to the console. 


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
