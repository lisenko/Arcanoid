#include "sprite.h"

Sprite::Sprite()
{

}

Sprite::Sprite(QString image, int x, int y)
{
    _img.load(image);
    _pos = _img.rect();
    _pos.translate(x, y);
}

QImage & Sprite::getImage() {
    return _img;
}

QRect Sprite::getPos() {
    return _pos;
}
