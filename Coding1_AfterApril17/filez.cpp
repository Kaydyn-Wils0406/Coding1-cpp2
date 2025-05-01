#include "filez.h"

void WriteShipToFile(ship givenShip) {
	// Open (or create) the file
	ofstream file("ShipType.txt", ios::app);

	// Confirm that the file is open
	if (!file.is_open()) {
		cout << "Could not open file.\n";
	}
	// Write text to the open file. 
	file << &ship::status;


	// Close the file (which saves it to disk)
	file.close();

}

void ReadShipFromFile() {
	string fileContents;

	// open the file
	ifstream file("ShipType.txt");

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