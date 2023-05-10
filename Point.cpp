#include "Point.h"

int Point::numberOfPoint = 0;

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
	this->numberOfPoint++;
}

Point::Point() {
	this->x = 0;
	this->y = 0;
	this->numberOfPoint++;
}

std::string Point::info() {
	return "Point X:" + std::to_string(this->x) + " Point Y:" + std::to_string(this->y);
}

int Point::getNumberOfPoint() {
	return numberOfPoint;
}