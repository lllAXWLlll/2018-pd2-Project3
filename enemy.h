#ifndef ENEMY_H
#define ENEMY_H

#include "human.h"

class Enemy: public Human
{
public:
    Enemy(int h, int character_ID);
    void move(int tx, int ty);
    virtual void setItemPos();
};

#endif // ENEMY_H
