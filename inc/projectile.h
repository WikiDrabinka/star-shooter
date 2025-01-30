class Projectile {
    private:
    int damage;
    int range;
    bool direction;
    int distance;
    public:
    Projectile(int damage, int range);
    ~Projectile();
    void move();
};