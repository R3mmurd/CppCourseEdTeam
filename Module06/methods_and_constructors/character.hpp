#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
public:

private:
    static constexpr int max_hit_points = 50;
    static constexpr int max_armor_points = 20;
    static int id_counter;

    int id = 1;
    int hit_points = 15;
    int armor_points = 3;
};

#endif