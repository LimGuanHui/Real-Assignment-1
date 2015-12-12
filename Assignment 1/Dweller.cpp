#include "Dweller.h"

Dweller::Dweller()
{

}

Dweller::Dweller(const string& kName, const int& kSPECIAL)
{

}

Dweller::~Dweller()
{

}

const int Dweller::getSPECIAL()
{

    int Strength = 0;
    if (Strength > 9)
    {
        Strength = 9;
    }
    if (Strength < 0)
    {
        Strength = 0;
    }


    int Perception = 0;
    if (Perception > 9)
    {
        Perception = 9;
    }
    if (Perception < 0)
    {
        Perception = 0;
    }


    int Endurance = 0;
    if (Endurance > 9)
    {
        Endurance = 9;
    }
    if (Endurance < 0)
    {
        Endurance = 0;
    }


    int Charisma = 0;
    if (Charisma > 9)
    {
        Charisma = 9;
    }
    if (Charisma < 0)
    {
        Charisma = 0;
    }


    int Intelligence = 0;
    if (Intelligence > 9)
    {
        Intelligence = 9;
    }
    if (Intelligence < 0)
    {
        Intelligence = 0;
    }


    int Agility = 0;
    if (Agility > 9)
    {
        Agility = 9;
    }
    if (Agility < 0)
    {
        Agility = 0;
    }


    int Luck = 0;
    if (Luck > 9)
    {
        Luck = 9;
    }
    if (Luck < 0)
    {
        Luck = 0;
    }
    return SPECIAL_;
}

const int Dweller::getCurrentHealth()
{
    return health_;
}

const int Dweller::getCurrentRadDamage()
{

}

const int Dweller::getAttackDmg()
{
    return 0;
}

void Dweller::setPosition(const Vec2D& position_)
{
    this->position_ = Vec2D(0, 0);
    this->position_ = position_;
}

const Vec2D getPosition() 
{
    
}

void Dweller::receiveHealthDamage(const int& health_)
{
    this->health_ = 100;
    if (health_ > (100-radiation_))
    {
        this->health_ = (100 - radiation_);
    }
    this->health_ = health_;
}

void Dweller::receiveRadDamage(const int& radiation_)
{
    this->radiation_ = 0;
    if (radiation_ > 100)
    {
        this-> radiation_ = 100;
    }
    if (radiation_ < 0)
    {
        this->radiation_ = 0;
    }
    this->radiation_ = radiation_;
}

void Dweller::receiveEquipmentDamage(const int& durability_)
{
    this->durability_ = durability_;
}

void Dweller::addStimpak(const int& stimpak_)
{
    this->stimpak_ = 0;
    this->stimpak_ = stimpak_;
}

void Dweller::addRadAway(const int& radaway_)
{
    this->radaway_ = 0;
    this->radaway_ = radaway_;
}

void Dweller::useStimpak()
{
    this->stimpak_ -= 1;
    this->health_ += 20;
}

void Dweller::useRadAway()
{
    this->radaway_ -= 1;
    this->radiation_ -= 10;
}

Dweller::Outfit* assignOutfit(Outfit*outfit_)
{
    return 0;
}

Dweller::Weapon* assignWeapon(Weapon*weapon_)
{
    return 0;
}

bool Dweller::isDead()
{
    if (health_ >= 1)
    {
        this->isDead = false;
    }
    if (health_ < 1)
    {
        this->isDead = true;
    }
    return isDead;
}

