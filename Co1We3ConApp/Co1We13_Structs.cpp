#include <iostream> 
#include <string> 
#include <vector>
using namespace std;

enum enemyType { GRUNT, MINIBOSS, BOSS };

// POD structures
// a custom variable type
struct enemy {
    int health = 10;
    int damage = 4;
    string name = "Enemy";
    enemyType type = GRUNT;
};

struct address {
    string streetName;
    int streetNumber;
    string city;
    string stateCode;
    int zipCode;
};

struct employee {
    int Id = 0;
    string name;
    int age;
    // string address;
    address addr;
    float wage;
};

// added under struct employee
string AddressOneLine(address addr) {
    string oneLine;
    oneLine += to_string(addr.streetNumber);
    oneLine += " " + addr.streetName;
    oneLine += ", " + addr.city;
    oneLine += ", " + addr.stateCode;
    oneLine += ", " + to_string(addr.zipCode);

    return oneLine;
}

int main() {
    cout << "Structures!\n";

    enemy brandon;
    brandon.health = 10;
    brandon.damage = 4;
    brandon.name = "Evil Brandon";
    brandon.type = GRUNT;

    cout << "Here's " << brandon.name << "! His health is " << brandon.health << ".\n";

    enemy tom;
    tom.damage = 6;
    tom.name = "Skinney Tom";

    cout << tom.name << " is attacking " << brandon.name << "!!\n";
    brandon.health -= tom.damage;

    if (brandon.health < 1) {
        cout << brandon.name << " has been killed!\n";
    }
    else {
        cout << brandon.name << " has " << brandon.health << " health left!\n";
    }

    vector<enemy> enemies;

    enemies.push_back(brandon);
    enemies.push_back(tom);

    cout << "Status of all enemies:\n";
    for (int i = 0; i < enemies.size(); i++) {
        cout << enemies[i].name << " has " << enemies[i].health << " health.\n";
        cout << "Their damage is " << enemies[i].damage << " and their type is ";
        switch (enemies[i].type)
        {
        case GRUNT:
            cout << "grunt";
            break;
        case MINIBOSS:
            cout << "mini-boss";
            break;
        case BOSS:
            cout << "boss";
            break;
        default:
            cout << "unknown";
            break;
        }
        cout << ".\n";
    }

    employee kaydyn;
    kaydyn.Id = 2456;
    kaydyn.name = "Kaydyn Wilson";
    kaydyn.age = 20;
    kaydyn.wage = 11.00f;
    kaydyn.addr.streetNumber = 1234;
    kaydyn.addr.streetName = "Lincoln Street";
    kaydyn.addr.city = "Lakin";
    kaydyn.addr.stateCode = "KS";
    kaydyn.addr.zipCode = 12345;

    // added after employee kaydyn

    cout << kaydyn.name << " lives at " << AddressOneLine(kaydyn.addr) << ".\n";

    // Takeaways
    // structs can hold other structs!
    // Does multiple things to give out just one. 
    // Can use both vectors and structures at the same time. 
    // Switch learned
    // can only do itone time no loop. 

    return 0;
}
