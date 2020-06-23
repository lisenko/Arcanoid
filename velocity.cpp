#include <iostream>
#include <string>

#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

class Velocity{
private:
    double _dx, _dy;
    int _speed;

public:
    Velocity(int D, int S){
        _speed = S;
        setDirection(D);
    }

    int getSpeed(){
        return _speed;
    }

    int getSpeedX(){
        return (int) _dx;
    }

    int getSpeedY() {
        return (int)_dy;
    }

    void setDirection(int d) {
        _dx = cos(d * M_PI/180) * (double)_speed;
        _dy = sin(d * M_PI/180) * (double)_speed;
    }

    int getDirection() {
        return ((int)(atan2(_dy, _dx) * 180/M_PI));
    }

    /* Инвертировать направление движения. */
    void reverse(){
        reverseX();
        reverseY();
    }

    void reverseX(){
        _dx = -_dx;
    }

    void reverseY(){
        _dy = -_dy;
    }
};
