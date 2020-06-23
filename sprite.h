#ifndef SPRITE_H
#define SPRITE_H
#include "rectangle.h"
#include <QImage>

class Sprite
{
private:
    QRect _pos;
    QImage _img;
public:
    bool isDead();
    Sprite();
    Sprite(QString image, int x, int y);
    QRect getPos();
    QImage & getImage();
    friend class MovableSprite;
    friend class StationarySprite;
    friend class Puck;
    friend class Paddle;
    friend class Brick;
};

#endif // SPRITE_H
