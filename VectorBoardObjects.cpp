//
// Created by TSY on 2022/8/27.
//
#include <iostream>
#include "VectorBoardObjects.h"
#include "WallH.h"
#include "Bomb.h"

using namespace std;
VectorBoardObjects:: VectorBoardObjects(p_BoardObject newOne):list()
{
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    list.insert(it,newOne);
}

p_BoardObject VectorBoardObjects:: theFirst()
{
    if (0 < list.size()  )
    { internalIterator=list.begin();
        return (*internalIterator);
    }
    else
        return NULL;
}


void VectorBoardObjects:: addOne(p_BoardObject newOne)
{
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    list.insert(it,newOne);
}

p_BoardObject VectorBoardObjects :: theNext()
{
    internalIterator++;
    if (internalIterator < list.end())
    {
        return (*internalIterator);
    }
    else
        return NULL;
}

void VectorBoardObjects :: removeOnePlayer()
{
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    while (it<list.end())
    { if (A_PLAYER==(*it)->get_Type())
        { list.erase(it); return;}
        it++;
    }

    return ;
}


bool VectorBoardObjects :: isThereABomb()
{
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    while (it<list.end())
    { if (A_BOMB==(*it)->get_Type())
        {  return true;}
        it++;
    }

    return false ;
}

int main(){
    
    VectorBoardObjects vectorBoardObjects = new Player(4,6);

    vectorBoardObjects.theFirst()->get_Type()



    return 0;
}