// Recap for Visual Studio

#include <iostream> 
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>


using namespace std;

int  main() {
	srand(time(0));
	bool debug = false;

	cout << "Hello!\n";

	cout << "What is your name?\n";
	string input;
	getline(cin, input);

	if (input == "Kaydyn") {
		cout << "Hello Creator!\n";
		debug = true;
		if (debug) cout << "Debug mode is ON.\n";
	}

	else {
		cout << "Hello " << input << ".\n";
	}




	if (false) {





		int theNumber = rand() % 10 + 1;
		if (debug) cout << "The number is " << theNumber << ".\n";
		int guess = 0;
		cout << "I am thinking of a number between 1 AND 10 (INCLUSIVE).\nCan you guess the number?\n";

		while (guess != theNumber) {
			cout << "What is your guess?\n>>";
			getline(cin, input);
			guess = stoi(input);

			if (guess == theNumber) {
				cout << "You guessed it!\n";
				break;

			}
			if (guess > theNumber) {
				cout << "Too high!\n";
			}
			else {
				cout << "Too low!\n";
			}
		}
	} // end of if(false)


	if (true) {
		// start talking about Vectors
		// vectors are resizable arrays. 
		// dont forget to do #include vector

		// use a collection initializer when creating a new vecctor (or array) to automatically add items.
		vector<string> favBooks = { "Solo Leveling", "Heaven Official's Blessing", "Percy Jackson and the Olympians" };

		cout << "The first book in my list of favorite books is " << favBooks[0] << ".\n";

		cout << "Please add another book to the list.\n";
		getline(cin, input);

		favBooks.push_back(input);		// ads another element to the end of the vector. 


		cout << "There are now " << favBooks.size() << " books in the list.\n"; 
		cout << "The last book in the list is " << favBooks[favBooks.size() - 1] << ".\n";

		// useful stuff with vectors, after push_back and variable sizes
		// is include <algoristhm> for .find() and .sort() and .shuffle()

		cout << "\tHere is the unsorted list:\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << "\n";
		}
		cout << "\tLet's sort the list!\n"; 
		sort(favBooks.begin(), favBooks.end());

		cout << "\tHere is the sorted list:\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << "\n";
		}
		
		cout << "\tRandomly shuffleing the list:\n";
		random_shuffle(favBooks.begin(), favBooks.end());

		cout << "\tHere is the shuffled list:\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << "\n";
		}

		cout << "\tGive me a book from the list, and I'll tell you what position it is in the list.\n"; 
		getline(cin, input);
		vector <string>::iterator iter;							// new kind of variable type called the iterator.
		iter = find(favBooks.begin(), favBooks.end(), input);	// they point at a vertain spot in the vector. 

		if (iter != favBooks.end()) {							// if find() went through the whole vector and didn't 
			cout << *iter << ".\n";								// find anything, iter will point at vector.end()

		}
		else {
			cout << "\tThat book is not in the list.\n";
		}

	}
}
