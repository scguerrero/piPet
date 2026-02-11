/*
 * testAxolotl.cpp is the electricAxolotl class test suite.
 * Author: Sasha C. Guerrero
 * Created: 2/10/2026
 * Last Edited: 2/10/2026
*/
#include "electricAxolotl.cpp"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    electricAxolotl el;
    el.basicAttack();
    el.skillAttack();
    el.defend();

    return 0;
}