/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	BrickGame.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "BrickGame.h"
#include "Brick.h"

BrickGame::BrickGame( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
    int k = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            brick[k].__init__(float(200 + j * 20),float (150 + i * 15));
            k++;
        }
    }
}

void BrickGame::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void BrickGame::UpdateModel()
{
    if (wnd.kbd.KeyIsPressed(VK_RIGHT))
    {
        platform.moveright();
    }    
    platform.clamplatform();
    if (wnd.kbd.KeyIsPressed(VK_LEFT))
    {
        platform.moveleft();
    }   
    platform.clamplatform();
 }

void BrickGame::ComposeFrame()
{
    for (int i = 0; i < 120; i++)
    {
        if (brick[i].getisactive())
        {
            brick[i].Draw(gfx);
        }
    }
    platform.draw( gfx);
}
