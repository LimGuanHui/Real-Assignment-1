#include "GameObject.h"

GameObject::GameObject()
{
    ++count_;
}

GameObject::GameObject(const string& kName)
{
    
}

GameObject::~GameObject()
{
    --count_;
}

int GameObject::getCount()
{
    return count_;
}

string GameObject::getName(void)
{
    return kName;
}
