#include "GameObject.h"

GameObject::GameObject()
{
    ++count;
}

GameObject::GameObject(const string& kName)
{
    
}

GameObject::~GameObject()
{
    --count;
}

int GameObject::getCount()
{

    return 0;
}

string GameObject::getName(void)
{
    return kName;
}
