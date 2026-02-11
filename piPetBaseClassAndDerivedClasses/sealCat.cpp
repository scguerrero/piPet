/*
 * sealCat.cpp is the sealCat class implementation file.
 * The sealCat class inherits from the piPet class.
  * It has strong defense but weak attack.
 * Author: Sasha C. Guerrero
 * Created: 2/11/2026
 * Last Edited: 2/11/2026
*/
#include "sealCat.h"
#include <iostream>
using namespace std;

void sealCat::basicAttack() const
{
    cout << "The Seal Cat deals 100 DMG." << endl;
}


void sealCat::skillAttack() const
{
    cout << "The Seal Cat deals 200 DMG." << endl;
}


void sealCat::defend() const
{
    cout << "The Seal Cat blocks 100 DMG." << endl;
}