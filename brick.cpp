#include "brick.h"

Brick::Brick()
{

}

Brick::Brick(int x, int y)
{
    _img.load("brick.png");
    _pos = _img.rect();
    _pos.translate(x, y);
}
