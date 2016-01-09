#include "GameObject.h"
int GameObject::count_;
/****************************************************************************/
/*!
\brief
Outfit constructor with member initializer list
\param kName
Name of outfit
\param durability_
durability of outfit
*/
/****************************************************************************/
GameObject::GameObject(const string& kName) : kName(kName)
{
    ++count_;
    // cout << "its runningggg" << endl;
}
/****************************************************************************/
/*!
\brief
GameObject destructor
*/
/****************************************************************************/
GameObject::~GameObject()
{
    //cout << "its runningggg" << endl;
}
/****************************************************************************/
/*!
\brief
Gets count_ value
\return
Resulting count_ value
*/
/****************************************************************************/
int GameObject::getCount()
{
    // << "number of objects created is " << count_ << endl;
    return count_;
    
}
/****************************************************************************/
/*!
\brief
Gets name for Game Object
\return
Name of GameObject
*/
/****************************************************************************/
string GameObject::getName(void)
{
    return kName;
}
