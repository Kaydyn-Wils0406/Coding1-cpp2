
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int playerHealth = 25;
int totalTreasure = 0;
int enemyHealth = 10;

bool debug = true;

void startStory() {
	string input;
	int playerHealth = 25;
	int totalTreasure = 0;
	int enemyHealth = 10;

	cout << "Would you like to go adventuring? Type 'Yes' to play and 'No' to end the program.\n";
	
	if (input == "Yes") {	
		cout << "With " << playerHealth << " total health, you head into the forest and come across a beast!\n";
		askYesNo();
	}
	else {
		ending();
	}
}


bool askYesNo() {
	string input;														// I could not figure this out no matter how many different ways I tried or videos I looked up. I don't know how to make it take an input that isnt a number.
																//Is this even supposed to be a bool?
	do {
		cout << "Would you like to attack the beast?\n";
		getline(cin, input);

		if (input == "Yes") {
			cout << "You attacked the beast!\n";				// I need to be able to do the yes and no for this one to work because if I try to 
			actualAdventure();										// base if off of the input, I won't be able to do an if then about the numbers. 
		}
		else if (input == "No") {
			ending();
			break;

		}
	} while (true);
}

void actualAdventure() {
	while (true) {
		int attack = rollDie();
		int block = rollDie();
		if (attack > block) {
			cout << "You have successfully attacked the beast for " << attack << " damage!\n";
			enemyHealth -= attack;
		}
		else if (block >= attack) {
			cout << "The beast has blocked your attack and attacked you back for " << attack << " damage.\n";
			playerHealth -= attack;
		}
		if (playerHealth < 1) {
			death();
			
		}
		else if (enemyHealth < 1) {
			cout << "You have successfully defeated the beast!\n";
			totalTreasure += rollTreasure();
			cout << "You now have " << totalTreasure << " gold coins!\n";
			retry();
		}
	}
}
int rollDie(int sides = 6) {
	return (rand() % sides);
}

int rollTreasure(int faces = 20) {
	return (rand() % faces);
}

void ending() {
	cout << "You head home to saftey with a total of " << totalTreasure << " gold coins.\n";
	if (playerHealth < 2) {
		cout << "You should seek medical attention with the nearest doctor. Your total health is " << playerHealth << ".\n";
		retry();
	}
}
void death() {
	cout << "Tou have taken too much damage and the beast has defeated you! You have lost all your treasure and your life!\n";
	retry();
}
bool retry(string question = "Would you like to try again?\n") {
	do {
		string input;
		cout << question;
		getline(cin, input);

		if (input == "Yes") {
			startStory();
		
		}
		else if (input == "No") {
			break;
		}
		else {
			cout << "Please choose between 'Yes' and 'No' to try again or end program.\n";
		}
	} while (true);
} 

int main() {

	srand(time(0));

	

	startStory(); 

	
}

