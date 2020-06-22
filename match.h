#ifndef MATCH_H
#define MATCH_H
#include "playfield.h"
#include "pucksupply.h"
#include "brickpile.h"

class Match
{
public:
    void start();
    void pause();
    void resume();
    void win();
    void lose();
    Match();
};

#endif // MATCH_H
