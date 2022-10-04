#include <iostream>
using namespace std; 
int main()
{
    typedef int health;

    enum Weapons
    {
        Sword = 1,
        Dagger,
        Mace,
        Twin_Swords,
        Samurai,
        Wizard_Staff,
        Fire_Potion,
        Ice_Blade,
        Small_Knife,
    };

    health myHp = 13000;

    cout << "My current health is: " << myHp << endl;
    cout << "And the ID of my weapon of choice is: " << Samurai << endl;
}
