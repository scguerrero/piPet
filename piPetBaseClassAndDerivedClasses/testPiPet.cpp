/*
 * testPiPet.cpp is the piPet class test suite.
 * Author: Sasha C. Guerrero
 * Created: 2/5/2026
 * Last Edited: 2/6/2026
*/
#include "piPet.cpp"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    piPet pet = piPet();

    cout << "----------------DEFAULT PARAMETERS-----------------" << endl;
    pet.showCondition();
    pet.showStats();

    cout << "----------------SETTER TESTS (valid input)-----------------" << endl;
    pet.setHunger(1);
    pet.setEnergy(2);
    pet.setStrength(3);
    pet.setHygiene(4);
    pet.setIntelligence(5);
    pet.setHappiness(6);
    pet.setAgeDays(7);
    pet.setAgeGroup(2);
    pet.setAttack(200);
    pet.setDefense(300);
    pet.setHealthPoints(400);
    pet.setCritRate(0.23);
    pet.setCritDmg(500);
    pet.setSkillPoints(5);

    pet.showCondition();
    pet.showStats();

    cout << "----------------SETTER TESTS (invalid input)-----------------" << endl;
    cout << "Invalid input should not process. Thus, variables should have\nsame values as before.\n";
    pet.setHunger(-11);
    pet.setEnergy(341);
    pet.setStrength(-2349);
    pet.setHygiene(3434);
    pet.setIntelligence(101);
    pet.setHappiness(343);
    pet.setAgeDays(-100);
    pet.setAgeGroup(5);
    pet.setAttack(-202002);
    pet.setDefense(-234);
    pet.setHealthPoints(-1);
    pet.setCritRate(2);
    pet.setCritDmg(-2222);
    pet.setSkillPoints(6);

    pet.showCondition();
    pet.showStats();

    cout << "----------------GETTER TESTS-----------------" << endl;
    cout << "The same values from above are expected.\n";
    cout << pet.getHunger() << endl;
    cout << pet.getEnergy() << endl;
    cout << pet.getStrength() << endl;
    cout << pet.getHygiene() << endl;
    cout << pet.getIntelligence() << endl;
    cout << pet.getHappiness() << endl;
    cout << pet.getAgeDays() << endl;
    cout << pet.getAgeGroup() << endl;
    cout << pet.getAttack() << endl;
    cout << pet.getDefense() << endl;
    cout << pet.getHealthPoints() << endl;
    cout << pet.getCritRate() << endl;
    cout << pet.getCritDmg() << endl;
    cout << pet.getSkillPoints() << endl;

    return 0;
}


