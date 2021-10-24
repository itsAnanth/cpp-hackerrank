#include <bits/stdc++.h>

using namespace std;

class Entity {
    public:
        int x;
        int y;
    public:
        Entity() : x(0), y(0) {};
        void move(const int & _x, const int & _y) {
            x += _x;
            y += _y;
        };
};

class Player : public Entity {
    public:
        int health;
        int speed;
    public:
        Player() : health(100), speed(5) {};
};

int main() {
    Player * player = new Player();
    player->move(1, 2);
    cout << player->x << player->y << endl;
    delete player;
    return 0;
};
