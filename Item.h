#ifndef ITEM_H
#define ITEM_H
#include "GameObject.h"
class Item : public GameObject
{
public:
    Item();
    ~Item();

    Item(const string&, const int&); 
    virtual void receiveDamage(const int &) = 0;
    const int getDurability();
private:

protected:
    int durability_;
};


#endif