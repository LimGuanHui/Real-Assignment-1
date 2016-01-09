/****************************************************************************/
/*!
\file Outfit.h
\author Lim Guan Hui
\par email: lguanhui14@gmail.com
\brief
Class to create a Outfit Item object
*/
/****************************************************************************/


#ifndef OUTFIT_H
#define OUTFIT_H

#include "Item.h"
/****************************************************************************/
/*!
Class Outfit:
\brief Defines a Outfit Item and its methods
*/
/****************************************************************************/
class Outfit : public Item
{
public:
    //Outfit();
    virtual ~Outfit();
    Outfit(const string&, const int&, const int&);
    const int getSPECIAL();
    virtual void receiveDamage(const int&);
private:
    const int kSPECIAL;
protected:
};


#endif