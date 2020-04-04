#include "Platform.h"

void Platform::draw(Graphics& gfx)
{
	for (float i = yt; i < yb ; i++)
	{
		for (float j = xt; j < xb; j++)
		{
			gfx.PutPixel(int(j), int(i), 255, 50, 50);
		}
	}
}

void Platform::moveright()
{
	xb = xt + width;
	xt += vel;
}
void Platform::moveleft()
{
	xb = xt + width;
	xt -= vel;
}

void Platform::clamplatform()
{
	if (xt <= 0)
	{
		xt = 0;
	}
	if (xt + width >= 798)
	{
		xt = 798 - width;
	}
}


