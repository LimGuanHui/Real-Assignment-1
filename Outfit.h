#ifndef OUTFIT_H
#define OUTFIT_H

#include "Item.h"

class Outfit : public Item
{
public:
    Outfit();
    ~Outfit();
    Outfit(const string&, const int&, const int&);
    const int getSPECIAL();
private:
    const int kSPECIAL;
protected:
};


#endif