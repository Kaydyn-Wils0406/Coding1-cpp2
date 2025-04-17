
#include <iostream>
#include <string>
using namespace std;

class human {

private:

	string name;
	int health = 30, damage = 15;

public:
	human(string, int, int);
	human();
	void SayHello();
	void SayGoodbye();

	void SetHealth(int baseHealth) {
		if (baseHealth < 1) {
			health = 0;
			cout << "Oh no! " << name << " died!\n";
		}
		else if (baseHealth > 30) {
			health = 30;
			cout << name << " is at full health!\n";
		}
		else {
			health = baseHealth;
			cout << name << " has " << health << " hit points left!\n";
		}
	}

	void SetDamage(int baseDamage) {
		if (health < 15) {
			baseDamage = 5;
		}
		else if (health > 15) {
			baseDamage = damage;
		}
	}

	void ChangeHealth(int by = 1) {
		health += by;
		SetHealth(health);
	}

	int GetHealth() {
		return health;
	}
	int GetDamage() {
		return damage;
	}


	void SetName(string givenName) {
		if (givenName.size() < 2) {
			cout << "Name is too short!\n";
			return;     // return nothing out of a void function to end the function. THIS WILL NOT END THE PROGRAM
		}
		else if (givenName.size() > 20) {
			cout << "Name is too long!\n";
			return;
		}
		else {
			name = givenName;
		}
	}
	string GetName() {
		return name;
	}



protected:

};

// Constructors
human::human(string givenName, int baseHealth, int baseDamage) {
	name = givenName;
	health = baseHealth;
	damage = baseDamage;

	cout << "I have shown up!\n";
}

void human::SayHello() {
	cout << "Hello! My name is " << name << " and my total health is " << health << ".\n";
}

void human::SayGoodbye() {
	cout << "I was recalled to the factory for medical help.\n";
}



int main() {

	cout << "Are you read to meet my new human?\n";

	human kaydyn;
	kaydyn.SetName("Kaydyn Wilson");
	kaydyn.SetHealth(50);

	cout << "This is my new human! Their name is " << kaydyn.GetName() << " and they have a base health of " << kaydyn.GetHealth() << " hit points and at full health they can do " << kaydyn.GetDamage() << " points of damage!\n";
	cout << "Greet everyon human!\n";
	kaydyn.SayHello();

	kaydyn.ChangeHealth(14);
	cout << "Oh no! Kaydyn decided to go adventuring and they came back hurt!\n";
	cout << "They now have " << kaydyn.GetHealth() << " hit points left and can only do " << kaydyn.GetDamage() << " points of damage now!\n";

	kaydyn.SayGoodbye();

	return 0;
}

/* 
Create a human class with the following:

string Name
int Health = 10
int Damage = 4
a Constructor with parameters for name, health, baseDamage
void SayHello()
void SetHealth(int byAmount)
void SetDamage(int givenDamage)
int GetHealth()
int GetDamage()
*/