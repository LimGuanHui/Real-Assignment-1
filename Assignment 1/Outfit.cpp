#include "Outfit.h"
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

Outfit::Outfit(const string& kName, const int& durability_, const int& kSPECIAL) 
: kSPECIAL(kSPECIAL), Item(kName, durability_)
{
    //cout << "outfit " << kName << " is created " << "kSPECIAL = " << kSPECIAL
    //    << " durability_ = " << durability_ << endl;
}

/****************************************************************************/
/*!
\brief
Outfit destructor 
*/
/****************************************************************************/
Outfit::~Outfit()
{

}
/****************************************************************************/
/*!
\brief
get special value for outfit
\return
returns special value
*/
/****************************************************************************/
const int Outfit::getSPECIAL()
{
    
    return kSPECIAL;
}
/****************************************************************************/
/*!
\brief
get durability_ for outfit
\return
returns durability_
*/
/****************************************************************************/
void Outfit::receiveDamage(const int& equipdmg)
{
    durability_ -= equipdmg;
}