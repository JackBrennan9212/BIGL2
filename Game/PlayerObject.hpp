#include "Game.hpp"

//header class for player object
class PlayerObject{
public:
    //declare variables as public

    //defines player object
    PlayerObject(const char* texturesheet, int x, int y);
    //player object
    ~PlayerObject();
    
    //update method
    void update();
    //render method
    void render();
    
    //move left method
    void moveLeft();
    //move right method
    void moveRight();
    
    //xval method
    int xval();
    
private:
    //declare variables as private
    
    //creates x position variable
    int xpos;
    //creates y position variable
    int ypos;
    
    //points SDL Texture to an object
    SDL_Texture* objTexture;
    //declares the SDL Rectangle
    SDL_Rect srcRect, destRect;
    
};
