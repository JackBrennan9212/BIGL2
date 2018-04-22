
//XCode header
#ifndef AsteroidObject_hpp
#define AsteroidObject_hpp

#include "Game.hpp"

//header class for asteroid object

class AsteroidObject{
public:
    //declare variables as public
    
    //asteroid object parameters
    AsteroidObject(const char* texturesheet, int x, int y);
    //asteroid object
    ~AsteroidObject();
    
    //update method
    void update();
    //render method
    void render();
    //xval method
    int xval();
    //yval method
    int yval();
    
    
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

//ends the asteroid object header class
#endif /* AsteroidObject_hpp */
