#include "Outfit.h"


Outfit::Outfit(const string& kName, const int& durability_, const int& kSPECIAL) 
: kSPECIAL(kSPECIAL), Item(kName, durability_)
{
    cout << "outfit " << kName << " is created " << "kSPECIAL = " << kSPECIAL
        << " durability_ = " << durability_ << endl;
}

Outfit::~Outfit()
{

}

const int Outfit::getSPECIAL()
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
    return kSPECIAL;
}

void Outfit::receiveDamage(const int& durability_)
{
    this->durability_ = durability_;
}