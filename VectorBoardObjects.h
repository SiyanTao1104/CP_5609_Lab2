//
// Created by TSY on 2022/8/27.
//
#include <vector>
#include  "BoardObjectH.h"
#include  "PlayerH.h"
#include  "CookieH.h"
#include "WallH.h"
#include "Bomb.h"

#ifndef CP_5609_LAB2_VECTORBOARDOBJECTS_H
#define CP_5609_LAB2_VECTORBOARDOBJECTS_H

typedef BoardObject* p_BoardObject;


class VectorBoardObjects {
    std::vector <p_BoardObject> list;
    std::vector < p_BoardObject>::iterator internalIterator;
public:
    VectorBoardObjects(p_BoardObject theFirst);

    p_BoardObject theFirst();
    p_BoardObject theNext();
    void addOne(p_BoardObject newOne);
    void removeOnePlayer();
    bool isThereABomb();
    int isCookieValue();

};


#endif //CP_5609_LAB2_VECTORBOARDOBJECTS_H
