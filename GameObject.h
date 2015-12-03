#ifndef GameObject_H
#define GameObject_H

#include <string>
using std::string;

class GameObject
{
public:
    GameObject();
    ~GameObject();
    int getCount();
    string getName(void);

private:
    int count;
    const string kName;
protected:
    GameObject(const string&);
};


#endif