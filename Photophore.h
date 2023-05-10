#pragma once
#include "ColorPoint.h"
#include "Pixel.h"
class Photophore
{
private:
	static int countPhotophore;
	int size;
	std::string RGB;
	Pixel pixel;
	ColorPoint CPoint;
	Point point; 

public:
	Photophore();
	Photophore(int size, std::string RGB, Pixel z, ColorPoint x, Point w);
	std::string info();
	static int getNumberOfPhotophore();
};

