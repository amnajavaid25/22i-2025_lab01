#include "Point.h"
#include<iostream>
#include<cmath>
using namespace std;
Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(float X, float Y)
{
	x = X;
	y = Y;
}

void Point::setx(float X)
{
	x = X;
}

void Point::sety(float Y)
{
	y = Y;
}

float Point::getx()
{
	return x;
}

float Point::gety()
{
	return y;
}

float Point::distance(int X, int Y)
{
	float difx = X - this->x;
	float dify = Y - this->y;

	return sqrt(difx * difx + dify * dify);
}