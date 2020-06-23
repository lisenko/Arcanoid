#ifndef PLAYFIELD_H
#define PLAYFIELD_H
#include "spritevector.h"
#include "rectangle.h"
#include "brick.h"
#include <QPainter>

class Playfield
{
private:
    SpriteVector _sv;
public:
    void update();
    Playfield();
};

#endif // PLAYFIELD_H
