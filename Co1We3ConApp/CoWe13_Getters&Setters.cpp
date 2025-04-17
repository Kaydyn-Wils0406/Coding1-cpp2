#include <iostream>
#include <string>
using namespace std;


class robot {
private:                // Usually Data members are private so it is easier to change what they are or decide what they are.
    // Data Members
    string name;
    string phrase;
    int charge = 10, maxCharge = 100, minCharge = 0;     // Can declare multiple different variables on the same line
                                                        // as long as they are the same type. 
 
public:
    robot(string, string, int);
    robot();
    void SayHello();

    // Setters and Getters give access to private variables 
    // through whatever tests we want to write.

    // SetCharge clamps charge to a range 0-100 (inclusive)
    // setters will always have an input parameter
    void SetCharge(int givenCharge) {
        if (givenCharge < 0) {
            charge = 0;
        } else if (givenCharge > 100) {
            charge = 100;
        } else {
            charge = givenCharge;
        }
    }
    void ChangeCharge(int by = 1) {
        charge += by;
        SetCharge(charge);
    }
    // getters will always have a return type. 
    int GetCharge() {
        return charge;
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
    // no need to let people set the phrase
    // or hear it! The robot gets to be in charge of when they say that. 

protected:
};


robot::robot(string givenName, string givenPhrase, int givenCharge) {
 
    name = givenName;
    phrase = givenPhrase;
    charge = givenCharge;

    cout << "A new robot has been constructed!\n";
}

robot::robot() {
    cout << "Using the DEFAULT constructor.\n";
    cout << "Hey programmer Dean, please fix this in the source code.\n";
}

void robot::SayHello() {
    cout << "My name is " << name << " and my charge is " << charge << ".\n";
    cout << phrase << "\n";
    ChangeCharge();     // this task was not very expensive on our charge. 
}

int main() {
    cout << "Classes, yeah?\n";

    robot bobert;
    bobert.SetName("Bobert Junior");
    bobert.SetCharge(5);

    cout << "Have a look at my new robot! Their name is " << bobert.GetName() << ".\n";
    cout << "I am currently charging them, their charge is " << bobert.GetCharge() << ".\n";

    bobert.ChangeCharge(50);
    cout << "Two hours later, bobert's charge is now " << bobert.GetCharge() << ".\n";

    robot rob("Roberto", "I can fix anything!", 25);
    cout << "My new robots were very expensive! They works on the neclear reactor.\n";
    cout << "They can introduce themselves, watch!\n";
    rob.ChangeCharge(-200);         // nuclear reactor zapped all energy. 

    rob.SayHello();
    bobert.SayHello();
    return 0;
}