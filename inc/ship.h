#include "weapon.h"
class Ship {
    protected:
    int position;
    int health;
    Weapon *weapon1;
    Weapon *weapon2;
    public:
    void move(bool direction);
    virtual void shoot() const = 0;
    virtual void display() const = 0;
};