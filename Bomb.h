/**
 * ... This header file is used for Bomb class ...
 */

#ifndef CP_5609_LAB2_BOMB_H
#define CP_5609_LAB2_BOMB_H
#include "BoardObjectH.h"
#include <iostream>
/**
 * ... set bomb color and bomb class ...
 */
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
