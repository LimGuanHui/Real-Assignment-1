#include "GameObject.h"
int GameObject::count_;

GameObject::GameObject(const string& kName) : kName(kName)
{
    ++count_;
    // cout << "its runningggg" << endl;
}

GameObject::~GameObject()
{
    //cout << "its runningggg" << endl;
}

int GameObject::getCount()
{
    // << "number of objects created is " << count_ << endl;
    return count_;
    
}

string GameObject::getName(void)
{
    return kName;
}
