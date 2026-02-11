/*
 * electricAxolotl.h is the electricAxolotl class specification file.
 * The electricAxolotl class inherits from the piPet class.
 * It has strong attack but weak defense.
 * Author: Sasha C. Guerrero
 * Created: 2/10/2026
 * Last Edited: 2/10/2026
*/

#ifndef ELECTRICAXOLOTL_H
#define ELECTRICAXOLOTL_H
#include "piPet.cpp"
using namespace std;

class electricAxolotl:public piPet
{
    public:
        virtual void basicAttack() const;
        virtual void skillAttack() const;
        virtual void defend() const;
};
#endif // ELECTRICAXOLOTL_H