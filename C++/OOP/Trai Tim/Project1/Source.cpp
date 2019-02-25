#include "graphics.h"
#include<math.h>
#include<iostream>
#include <cstdlib>
using namespace std;

int GetY_Up(int x, int sizeHeart)
{
	return 4 / 5.0 * (sqrt(sizeHeart * abs(x)) + sqrt(sizeHeart*sizeHeart - x*x));    //tìm hiểu phương trình trái tim :3
}

int GetY_Down(int x, int sizeHeart)
{
	return 4 / 5.0 * (sqrt(sizeHeart * abs(x)) - sqrt(sizeHeart*sizeHeart - x*x));
}

void DrawHeart(int coordX, int coordY, int sizeHeart, int color)
{
	setcolor(color);
	int limitX = sizeHeart;

	int oldX = -limitX + coordX;
	int oldY_Up = -GetY_Up(-limitX, sizeHeart) + coordY;
	int oldY_Down = -GetY_Down(-limitX, sizeHeart) + coordY;

	int firstX = oldX;
	int firstY_Up = oldY_Up;
	int firstY_Down = oldY_Down;
	//line(firstX, firstY_Up, firstX, firstY_Down);
	int x = 0;
	int y = 0;
	int xCoorded = 0;
	for (x = -limitX + 1; x <= limitX; x++)
	{
		xCoorded = x + coordX;
		y = -GetY_Up(x, sizeHeart) + coordY;
		//putpixel(xCoorded, y, color);
		line(oldX, oldY_Up, xCoorded, y);       //line thay cho put pixel để tạo trái tim liền nét
		oldY_Up = y;

		y = -GetY_Down(x, sizeHeart) + coordY;
		//putpixel(xCoorded, y, color);
		line(oldX, oldY_Down, xCoorded, y);
		oldY_Down = y;

		oldX = xCoorded;
	}
	putpixel(oldX, oldY_Up, color);
	//line(oldX, oldY_Up, oldX, oldY_Down);
}
int main()
{
	initwindow(1000, 900);

	for (int i = 0; i<300; i++)
	{
		DrawHeart(500, 500, i, 4);
	}


	// vẽ trái tim ko bị hở màu, mở comment để xem
	/*
	for(int i=0;i<300;i++)
	{
	DrawHeart(500, 500, i, 4);
	DrawHeart(500, 500+1, i, 4);
	}
	*/

	getch();
	return 0;
}