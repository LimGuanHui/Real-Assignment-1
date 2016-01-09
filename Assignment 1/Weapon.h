/****************************************************************************/
/*!
\file Weapon.h
\author Lim Guan Hui
\par email: lguanhui14@gmail.com
\brief
Class to create a Weapon Item object
*/
/****************************************************************************/

#ifndef WEAPON_H
#define WEAPON_H
#include "Item.h"
/****************************************************************************/
/*!
Class Weapon:
\brief Defines a Weapon Item object and its methods
*/
/****************************************************************************/
class Weapon : public Item
{
public:
    //Weapon();
    virtual ~Weapon();

    Weapon(const string&, const int&, const int&);
    const int getAttackDmg();
    virtual void receiveDamage(const int&);
private:
    const int kAttackDmg;
protected:
};


#endif