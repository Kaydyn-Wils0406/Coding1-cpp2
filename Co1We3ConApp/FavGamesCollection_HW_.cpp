/*
#include <iostream> 
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    string favGames[10];
    string input;
    int currentFavGames = 0;
    

    do {        // Starts the loop
        cout << "Would you like to 'Add', 'Edit', or 'Remove' a game from your favorite games list?\n";
        cout << "\tIf not you can also 'Show' your list or 'Quit' the program.\n";
        getline(cin, input);


        if (input == "Add") {
            cout << "What game would you like to add to your list?\n";
            getline(cin, input);    // I don't know how to get it to keep the input and put it into the loop. 
            (currentFavGames <= 10);
        }
        else if (input == "Quit") {
            cout << "You have chosen to quit the program. Goodbye.\n";
            break;
        }
        else if (input == "Edit") {
            cout << "What game would you like to edit?\n";
            getline(cin, input);    // I dont know how to make it look through the loop to check to edit one. 
            for (int i = 0; i < 10; i++) {
                if (input == favGames[i]) {
                    cout << "I've found the game. How would you like to edit it?\n";
                    getline(cin, input);
                    favGames[i] = input;   // After the 'How would you like to edit it?' it doesnt give you an option to edit it. It just starts over. 
                }
            }
        }
        else if (input == "Remove") {
            cout << "What game would you like to remove?\n"; // what do you want to remove?
            getline(cin, input);// // get input
            // looking through the loop // Don't know how to do this. 
            for (int i = 0; i < 10; i++) {
                if (input == favGames[i]) {
                    cout << "I've found the game, removing it now.\n";
                    favGames[i] = "";
                }
            }
        }
        else if (input == "Show") {
            for (int i = 0; i < 10; i++) {
                // this is how we skip removed or not-yet-added lines in our array
                if (favGames[i] == "") {
                    continue;
                }
                else {
                    cout << favGames[i] << ".\n";
                }
            }
        }
        
        favGames[currentFavGames++] = input;
    } while (true);
} 
*/