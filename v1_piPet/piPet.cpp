/*
 * piPet.cpp is the piPet class implementation file.
 * Author: Sasha C. Guerrero
 * Created: 2/5/2026
 * Last Edited: 2/6/2026
*/
#include "piPet.h"
#include <cstdio>
#include <iostream>
using namespace std;

// piPet default constructor with no arguments
piPet::piPet()
{
	hunger = 50;
	energy = 50;
	strength = 50;
	hygiene = 50;
	intelligence = 50;
	happiness = 50;
	ageDays = 1;
	ageGroup = 1;
	attack = 100;
	defense = 100;
	healthPoints = 1000;
	critRate = 0.10;
	critDmg = 100;
	skillPoints= 0;
}

//piPet constructor with arguments
piPet::piPet(int hgr, int en, int str, int hyg, int intel,
	int hap, int ageD, int ageG, int atk, int def,
	int hp, int rate, int dmg, int sp)
{
	hunger = hgr;
	energy = en;
	strength = str;
	hygiene = hyg;
	intelligence = intel;
	happiness = hap;
	ageDays = ageD;
	ageGroup = ageG;
	attack = atk;
	defense = def;
	healthPoints = hp;
	critRate = rate;
	critDmg = dmg;
	skillPoints = sp;
}

//piPet destructor
piPet::~piPet()
{
}

void piPet::showCondition()
{
	printf("----Condition----\n");
	printf("Hunger: %d\nEnergy: %d\nStrength: %d\nHygiene: %d\nIntelligence: %d\nHappiness: %d\nDays Old: %d\nAge Group: %d\n",
		hunger, energy, strength, hygiene, intelligence, happiness, ageDays, ageGroup);
}

void piPet::showStats()
{
	printf("----Stats----\n");
	printf("ATK: %d\nDEF: %d\nHP: %d\n", attack, defense, healthPoints);
	printf("CRIT Rate: %.0f%\nCRIT Dmg: %d\nSP: %d\n", critRate*100, critDmg, skillPoints);
}