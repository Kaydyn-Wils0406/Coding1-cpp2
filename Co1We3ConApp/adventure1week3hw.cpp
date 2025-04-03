/*
#include <iostream> 
#include <string> 
#include <cstdlib>
#include <ctime> 
using namespace std;

int main() {

	srand(time(0));

	int health = 10;
	int attack = 0;
	int block = 0;
	int turn = 0;
	bool gameRun = false;
	string input = "";

	cout << "\tWelcome Player!\n";
	cout << "\tWould you like to adventure? Yes to play, No to end.\n";

	cin >> input;

	if (input == "Yes") {
		gameRun = true;

		cout << "\tYour base health is 10.\n";
		cout << "\tAn enemy aproaches!\n";
	}
	else {
		cout << "\tClosing Game.\n";
		return (0);
	}


	while (gameRun) {
		turn += 1;
		attack = (rand() % 4);
		block = (rand() % 4);

		cout << "\tThe enemy rolled a " << attack << " for attack. You rolled a " << block << " for your block.\n";
		if (attack > block) {
			health -= attack;
			cout << "\tYou've failed to block the attack!\n";
			cout << "\tYou've taken " << attack << " points of damage.\n";
			cout << "\tYour current health is " << health << ".\n";

			if (health < 1) {
				gameRun = false;
				cout << "\tWould you like to try again?\n";
				cin >> input;
				if (input == "Yes") {
					health = 10;
					turn = 0;
					cout << "\tYour health has been reset to 10.\n";
					cout << "\tA new enemy approaches.\n";
					gameRun = true;
				}

			}

		}
		else {
			cout << "\tYou've successfully blocked the attack and took no damage.\n";
		}

		cout << "\tKeep playing?\n";
		string input;
		cin >> input;

		if (input == "no") {
			cout << "\tThanks for playing!\n";
			return (0); // breaks the loop
		}
		else {
			cout << "\tHere we go again!\n";

		}
		if (turn == 4) {
			cout << "\tYou've survived the encounter with the enemy! Continue on with your journey!\n";
			return (0);
			}
		

	}
}


// getline(cin, input);		// getline allows for spaces, only returns strings though. 
//stoi(input);				// this gives you an integer from a string.
//int age = stoi(input);

*/