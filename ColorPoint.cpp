#include "ColorPoint.h"

int ColorPoint::countColorPoint = 0;

ColorPoint::ColorPoint() {
	this->color = "";
	this->point = Point(0, 0);
	ColorPoint::countColorPoint++;
}

ColorPoint::ColorPoint(std::string color, Point w) {
	this->color = color;
	this->point = w;
	ColorPoint::countColorPoint++;
}

std::string ColorPoint::info() {
	return "ColorPoint Color: " + this->color + " "+ this->point.info();
}

int ColorPoint::getNuberOfCP() {
	return countColorPoint;
}

std::string ColorPoint::getColor() {
	return this->color;
}
