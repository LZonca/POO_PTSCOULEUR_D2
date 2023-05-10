#pragma once
#include <string>
#include <iostream>
class Point
{
private:
	static int numberOfPoint;
	int x;
	int y;

public:
	Point(int x, int y);
	Point();
	std::string info();
	static int getNumberOfPoint();
};