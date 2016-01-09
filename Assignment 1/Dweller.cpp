#include "Dweller.h"

/****************************************************************************/
/*!
\brief
Dweller constructor with member initializer list
\param kName
Name of dweller
\param SPECIAL_
SPECIAL value for dweller
*/
/****************************************************************************/
Dweller::Dweller(const string& kName, const int& SPECIAL_)
: position_(0, 0), SPECIAL_(SPECIAL_), health_(100), radiation_(0),
stimpak_(0), radaway_(0), outfit_(NULL), weapon_(NULL), GameObject(kName)
{
    //cout << "Dweller " << kName << " is created " << "SPECIAL_ = " << SPECIAL_ << endl;
    Vec2D position_ = Vec2D(0, 0);
    
}
/****************************************************************************/
/*!
\brief
Weapon destructor
*/
/****************************************************************************/
Dweller::~Dweller()
{

}
/****************************************************************************/
/*!
\brief
SPECIAL value is calculated from dweller and outfit SPECIAL values
\return
Resulting value of SEPCIAL_
*/
/****************************************************************************/
const int Dweller::getSPECIAL()
{
    if (outfit_ != 0) // checking for outfit
    {
        outfit_->getSPECIAL();
        //Dweller SPECIAL
        int Dwellerstrength = 0;
        Dwellerstrength = (SPECIAL_ / 1000000);
        int Dwellerperception = 0;
        Dwellerperception = (SPECIAL_ / 100000) - (Dwellerstrength * 10);
        int Dwellerendurance = 0;
        Dwellerendurance = (SPECIAL_ / 10000) - (Dwellerstrength * 100) - (Dwellerperception * 10);
        int Dwellercharisma = 0;
        Dwellercharisma = (SPECIAL_ / 1000) - (Dwellerstrength * 1000) - (Dwellerperception * 100) - (Dwellerendurance * 10);
        int Dwellerintelligence = 0;
        Dwellerintelligence = (SPECIAL_ / 100) - (Dwellerstrength * 10000) - (Dwellerperception * 1000) - (Dwellerendurance * 100) - (Dwellercharisma * 10);
        int Dwelleragility = 0;
        Dwelleragility = (SPECIAL_ / 10)-(Dwellerstrength * 100000) - (Dwellerperception * 10000) - (Dwellerendurance * 1000) - (Dwellercharisma * 100) - (Dwellerintelligence * 10);
        int Dwellerluck = 0;
        Dwellerluck = (SPECIAL_)-(Dwellerstrength * 1000000) - (Dwellerperception * 100000) - (Dwellerendurance * 10000) - (Dwellercharisma * 1000) - (Dwellerintelligence * 100) - (Dwelleragility * 10);


        //Outfit
        int Outfitstrength = (outfit_->getSPECIAL() / 1000000);
        int Outfitperception = (outfit_->getSPECIAL() / 100000) - (Outfitstrength * 10);
        int Outfitendurance = (outfit_->getSPECIAL() / 10000) - (Outfitstrength * 100) - (Outfitperception * 10);
        int Outfitcharisma = (outfit_->getSPECIAL() / 1000) - (Outfitstrength * 1000) - (Outfitperception * 100) - (Outfitendurance * 10);
        int Outfitintelligence = (outfit_->getSPECIAL() / 100) - (Outfitstrength * 10000) - (Outfitperception * 1000) - (Outfitendurance * 100) - (Outfitcharisma * 10);
        int Outfitagility = (outfit_->getSPECIAL() / 10) - (Outfitstrength * 100000) - (Outfitperception * 10000) - (Outfitendurance * 1000) - (Outfitcharisma * 100) - (Outfitintelligence * 10);
        int Outfitluck = (outfit_->getSPECIAL()) - (Outfitstrength * 1000000) - (Outfitperception * 100000) - (Outfitendurance * 10000) - (Outfitcharisma * 1000) - (Outfitintelligence * 100) - (Outfitagility * 10);
        //combine the special
        int strength = 0, perception = 0, endurance = 0, charisma = 0, intelligence = 0, agility = 0, luck = 0;
        strength = Outfitstrength + Dwellerstrength;
        perception = Dwellerperception + Outfitperception;
        endurance = Dwellerendurance + Outfitendurance;
        charisma = Dwellercharisma + Outfitcharisma;
        intelligence = Dwellerintelligence + Outfitintelligence;
        agility = Dwelleragility + Outfitagility;
        luck = Dwellerluck + Outfitluck;
        //bounds check
        if (strength >= 9)
        {
            strength = 9;
        }
        if (perception >= 9)
        {
            perception = 9;
        }
        if (endurance >= 9)
        {
            endurance = 9;
        }
        if (charisma >= 9)
        {
            charisma = 9;
        }
        if (intelligence >= 9)
        {
            intelligence = 9;
        }
        if (agility >= 9)
        {
            agility = 9;
        }
        if (luck >= 9)
        {
            luck = 9;
        }
        //update SPECIAL_
        SPECIAL_ = (strength * 1000000) + (perception * 100000) + (endurance * 10000) + (charisma * 1000) + (intelligence * 100) + (agility * 10) + (luck * 1);
        return SPECIAL_;
    }
    if (outfit_ == 0) // in case there is no outfit
    {
        return SPECIAL_;
    }
}
/****************************************************************************/
/*!
\brief
Getter for dweller current health
\return
Resulting dweller current health
*/
/****************************************************************************/
const int Dweller::getCurrentHealth()
{
    //cout << "health_ get success -> " << health_ << endl;
    if (health_ >= (100-radiation_))
    {
        this->health_ = 100 - radiation_;
    }
    else if (health_ < 1)
    {
        health_ = 0;
        isDead();
    }
    return health_ - radiation_;
    
}
/****************************************************************************/
/*!
\brief
Getter for dweller current health
\return
Resulting dweller current health
*/
/****************************************************************************/
const int Dweller::getCurrentRadDamage()
{
    //cout << "radiation_ get success -> " << radiation_ << endl;
    return radiation_;

}
/****************************************************************************/
/*!
\brief
Getter for dweller attack damage
\return
Resulting dweller current health
*/
/****************************************************************************/
const int Dweller::getAttackDmg()
{
    if (weapon_ != NULL)
    {
        return weapon_->getAttackDmg();
    }
    else
    {
        return 1;
    }
}
/****************************************************************************/
/*!
\brief
Setter for dweller position
\param position_
Defines the dweller's position
*/
/****************************************************************************/
void Dweller::setPosition(const Vec2D& position_)
{
    this->position_ = position_;
    //cout << "position_ set success "  << endl;
}
/****************************************************************************/
/*!
\brief
Getter for dweller position
\return
Resulting dweller position
*/
/****************************************************************************/
const Vec2D Dweller::getPosition() 
{
    //cout << "position_ get success " << endl;
    return position_;
}
/****************************************************************************/
/*!
\brief
Setter for dweller health Damage
\param health_
Defines dweller's current health
*/
/****************************************************************************/
void Dweller::receiveHealthDamage(const int& healthdamage)
{
    if (health_ - radiation_ - healthdamage <= 0 )
    {
        health_ = 0;
    }
    else
    {
        health_ -= healthdamage;
    }
    //cout << "health damage receive success ->" << health_ << endl;
}
/****************************************************************************/
/*!
\brief
Setter for dweller radiation damage
\param radiation_
Defines dweller's radiation damage
*/
/****************************************************************************/
void Dweller::receiveRadDamage(const int& radiation_)
{
    if (radiation_ > 100)
    {
        this-> radiation_ = 100;
    }
    if (radiation_ <= 0)
    {
        this->radiation_ = 0;
    }
    this->radiation_ = radiation_;
    //cout << "radiation damage receive success ->" << radiation_ << endl;
}
/****************************************************************************/
/*!
\brief
Calculates for dweller equipment damage
\param durability_
Defines dweller's equipment durability
*/
/****************************************************************************/
void Dweller::receiveEquipmentDamage(const int& durability_)
{
    //cout << "equipment damage receive success ->" << durability_ << endl;

}
/****************************************************************************/
/*!
\brief
Calculates for number of stimpak dweller has
\param stimpak_
Defines dweller's number of stimpak
*/
/****************************************************************************/
void Dweller::addStimpak(const int& stimpak_)
{
    this->stimpak_ = stimpak_;
    // << "add stimpak success ->" << stimpak_ << endl;
}
/****************************************************************************/
/*!
\brief
Calculates for number of radaway dweller has
\param radaway_
Defines dweller's number of radaway
*/
/****************************************************************************/
void Dweller::addRadAway(const int& radaway_)
{
    this->radaway_ = radaway_;
    //cout << "add radaway success ->" << radaway_ << endl;
}
/****************************************************************************/
/*!
\brief
Function to calculate effects of dweller using a stimpak
*/
/****************************************************************************/
void Dweller::useStimpak()
{
    if (stimpak_ < 1)
    {
        
    } 
    else if ( stimpak_ > 1 )
    {
        this->stimpak_ -= 1;
        this->health_ += 20;
    }
    if (100 - radiation_ > health_)
    {

    }
    //cout << "use stimpak success ->" << stimpak_ << " health is " << health_ << endl;
}
/****************************************************************************/
/*!
\brief
Function to calculate effects of dweller using a radaway
*/
/****************************************************************************/
void Dweller::useRadAway()
{
    this->radaway_ -= 1;
    this->radiation_ -= 10;
    //cout << "use radaway success ->" << radaway_ << " health is " << radiation_ << endl;
}
/****************************************************************************/
/*!
\brief
Function to get outfit variables
\param Outfit*outfit_
the address of outfit_
\returns
Returns the address of outfit_
*/
/****************************************************************************/
Outfit* Dweller::assignOutfit(Outfit*outfit_)
{
    //cout << "Outfit success ->" << outfit_ << endl;
    this->outfit_ = outfit_;
    return outfit_;
}
/****************************************************************************/
/*!
\brief
Function to get weapon variables
\param Weapon*weapon_
the address of weapon_
\return 
Returns the address of weapon_
*/
/****************************************************************************/
Weapon* Dweller::assignWeapon(Weapon*weapon_) 
{
    //cout << "weapon success ->" << outfit_ << endl;
    this->weapon_ = weapon_;
    return weapon_;
}
/****************************************************************************/
/*!
\brief
Function to check if dweller is dead
\return isDead
resulting bool isDead
*/
/****************************************************************************/
bool Dweller::isDead()
{
    bool isDead;
    if (health_ >= 1)
    {
        isDead = false;
    }
    if (health_ < 1)
    {
        isDead = true;
    }
    return isDead;
}