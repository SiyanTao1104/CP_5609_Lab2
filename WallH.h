/**
 * ... this header file is used for Wall class ...
 */
enum WallState { SOLID};

#include "BoardObjectH.h"
/**
 * ... set wall class and parameters ...
 */
class Wall : public BoardObject
{

private:
	ObjectColours color1;

public:
	Wall (int start_x, int start_y):BoardObject(start_x,start_y)
		{ 
		  color1 = BLACK;
		  myClass=A_WALL;
		};

	void touch ();
};
