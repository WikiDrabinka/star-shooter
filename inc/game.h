#include "player.h"
#include "enemy.h"
#include <vector>
class Game {
    private:
    Player *player;
    std::vector<Enemy *> enemies;
    std::vector<Weapon *> store;
    std::vector<Projectile *> projectiles;
    public:
    Game();
    ~Game();
    void play();
    void pause();
};