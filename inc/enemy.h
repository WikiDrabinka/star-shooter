#include "ship.h"
class Enemy: public Ship {
    private:
    int distance;
    public:
    Enemy();
    ~Enemy();
    void shoot() const;
    void display() const;
};