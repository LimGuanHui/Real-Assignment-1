#include "Weapon.h"


Weapon::Weapon(const string& kName, const int& durability_, const int& kAttackDmg) 
: kAttackDmg(kAttackDmg), Item(kName, durability_)
{
    cout << "weapon " << kName << " is created " << "kAttackdmg = " << kAttackDmg 
        << " durability_ = " << durability_ << endl;
}

Weapon::~Weapon()
{
    cout << "weapon is destroyed" << endl;
}

const int Weapon::getAttackDmg()
{
    if (kAttackDmg < 0 )
    {
        const int kAttackDmg = 0;
    }
    return kAttackDmg;
}

void Weapon::receiveDamage(const int& durability_)
{
    this->durability_ = durability_;
}