#pragma once
#include "Point.h"
class Pixel
{
private:
	static int countPixel;
	std::string address;
	Point point;

public:
	Pixel();
	Pixel(std::string address, Point w);
	std::string info();
	static int getCountPixel();
};

