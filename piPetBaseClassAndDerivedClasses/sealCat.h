/*
 * sealCat.h is the sealCat class specification file.
 * The sealCat class inherits from the piPet class.
 * It has strong defense but weak attack.
 * Author: Sasha C. Guerrero
 * Created: 2/11/2026
 * Last Edited: 2/11/2026
*/

#ifndef SEALCAT_H
#define SEALCAT_H
using namespace std;

class sealCat:public piPet
{
    public:
        virtual void basicAttack() const;
        virtual void skillAttack() const;
        virtual void defend() const;
};
#endif // SEALCAT_H