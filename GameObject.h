#ifndef GameObject_H
#define GameObject_H

#include <string>
using std::string;

class GameObject
{
public:
    GameObject();
    ~GameObject();
    static int getCount();//initialize to 0 in cpp
    string getName(void);

private:
    static int count;
    const string kName;
protected:
    GameObject(const string&);
};


#endif