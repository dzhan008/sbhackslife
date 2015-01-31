#ifndef POINT_H
#define POINT_H


class Point
{
    private:
        int life;
        int death;
        int good;
        int evil;
    public:
        Point();
        void LifeIncrement(int);
        void DeathIncrement(int);
        void GoodIncrement(int);
        void EvilIncrement(int);
        int displayLife() const;
        int displayDeath() const;
        int displayGood() const;
        int displayEvil() const;
        bool Alive();
        bool Dead();
};

#endif // POINT_H
