#ifndef SPRITEVECTOR_H
#define SPRITEVECTOR_H
#include "sprite.h"
#include <vector>

class SpriteVector
{
private:
    std::vector<Sprite> _vector;
public:
    void update();
    void draw();
    SpriteVector();

};

#endif // SPRITEVECTOR_H
