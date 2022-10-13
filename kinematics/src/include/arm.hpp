#ifndef ARM_H
#define ARM_H
#include <cmath>
#include <SDL2/SDL.h>

class Arm {      
  public:             // Access specifier
    double x;
    double y;
    double length;
    double angle;
    Arm(double x, double y, double length, double angle){
        this->x = x;
        this->y = y;
        this->length = length;
        this->angle = angle;
    }
    double GetEndX();
    double GetEndY();
    void Render(SDL_Renderer * renderer, uint8_t rgba_color[]);
};

#endif