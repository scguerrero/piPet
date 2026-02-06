/*
 * piPet.h is the piPet class specification file.
 * Author: Sasha C. Guerrero
 * Created: 2/4/2026
 * Last Edited: 2/6/2026
*/

#ifndef PIPET_H
#define PIPET_H
#include <string>
using namespace std;

// piPet class declaration
class piPet
{
	private:
		// The piPet's Condition, or wellness attributes
		int hunger;
		int energy;
		int strength;
		int hygiene;
		int intelligence;
		int happiness;
		int ageDays;
		int ageGroup;

		// The piPet's Stats, or battle attributes
		int attack;
		int defense;
		int healthPoints;
		double critRate;
		int critDmg;
		int skillPoints;
	public:
		// Constructors (no arguments, with arguments) and destructor
		piPet();
		piPet(int, int, int, int, int, int, int, int, int, int, int, int, int, int);
		~piPet();

		// Utilities
		void showCondition();
		void showStats();

		// The piPet's Battle Actions
		void basicAttack();
		void skillAttack();
		void useItem();
		void defend();
		
		// Setters
		bool setHunger(int);
		bool setEnergy(int);
		bool setStrength(int);
		bool setHygiene(int);
		bool setIntelligence(int);
		bool setHappiness(int);
		bool setAgeDays(int);
		bool setAgeGroup(int);
		bool setAtk(int);
		bool setDef(int);
		bool setHp(int);
		bool setCritRate(double);
		bool setCritDmg(int);
		bool setSp(int);

		// Getters
		int getHunger();
		int getEnergy();
		int getStrength();
		int getHygiene();
		int getIntelligence();
		int getHappiness();
		int getAgeDays();
		int getAgeGroup();
		int getAtk();
		int getDef();
		int getHp();
		double getCritRate();
		int getCritDmg();
		int getSp();
};
#endif
