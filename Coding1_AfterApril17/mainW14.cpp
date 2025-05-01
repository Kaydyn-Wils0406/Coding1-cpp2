// Kaydyn Wilson Coding 1 Spring 2025
// Week 14 Reading from and Writing to Files

#include <iostream>
#include <string>
#include <fstream>		// File Stream, for reading from and writing files. 

#include "filez.h"
#include "ship.h"
using namespace std;



int main() {
	cout << "Let's write some new files!\n"; 

	
	ReadShipFromFile();

	ship trans;
	trans.type = FIGHTER;
	trans.status();

	WriteShipToFile;		// I think there is a way to make this take in the ship status function but I can't figure out how 
							// because we were taught the print string way only...
	return 0;
}

/*
	files we'll use today

	mainW14.cpp				<--- This is the entry point for the rest of the program.
	filez.h
	filez.cpp
	ship.h
	ship.cpp

	the header file just jas the #includes and the function declarations 
	the source file (.cpp) will have the function definitions 

*/