#ifndef MOVABLESPRITE_H
#define MOVABLESPRITE_H
#include "sprite.h"
#include "velocity.h"

class MovableSprite: private Sprite
{
public:
    void move();
    bool isMoving();
    void collideInto(Sprite sprite);
    MovableSprite();
};

#endif // MOVABLESPRITE_H
