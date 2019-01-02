//
// Created by artyom on 02.01.19.
//

#ifndef UNTITLED1_SDLGAMEOBJECT_H
#define UNTITLED1_SDLGAMEOBJECT_H

#include "GameObject.h"

class SDLGameObject : public GameObject
{
public:

    SDLGameObject(const LoaderParams* pParams);

    virtual void draw();
    virtual void update();
    virtual void clean();

protected:

    int m_x;
    int m_y;

    int m_width;
    int m_height;

    int m_currentRow;
    int m_currentFrame;

    std::string m_textureID;
};


#endif //UNTITLED1_SDLGAMEOBJECT_H
