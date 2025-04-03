// Kaydyn Wilson Coding 1 Week 10
// Functions 

#include <iostream> 
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;



// global variables are dangerous
// gobal variables exist in all functions in this source file. 
bool debug = true;		// Be careful where and how you use this because it will change everywhere. 



/* Functions!
f(x) = y
f(input) = output
f(2) = 4
f(3) = 6
f(4) = 8

// all functions have a return type, a name, and (input parameters
*/
// declaring and defining a new function named "sayHello"
// it has a return tye of void, which means it returns nothing
// it has one input parameter named "greeting" with a default value of "Hello!"
void sayHello(string greeting = "Hello!") {
	cout << greeting << "\n";		// The same as coutbut more heavy duty. Causes code to slow down so it isn't used much. 
}

// declare the function here
// // In C++ funtions have to be put and defined before the main code. This is different for C#.
// and define it AFTER main
void sayGoodbye(string asdf = "Byeeeeeee");	// Specify what is being said here, NOT at the bottom.

// function name is ... triple(int givenNumber)
int triple(int givenNumber) {
	if (debug) cout << "[givenNumber: " << givenNumber << ".]\n";

	return givenNumber * 3;						// This is the output of the function
}

// function overloading - gives a decimal answer
// function name is ... triple(double givenNumber)
double triple(double givenNumber) {
	if(debug) cout << "[givenNumber: " << givenNumber << ".]\n";	// why do we use debug here?

	return givenNumber * 3;
}

// function name is ... triple(float givenNumber)
float triple(float givenNumber) {
	if (debug) cout << "[givenNumber: " << givenNumber << ".]\n";

	return givenNumber * 3;
}

// function name is ... triple(string givenNumber)
string triple(string givenNumber) {
	if (debug) cout << "[givenNumber: " << givenNumber << ".]\n";

	return givenNumber + givenNumber + givenNumber;
}

// creating a new function named "getPlayerName" 
// return type is string, with two input parameters for minSize and mazSize
string getPlayerName(int minSize = 5, int maxSize = 15) {
	string input;

	do {
		cout << "What is your name?\n";
		getline(cin, input);

		// data validation
		if (input.size() < minSize) {		// .size is used to see howmany charactes are in the string
											// or for vectors to say how many elements are in the vector
			cout << "Your name needs to be at least " << minSize << " characters long.\n";
		}
		else if (input.size() > maxSize ) {
			cout << "Your name needs to be fewer than " << maxSize + 1 << " characters.\n";
		}
		else if (input == "Voldemort") {
			string greeting = "Hello He Who Must Not Be Named!";
			sayHello(greeting);
			return input;
		}
		else {
			string greeting = "Hello " + input + "!";		// create a greating that includes
			sayHello(greeting);								// the player's name
			return input;									// output = player's name
		}
		
	} while (true);
}

int randomNumberInRange(int min = 0, int max = 10) {
	
		if (min >= max) {
			cout << "I'm sorry, that won't work.\n";
			return -1;
		}

		//  calculate range
		int range = (max - min) + 1;
		// return random number
		return rand() % range + min;

}






// create a function that returns a number between min and max
// ask the player for a min number, and a max number, 
// then use the function to return a randomnumber between those values. 




int main() {
	string input;

	cout << "Min = what?\n";
	getline(cin, input);
	int min = stoi(input);

	cout << "Max = what?\n"; 
	getline(cin, input);
	int max = stoi(input); 

	cout << "A random number between " << min << " and " << max;
	cout << " is " << randomNumberInRange(min, max) << ".\n"; 
	
	
	// call the function
	sayHello();
	sayHello("Welcome to the thunderdome!!");	// Changes the original saying defined above to the new one in the parenthesis
	sayGoodbye(); 
	sayGoodbye("Here's looking at you, kid.");

	string playerName = getPlayerName();			// don't HAVE to specify the min and the max

	cout << "Triple of 4 is " << triple(4) << ".\n";
	cout << "Triple of 12 is " << triple(12) << ".\n";
	cout << "Triple of 40 is " << triple(40) << ".\n";
	cout << "Triple of 20 is " << triple(5.35) << ".\n";
	
	cout << "Triple of five is " << triple("five") << ".\n";

	cout << "Please enter your top three favorite foods: \n";
	//string input;		// to keep track of what the user types

	string favFoods[11];

		for (int i = 0; i < 3; i++) {					//
			cout << "Fav Food #" << i + 1 << ": ";;		// prompt the player with text
			getline(cin, input);						// get input from the player

			favFoods[i] = input;						// add that input to the array
		}

		cout << "Here are your favorite foods:\n";
		for (int i = 0; i, 3; i++) {					// run the loop 3 times
			cout << favFoods[i] << "\n";				// output each favFood
		}
}

// after main, we can define our functions
void sayGoodbye(string farewell) {
	cout << farewell << "\n"; 
}