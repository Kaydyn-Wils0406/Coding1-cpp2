#include "filez.h"

void WriteToFile(string givenString) {
	// Open (or create) the file
	ofstream file("file.txt", ios::app);

	// Confirm that the file is open
	if (!file.is_open()) {
		cout << "Could not open file.\n";
		return;
	}
	// Write text to the open file. 
	file << givenString;


	// Close the file (which saves it to disk)
	file.close();

}

void ReadFromFile() {
	string fileContents;

	// open the file
	ifstream file("file.txt");

	// check that it's actualy open
	if (!file.is_open()) {
		cout << "Could not open the file.\n";
	}

	// cout everything in the file
	while (getline(file, fileContents)) {
		cout << fileContents << "\n";
	}

	// close the file
	file.close();
}

void WriteShipToFile(ship givenShip) {
	cout << "Writing " << givenShip.name << " to file\n";

	// Open (or create) the file
	ofstream file("ShipType.txt", ios::app);

	// Confirm that the file is open
	if (!file.is_open()) {
		cout << "Could not open file.\n";
		return;
	}
	// Write text to the open file. 
	file << "The saved ship is named " << givenShip.name << ".\n";		// add the name , which is a string, to the file.
	file << "This ship has " << givenShip.fuel << " gallons of fuel.\n";		// treat this just like cout
	file << "The ship's type is ";

	switch (givenShip.type) {				// trying to take in a 
	case FIGHTER: file << "fighter.\n";
		break;
	case FRIGATE: file << "frigate.\n";
		break;
	case FREIGHTER: file << "freighter.\n";
		break;
	case CRUISER: file << "cruiser.\n";
		break;
	}
	file << "Was the ship correct?\n";


	// Close the file (which saves it to disk)
	file.close();


}
