#include "Item.h"



Item::Item(const string& kName, const int& durability_) 
: GameObject(kName), durability_(durability_)
{
    //cout << "Item " << kName << " is created" << endl;
}

Item::~Item()
{
    
}

const int Item::getDurability()
{
    if (durability_ < 1)
    {
        //cout << "Item is destoyed" << endl;
        return 0;
    }
    return durability_;
}
