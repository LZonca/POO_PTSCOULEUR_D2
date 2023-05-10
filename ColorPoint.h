#pragma once
#include "Point.h"
class ColorPoint
{
private:
	static int countColorPoint;
	std::string color;
	Point point;
public:
	ColorPoint();
	ColorPoint(std::string color, Point w);
	std::string info();
	std::string getColor();
	static int getNuberOfCP();
};

