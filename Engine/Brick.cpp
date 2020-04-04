#include "brick.h"

void Brick::__init__(float x, float y)
{
	xt = x;
	yt = y;
	xb = x + width;
	yb = y + height;
}

void Brick::Draw(Graphics& gfx)
{
	for (float y = yt; y < (yb - 1); y++)
	{
		for (float x = xt; x < (xb - 1); x++)
		{
			gfx.PutPixel(int(x), int(y), 255, 100, 100);
		}
	}
}

bool Brick::getisactive()
{
	return isactive;
}

void Brick::setisactive( bool x)
{
	isactive = x;
}
