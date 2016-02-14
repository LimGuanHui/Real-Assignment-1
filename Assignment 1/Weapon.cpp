#include "Weapon.h"
/****************************************************************************/
/*!
\brief
Weapon constructor with member initializer list
\param kName
Name of outfit
\param durability_
durability of outfit
\param kAttackDmg
attack damage of weapon
*/
/****************************************************************************/
Weapon::Weapon(const string& kName, const int& durability_, const int& kAttackDmg) 
: kAttackDmg(kAttackDmg), Item(kName, durability_)
{
    //cout << "weapon " << kName << " is created " << "kAttackdmg = " << kAttackDmg 
    //    << " durability_ = " << durability_ << endl;
    
}
/****************************************************************************/
/*!
\brief
Weapon destructor
*/
/****************************************************************************/
Weapon::~Weapon()
{
    //cout << "weapon is destroyed" << endl;
}
/****************************************************************************/
/*!
\brief
Setter for weapon attack damage
\return
Resulting weapon attack damage
*/
/****************************************************************************/
const int Weapon::getAttackDmg()
{
    if (kAttackDmg < 0 )
    {
        const int kAttackDmg = 0;
    }
    //cout << "kAttackDmg is successs ->" << kAttackDmg << endl;
    return kAttackDmg;
}
/****************************************************************************/
/*!
\brief
Getter for weapon attack damage
\return
Resulting weapon attack damage
*/
/****************************************************************************/
void Weapon::receiveDamage(const int& equipdmg)
{
    durability_ -= equipdmg / 2;

    //cout << "Weapon receive damage success  Durability_ -> " << durability_ << endl;
}