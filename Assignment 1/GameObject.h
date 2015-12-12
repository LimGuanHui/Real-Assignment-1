#ifndef GameObject_H
#define GameObject_H
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class GameObject
{
public:
    GameObject();
    ~GameObject();
    static int getCount();//initialize to 0 in cpp
    string getName(void);

private:
    static int count_;
    const string kName;
protected:
    GameObject(const string&);
};


#endif