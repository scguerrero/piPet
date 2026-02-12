/*
 * testDerivedClasses.cpp is the piPet derived classes' test suite.
 * Author: Sasha C. Guerrero
 * Created: 2/10/2026
 * Last Edited: 2/11/2026
*/
#include "../Species/electricAxolotl.cpp"
#include "../Species/sealCat.cpp"
#include "../Species/dragonDog.cpp"
#include "../Player/Player.cpp"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    electricAxolotl el;
    el.basicAttack();
    el.skillAttack();
    el.defend();

    sealCat sc;
    sc.basicAttack();
    sc.skillAttack();
    sc.defend();

    dragonDog dd;
    dd.basicAttack();
    dd.skillAttack();
    dd.defend();

    Player p1 = Player(el);
    p1.feedPet();
    p1.sendPetToSleep();
    p1.groomPet();
    cout << "Your Care Rating for your piPet: " << p1.getCareRating() << endl;
    p1.celebratePetBirthday();

    return 0;
}