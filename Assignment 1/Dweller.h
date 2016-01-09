/****************************************************************************/
/*!
\file Dweller.h
\author Lim Guan Hui
\par email: lguanhui14@gmail.com
\brief
Class to create a Dweller game object
*/
/****************************************************************************/


#ifndef DWELLER_H
#define DWELLER_H

#include "Outfit.h"
#include "Weapon.h"
#include "Vec2D.h"
/****************************************************************************/
/*!
Class Dweller:
\brief Defines a Dweller GameObject and its methods
*/
/****************************************************************************/
class Dweller : public GameObject 
{
public:
    
    Dweller(const string&, const int&);
    virtual ~Dweller();
    const int getSPECIAL();
    const int getCurrentHealth();
    const int getCurrentRadDamage();
    const int getAttackDmg();
    void setPosition(const Vec2D&);
    const Vec2D getPosition();
    void receiveHealthDamage(const int&);
    void receiveRadDamage(const int&);
    void receiveEquipmentDamage(const int&);
    void addStimpak(const int&);
    void addRadAway(const int&);
    void useStimpak();
    void useRadAway();
    Outfit* assignOutfit(Outfit*);
    Weapon* assignWeapon(Weapon*);
    bool isDead();

private:
    Vec2D position_;
    int SPECIAL_;
    int health_;
    int radiation_;
    int stimpak_;
    int radaway_;
    Outfit * outfit_;
    Weapon * weapon_;
protected:
};


#endif