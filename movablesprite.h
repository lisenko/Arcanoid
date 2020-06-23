#ifndef MOVABLESPRITE_H
#define MOVABLESPRITE_H
#include "sprite.h"
#include "velocity.h"

class MovableSprite: public Sprite
{
public:
    void move();
    bool isMoving();
    void collideInto(Sprite sprite);
    MovableSprite();
    MovableSprite(QString image, int x, int y);
};

#endif // MOVABLESPRITE_H
