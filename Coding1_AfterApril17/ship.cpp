#include "ship.h"


// define the constructor.
ship::ship() {
	name = "Hua Cheng's Lantern";
	fuel = 50;
	type = FRIGATE;
}

void ship::status() {
	cout << "The ship " << name << " has " << fuel << " fuel.\n";
	cout << "The ship's type is ";

	switch (type) {
	case FIGHTER: cout << "fighter.\n";
		break;
	case FRIGATE: cout << "frigate.\n";
		break;
	case FREIGHTER: cout << "freighter.\n";
		break;
	case CRUISER: cout << "cruiser.\n";
		break;
	}
}