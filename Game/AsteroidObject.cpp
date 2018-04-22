
#include "AsteroidObject.hpp"
#include "TextureManager.hpp"

//this class defines and outlines the asteroids

//load the textures from texturesheet and define the x and y positions of the asteriod objects
AsteroidObject::AsteroidObject(const char* texturesheet, int x, int y){
    //makes an object texture
    objTexture = TextureManager::LoadTexture(texturesheet);
   //defines the x position
    xpos = x;
    //defines the y position
    ypos = y;
}

//updates the asteroid object
void AsteroidObject::update(){
    
    //the asteroids are falling at 5 pixels per frame
    ypos=ypos+5;
    
    //these define the parameters of the picture that we used for the asteroids
  
    //height
    srcRect.h = 570;
    //width 
    srcRect.w = 570;
    //x position
    srcRect.x = 0;
    //y position
    srcRect.y = 0;
    
    //these define the parameters in the map that we used for the asteroids
    
    //x position
    destRect.x = xpos;
    //y position
    destRect.y = ypos;
    //width
    destRect.w = srcRect.w/6;
    //height
    destRect.h = srcRect.h/6;
}

//this method returns the x position of the asteroid object
int AsteroidObject::xval(){
    //return statement for the method
    return xpos;
}

//this method returns the y position of the asteroid object
int AsteroidObject::yval(){
    //return statement for the method
    return ypos;
}

//this method renders the game and its objects
void AsteroidObject::render(){
    SDL_RenderCopy(Game::renderer, objTexture, &srcRect, &destRect);
}
