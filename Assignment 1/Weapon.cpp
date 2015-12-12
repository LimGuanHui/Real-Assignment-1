#include "Weapon.h"

Weapon::Weapon() : kAttackDmg(kAttackDmg)
{

}

Weapon::Weapon(const string& kName, const int& durability_, const int& kAttackDmg) : kAttackDmg(kAttackDmg)
{

    if (kAttackDmg < 0)
    {
        const int kAttackDmg = 0;
    }

}

Weapon::~Weapon()
{

}

const int Weapon::getAttackDmg()
{
    if (kAttackDmg < 0 )
    {
        const int kAttackDmg = 0;
    }
    return kAttackDmg;
}
