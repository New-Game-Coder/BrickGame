#pragma once
# include "Graphics.h"
	
class Brick
{
public:
	void __init__(float x, float y);
	void Draw(Graphics& gfx);	
	bool getisactive();
	void setisactive(bool x);
private:
	float xt = 0.0f;
	float yt= 0.0f;
	float xb = 0.0f;
	float yb = 0.0f;
	float width = 20.0f;
	float height = 15.0f;
	bool isactive = true;
};