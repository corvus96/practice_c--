#include "./include/arm.hpp"

double Arm::GetEndX(){
    double angle = this->angle;
    Arm* parent = this->parent;
    while(parent){
        angle += parent->angle;
        parent = parent->parent;
    }
    return this->x + cos(angle) * this->length;
}

double Arm::GetEndY(){
    double angle = this->angle;
    Arm* parent = this->parent;
    while(parent){
        angle += parent->angle;
        parent = parent->parent;
    }
    return this->y + sin(angle) * this->length;
}

void Arm::Render(SDL_Renderer * renderer, uint8_t rgba_color[]){
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, rgba_color[0], rgba_color[1], rgba_color[2], rgba_color[3]);

    SDL_RenderDrawLine(renderer, int (this->x), int (this->y), int (this->GetEndX()), int (this->GetEndY()));
    // render window
    SDL_RenderPresent(renderer);
}
