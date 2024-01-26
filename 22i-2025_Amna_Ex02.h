#pragma once
class Point
{
private:
	float x;
	float y;

public:
	Point();

	Point(float X, float Y);

	void setx(float X);

	void sety(float Y);

	float getx();

	float gety();

	float distance(int X, int Y);
};

