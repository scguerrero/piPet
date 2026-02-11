/*
 * dragonDog.h is the dragonDog class specification file.
 * The dragonDog class inherits from the piPet class.
 * It has equal defense amd attack.
 * Author: Sasha C. Guerrero
 * Created: 2/11/2026
 * Last Edited: 2/11/2026
*/

#ifndef DRAGONDOG_H
#define DRAGONDOG_H
using namespace std;

class dragonDog:public piPet
{
    public:
        virtual void basicAttack() const;
        virtual void skillAttack() const;
        virtual void defend() const;
};
#endif // DRAGONDOG_H