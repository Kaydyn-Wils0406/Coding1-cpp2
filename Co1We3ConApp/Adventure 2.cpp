
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

bool debug = true;

void startStory() {
	cout << "You explore a forest and come across a beast.\n";		// This is the only thing I am confident in. 
}


bool askYesNo(int input) {
	// I could not figure this out no matter how many different ways I tried or videos I looked up. I don't know how to make it take an input that isnt a number.
	//Is this even supposed to be a bool?
}
bool adventure() {
	int number = rand() % 10;

	if (number > 4) {
		return true;			// I am supposed to use this with the actualAdventure but I don't know how to connect them. 
	}
	else {
		return false;
	}
}

string actualAdventure(int attack, int block) {
	string input;
	int attack = (rand() % 5);
	int block = (rand() % 5); 

	do {
		cout << "Would you like to attack the beast?\n"; 
		getline(cin, input);

		if (input == "Yes") {
			cout << "You rolled a \n";				// I need to be able to do the yes and no for this one to work because if I try to 
													// base if off of the input, I won't be able to do an if then about the numbers. 
		}

	} while (true);
} 
int rollOrDie(int sides = 6) {

}

int main() {

	srand(time(0));

	int health = 10;
	int totalTreasure = 0;		// got this from the previous adventure assignment

	startStory(); 

	if (adventure()) {
		cout << "You've won a prize!!\n";
		// if true, call adventure
	}
}

