/**
 * ... this header file is used for VectorBoardObject class, which include one constructor, four methods, and return value ...
 */
#include <vector>
#include  "BoardObjectH.h"
#include  "PlayerH.h"
#include  "CookieH.h"
#include "WallH.h"
#include "Bomb.h"

#ifndef CP_5609_LAB2_VECTORBOARDOBJECTS_H
#define CP_5609_LAB2_VECTORBOARDOBJECTS_H

typedef BoardObject* p_BoardObject;

/**
 * ... set BoardObject and iterator ...
 */
class VectorBoardObjects {
    std::vector <p_BoardObject> list;
    std::vector < p_BoardObject>::iterator internalIterator;

/**
 * ... Create four methods ...
 */
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
