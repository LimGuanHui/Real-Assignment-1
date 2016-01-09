/****************************************************************************/
/*!
\file GameObject.h
\author Lim Guan Hui
\par email: lguanhui14@gmail.com
\brief
Class to create a Game Object
*/
/****************************************************************************/

#ifndef GameObject_H
#define GameObject_H
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
/****************************************************************************/
/*!
Class GameObject:
\brief Defines a  GameObject and its methods
*/
/****************************************************************************/
class GameObject
{
public:
    //GameObject();
    virtual ~GameObject();
    static int getCount();
    string getName(void);

private:
    static int count_;
    const string kName;
protected:
    GameObject(const string&);
};


#endif