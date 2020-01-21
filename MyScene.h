#pragma once

#include "Scene.h"

// A child of the Scene class to make a new animated scene.
// Feel free to add any new member functions or variables to MyScene.
class MyScene : public Scene
{
    protected:
	int y = 0;
	int x = 0;

        // Called once when the scene begins.
        virtual void init()
        {
            // Keep this call to the parent's version of init()
            Scene::init();
            // Your code here


        }

        // Called once every frame. 
        virtual void update()
        {
	    clearBoard();
            // Your code here
	    board[y][x] = 'x';
	    board[y][x+1] = 'Y';
	    board[y][x+2] = 'x';
	    x++;
	    y++;


            // Keep this call to the parent's version of update()
            Scene::update();
        }
};
