// Kaydyn Wilson Coding 1 Feb 20, 2025
// Loops and Lists

#include <iostream> 
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

	srand(time(0));

	cout << "Welcome to week 5!\n";

	// if /else if /else
	// variables
	// while and do-while
	// random numbers

	cout << "What program would you like to run?\n";
	cout << "Press 1 for keep playing.\n";
	cout << "Press 2 for Player name.\n";
	
		string input;		// make a variable to store the input from the player
	getline(cin, input);	// get the input from the player

	// test the input from the player
	// stoi() stands for "string to integer" and converts a string to an integer  (if it can)

	if (stoi(input) == 1) {
		cout << "Let's start the Keep Playing Program!\n";

	}
	else if (stoi(input) == 2) {
		cout << "Let's start the Player Name Program.\n";

	}
	
	else {
		cout << "I didn't understand that request.\n";
	}

		// lists
			// arrays
			// vectors
		//loops
			// for loop
		// more logic
			// switch statement
			// if/elseif/else

	string colors[4];
	colors[0] = "Red";
	colors[1] = "Blue";
	colors[2] = "Green";
	colors[3] = "Yellow";

	cout << "The first color in our array of colors is " << colors[0] << ".\n";

	// Let's loop all of the colors.
	cout << "\nHere are all of the colors in the array:\n";
	int iterator = 0;						// the iterator counts, starting at 0
	while (iterator < 4) {					// loop as long as were less than the array's size
		cout << colors[iterator] << "\n";			// send the array element's vlue to the console
		iterator += 1;						// add 1 to the iterator
	}

	// let's build a new list, using player input. 
	cout << "Who are your best friends?\n";

	// keep using string inut from earlier. 
	string bestfriends[10];			// size of 10. arrays must specify size in c++
	int currentElement = 0;

	do {
		cout << "Enter a name, or type 'quit' to quit.\n";
		getline(cin, input);				// using cin, get input and assign it to temp

		bestfriends[currentElement++] = input;		// after currentElement is used, add 1

	} while (input != "quit" && currentElement <= 10);			// ! is the not operator
										// "loop while input is NOT equal to quit"
											// and while currentElement is less than or qual to 10. 
			// error looks like this: 
			// there's a main():: input AND a do:: input

	cout << "Here are all of your best friends. Looks like a great party.\n";
	for (int i = 0; i < currentElement; i++) {
		cout << bestfriends[i] << "\n";
	}

	/*
		seed random number generator
		(srand(time(0));
		I do not know what to do after this. 
		We learned how to do a limited known array but I do not know how to do a random number one. 
		string years[33]; 
		33 lines of code that look like this: 
		int years = (rand() % 249) +1777;		// since these are numbers, we do not use string, we use int
		years[1]
		years[2]
		years[3] and so on and so forth. 
	
	*/
	int min = 1777;
	int max = 2025;
	int range = max - min;
	int randomYear = (rand() % (range + 1)) + min;

	int randomYears[33];

	// run 33 times, adding a random number to the array each time.
	// let's check for most recent year
	int mostRecentYear = 0;
	for (int i = 0; i < 33; i++) {
		randomYears[i] = (rand() % (248 + 1) + 1777);

		if (randomYears[i] > mostRecentYear) {
			mostRecentYear = randomYears[i];
		}

	}
	// show all the years
	for (int i = 0; i < 33; i++) {
		cout << randomYears[i] << "\n";
	}

	cout << "The most recent year in the list is " << mostRecentYear << ".\n";


		// creat an array of 33 random numbers bwtween 1777 and 2025
		// then, tell the user what the highest number in that array is. 
	return 0;
}





/* create a program that will
* 1. add a game to an array of strings
* 2. edit the name of the game
* 3. Remove the game
* 4. Show the list
* 5. Quit
* 
* Submit to this assignment page a link to your .cpp file in github. 
*/ 
