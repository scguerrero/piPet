/*
 * dragonDog.cpp is the dragonDog class implementation file.
 * The dragonDog class inherits from the piPet class.
 * It has equal defense amd attack.
 * Author: Sasha C. Guerrero
 * Created: 2/11/2026
 * Last Edited: 2/11/2026
*/
#include "dragonDog.h"
#include <iostream>
using namespace std;

void dragonDog::basicAttack()
{
    cout << "The Dragon Dog deals 100 DMG." << endl;
}


void dragonDog::skillAttack()
{
    cout << "The Dragon Dog deals 200 DMG." << endl;
}


void dragonDog::defend()
{
    cout << "The Dragon Dog blocks 100 DMG." << endl;
}