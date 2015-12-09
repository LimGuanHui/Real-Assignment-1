#ifndef WEAPON_H
#define WEAPON_H
#include "Item.h"

class Weapon : public Item
{
public:
    Weapon();
    ~Weapon();

    Weapon(const string&, const int&, const int&);
    const int getAttackDmg();
private:
    const int kAttackDmg;
protected:
};


#endif