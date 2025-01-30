#include <string>
#include "projectile.h"
class Weapon {
    private:
    std::string name;
    int damage;
    int cooldown;
    int range;
    int price;
    public:
    Weapon();
    ~Weapon();
    Projectile *shoot();
};