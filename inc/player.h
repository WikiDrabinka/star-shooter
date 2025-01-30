#include "ship.h"
class Player: public Ship {
    private:
    std::string name;
    int experience;
    int level;
    public:
    void shoot() const;
    void display() const;
};