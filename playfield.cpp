#include "playfield.h"


Playfield::Playfield()
{
    for (int i=0; i<5; i++) {
      for (int j=0; j<6; j++) {
        bricks[k] = new Brick(j*40+30, i*10+50);
        k++;
      }
    }
}
