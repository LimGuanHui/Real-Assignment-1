#include "Dweller.h"


Dweller::Dweller(const string& kName, const int& SPECIAL_ ) 
: position_(0,0), SPECIAL_(SPECIAL_), health_(100), radiation_(0), 
stimpak_(0), radaway_(0), outfit_(NULL), weapon_(NULL), GameObject(kName)
{
    //cout << "Dweller " << kName << " is created " << "SPECIAL_ = " << SPECIAL_ << endl;
}

Dweller::~Dweller()
{

}

const int Dweller::getSPECIAL()
{
    //rmb to change this
    if (outfit_ != 0) // checking for outfit
    {
        outfit_->getSPECIAL();
        //Dweller SPECIAL
        int Dwellerstrength;
        Dwellerstrength = (SPECIAL_ / 1000000);
        int Dwellerperception;
        Dwellerperception = (SPECIAL_ / 100000) - (Dwellerstrength * 10);
        int Dwellerendurance;
        Dwellerendurance = (SPECIAL_ / 10000) - (Dwellerstrength * 100) - (Dwellerperception * 10);
        int Dwellercharisma;
        Dwellercharisma = (SPECIAL_ / 1000) - (Dwellerstrength * 1000) - (Dwellerperception * 100) - (Dwellerendurance * 10);
        int Dwellerintelligence;
        Dwellerintelligence = (SPECIAL_ / 100) - (Dwellerstrength * 10000) - (Dwellerperception * 1000) - (Dwellerendurance * 100) - (Dwellercharisma * 10);
        int Dwelleragility;
        Dwelleragility = (SPECIAL_)-(Dwellerstrength * 100000) - (Dwellerperception * 10000) - (Dwellerendurance * 1000) - (Dwellercharisma * 100) - (Dwellerintelligence * 10);
        int Dwellerluck;
        Dwellerluck = (SPECIAL_)-(Dwellerstrength * 100000) - (Dwellerperception * 100000) - (Dwellerendurance * 10000) - (Dwellercharisma * 1000) - (Dwellerintelligence * 100) - (Dwelleragility * 10); \
            
            
        //Outfit
        int Outfitstrength = (outfit_->getSPECIAL() / 1000000);
        int Outfitperception = (outfit_->getSPECIAL() / 100000) - (Outfitstrength * 10);
        int Outfitendurance = (outfit_->getSPECIAL() / 10000) - (Outfitstrength * 100) - (Outfitperception * 10);
        int Outfitcharisma = (outfit_->getSPECIAL() / 1000) - (Outfitstrength * 1000) - (Outfitperception * 100) - (Outfitendurance * 10);
        int Outfitintelligence = (outfit_->getSPECIAL() / 100) - (Outfitstrength * 10000) - (Outfitperception * 1000) - (Outfitendurance * 100) - (Outfitcharisma * 10);
        int Outfitagility = (outfit_->getSPECIAL()) - (Outfitstrength * 100000) - (Outfitperception * 10000) - (Outfitendurance * 1000) - (Outfitcharisma * 100) - (Outfitintelligence * 10);
        int Outfitluck = (outfit_->getSPECIAL()) - (Outfitstrength * 100000) - (Outfitperception * 100000) - (Outfitendurance * 10000) - (Outfitcharisma * 1000) - (Outfitintelligence * 100) - (Outfitagility * 10);
        //combine the special
        int strength, perception, endurance, charisma, intelligence, agility, luck;
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

const int Dweller::getCurrentHealth()
{
    //cout << "health_ get success -> " << health_ << endl;
    return health_;
    
}

const int Dweller::getCurrentRadDamage()
{
    //cout << "radiation_ get success -> " << radiation_ << endl;
    return radiation_;

}

const int Dweller::getAttackDmg()
{

    return 0;
}

void Dweller::setPosition(const Vec2D& position_)
{
    this->position_ = position_;
    //cout << "position_ set success "  << endl;
}

const Vec2D Dweller::getPosition() 
{
    //cout << "position_ get success " << endl;
    return position_;
}

void Dweller::receiveHealthDamage(const int& health_)
{
    if (health_ > (100-radiation_))
    {
        this->health_ = (100 - radiation_);
    }
    this->health_ = health_;
    //cout << "health damage receive success ->" << health_ << endl;
}

void Dweller::receiveRadDamage(const int& radiation_)
{
    if (radiation_ > 100)
    {
        this-> radiation_ = 100;
    }
    if (radiation_ < 0)
    {
        this->radiation_ = 0;
    }
    this->radiation_ = radiation_;
    //cout << "radiation damage receive success ->" << radiation_ << endl;
}

void Dweller::receiveEquipmentDamage(const int& durability_)
{
    //cout << "equipment damage receive success ->" << durability_ << endl;
}

void Dweller::addStimpak(const int& stimpak_)
{
    this->stimpak_ = stimpak_;
    // << "add stimpak success ->" << stimpak_ << endl;
}

void Dweller::addRadAway(const int& radaway_)
{
    this->radaway_ = radaway_;
    //cout << "add radaway success ->" << radaway_ << endl;
}

void Dweller::useStimpak()
{
    this->stimpak_ -= 1;
    this->health_ += 20;
    //cout << "use stimpak success ->" << stimpak_ << " health is " << health_ << endl;
}

void Dweller::useRadAway()
{
    this->radaway_ -= 1;
    this->radiation_ -= 10;
    //cout << "use radaway success ->" << radaway_ << " health is " << radiation_ << endl;
}

Outfit* Dweller::assignOutfit(Outfit*outfit_)
{
    //cout << "Outfit success ->" << outfit_ << endl;
    return outfit_;
}

Weapon* Dweller:: assignWeapon(Weapon*weapon_)
{
    //cout << "weapon success ->" << outfit_ << endl;
    return weapon_;
}

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