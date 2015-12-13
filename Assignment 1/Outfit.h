#ifndef OUTFIT_H
#define OUTFIT_H

#include "Item.h"

class Outfit : public Item
{
public:
    //Outfit();
    ~Outfit();
    Outfit(const string&, const int&, const int&);
    const int getSPECIAL();
    virtual void receiveDamage(const int&);
private:
    const int kSPECIAL;
protected:
};


#endif