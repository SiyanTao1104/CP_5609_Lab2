//
// Created by TSY on 2022/8/27.
//

#ifndef CP_5609_LAB2_MONSTER_H
#define CP_5609_LAB2_MONSTER_H
#include <iostream>


#include "BoardObjectH.h"
class Monster : public BoardObject
{

private:
    ObjectColours color1;
    ObjectColours  color2;

public:
    Monster (int start_x, int start_y):BoardObject(start_x,start_y)
    {
        color1 = RED;
        color2  = BLUE;
        myClass=A_MONSTER;
    };

    virtual void touch ();
};
#endif //CP_5609_LAB2_MONSTER_H
