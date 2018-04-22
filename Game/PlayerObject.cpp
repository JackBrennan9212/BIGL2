#include "PlayerObject.hpp"
#include "TextureManager.hpp"

//the player object class defines the player object and its parameters
PlayerObject::PlayerObject(const char* texturesheet, int x, int y){
    //makes an object texture
    objTexture = TextureManager::LoadTexture(texturesheet);
    //defines the x position
    xpos = x;
    //defines the y position
    ypos = y;
}

//updates the player object
void PlayerObject::update(){
    
    /*this is blank because the player only moves based on controls and doesn't fall
    //
    */
    
    //these define the parameters of the picture that we used for the player

    //height
    srcRect.h = 570;
    //width
    srcRect.w = 570;
    //x position
    srcRect.x = 0;
    //y position
    srcRect.y = 0;
    
    //these define the parameters in the map that we used for the player
    
    //x position
    destRect.x = xpos;
    //y position
    destRect.y = ypos;
    //width
    destRect.w = srcRect.w/6;
    //height
    destRect.h = srcRect.h/6;
}

//renders the player object 
void PlayerObject::render(){
    SDL_RenderCopy(Game::renderer, objTexture, &srcRect, &destRect);
}

//this method returns the x position of the player object
int PlayerObject::xval(){
    return xpos;
}

//this method moves the player object to the left
void PlayerObject::moveLeft()
{
    //makes a barrier so the player can't move off the screen
    if(xpos<=20){
        //changed from -20 to 20
        xpos = 20;
    }
    else{
    xpos -= 5;
    }
}

//this method moves the player object to the right
void PlayerObject::moveRight()
{
    //makes a barrier so the player can't move off the screen
    if(xpos>=730){
        //changed from 770 to 730
        xpos = 730;
    }
    else{
    xpos += 5;
    }
}
