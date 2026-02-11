/*
 * testDerivedClasses.cpp is the piPet derived classes' test suite.
 * Author: Sasha C. Guerrero
 * Created: 2/10/2026
 * Last Edited: 2/11/2026
*/
#include "electricAxolotl.cpp"
#include "sealCat.cpp"
#include "dragonDog.cpp"
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

    return 0;
}