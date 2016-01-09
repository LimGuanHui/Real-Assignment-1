/****************************************************************************/
/*!
\file Dweller.h
\author Lim Guan Hui
\par email: lguanhui14@gmail.com
\brief
Class to create a Item game object
*/
/****************************************************************************/


#ifndef ITEM_H
#define ITEM_H
#include "GameObject.h"
/****************************************************************************/
/*!
Class Item:
\brief Defines a Item Game Object and its methods
*/
/****************************************************************************/
class Item : public GameObject
{
public:
    //Item();
    Item(const string&, const int&);
    virtual ~Item();
 
    virtual void receiveDamage(const int &) = 0;
    const int getDurability();
private:

protected:
    int durability_;
};


#endif