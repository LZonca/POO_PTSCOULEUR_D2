#pragma once
#include "Point.h"
class Cercle
{
private:
	static int nbOfCercles;
	int rayon;
	Point centre;
public:
	Cercle(Point centre);
	Cercle(int ray, Point centre);
	std::string info();
	static int getNbCercles();
};

