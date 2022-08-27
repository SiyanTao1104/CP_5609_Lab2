//
// Created by TSY on 2022/8/27.
//

#ifndef CP_5609_LAB2_BOMB_H
#define CP_5609_LAB2_BOMB_H
#include "BoardObjectH.h"
#include <iostream>

class Bomb: public BoardObject{

ObjectColours bombColor;
public:
    Bomb (int start_x, int start_y):BoardObject(start_x,start_y)
    {
       bombColor = BLACK;
       myClass=A_BOMB;
    };


    virtual void touch ();
};



#endif //CP_5609_LAB2_BOMB_H
