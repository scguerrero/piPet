/*
 * electricAxolotl.cpp is the electricAxolotl class implementation file.
 * The electricAxolotl class inherits from the piPet class.
 * Author: Sasha C. Guerrero
 * Created: 2/10/2026
 * Last Edited: 2/10/2026
*/
#include "electricAxolotl.h"
#include <iostream>
using namespace std;

void electricAxolotl::basicAttack() const
{
    cout << "The Electric Axolotl deals 100 DMG." << endl;
}


void electricAxolotl::skillAttack() const
{
    cout << "The Electric Axolotl deals 200 DMG." << endl;
}


void electricAxolotl::defend() const
{
    cout << "The Electric Axolotl blocks 100 DMG." << endl;
}