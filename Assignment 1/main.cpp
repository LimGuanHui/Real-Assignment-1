#include <iostream>
using std::cout;
using std::endl;

#include "Dweller.h"
#include "Outfit.h"
#include "Weapon.h"
#include "Item.h"
#include "GameObject.h"
#include "Vec2D.h"

void assignment1();

void testNames();
void shouldNotCompile();

int main()
{
    testNames();
    shouldNotCompile();

    Dweller d("One", 5555555);
    Outfit o("Outfit", 0, 1234567);
    Weapon w("Weapon", 10,5);
    cout << d.getSPECIAL() << endl;
    d.assignOutfit(&o);
    d.assignWeapon(&w);
    d.setPosition(Vec2D(2,5));
    d.receiveRadDamage(20);
    d.receiveHealthDamage(30);
    cout << d.getSPECIAL() << endl;
    cout << d.getPosition().x << endl;
    cout << d.getPosition().y << endl;
    cout << d.getAttackDmg() << endl;
    cout << w.getAttackDmg() << endl;
    cout << o.getSPECIAL() << endl;
    cout << d.getCurrentHealth() << endl;
    return 0;
}



//void main()
//{
//    assignment1();
//}
//
//void assignment1()
//{
//    Dweller d("One", 5555555);
//}