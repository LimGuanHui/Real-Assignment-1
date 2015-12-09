#include "Weapon.h"

Weapon::Weapon() : kAttackDmg(kAttackDmg)
{

}

Weapon::Weapon(const string& kName, const int& durability_, const int& kAttackDmg) : kAttackDmg(kAttackDmg)
{
    while (durability_ > 0)
    {
        
    }
    

}

Weapon::~Weapon()
{

}

const int Weapon::getAttackDmg()
{

}
