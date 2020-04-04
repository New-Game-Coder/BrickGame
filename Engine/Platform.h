#pragma once
#include "Graphics.h"


class Platform
{
public:
	void draw(Graphics& gfx);
	void moveright();
	void moveleft();	
	void clamplatform();
private:
	float xt = 349.0f;
	float yt = 584.0f;
	float xb = 449.0f;
	float yb =599;
	float width = 100.0f;
	float height = 15.0f;
	float vel = 3;	
};