/*
 * piPetTest.cpp is the piPet class test suite.
 * Author: Sasha C. Guerrero
 * Created: 2/5/2026
 * Last Edited: 2/6/2026
*/
#include "piPet.cpp"
using namespace std;

int main(int argc, char *argv[])
{
    piPet pet = piPet();
    pet.showCondition();
    pet.showStats();
}
