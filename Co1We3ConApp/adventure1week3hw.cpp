#include <iostream> 
using namespace std;

int main() 


while (true) {
	cout << "Keep playing?\n"; 
	string input;
	cin >> input; 

	if (input == "yes") {
		cout << "Here we go again!\n";
	}
	else {
		cout << "Thanks for playing!\n"; 
		break;		// this breaks us out of the loop early!
	}
}