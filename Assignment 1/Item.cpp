#include "Item.h"
/****************************************************************************/
/*!
\brief
Item constructor with member initializer list
\param kName
Name of item
\param durability_
durability of item
*/
/****************************************************************************/
Item::Item(const string& kName, const int& durability_) 
: GameObject(kName), durability_(durability_)
{
    //cout << "Item " << kName << " is created" << endl;
}
/****************************************************************************/
/*!
\brief
Item destructor 
*/
/****************************************************************************/
Item::~Item()
{
    
}
/****************************************************************************/
/*!
\brief
Gets durability of item
\return
Resulting durability_
*/
/****************************************************************************/
const int Item::getDurability()
{
    if (durability_ < 1)
    {
        //cout << "Item is destoyed" << endl;
        return 0;
    }
    return durability_;
}
