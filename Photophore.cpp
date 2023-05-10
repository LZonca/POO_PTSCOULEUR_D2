#include "Photophore.h"

int Photophore::countPhotophore = 0;

Photophore::Photophore() {
	this->RGB = "";
	this->size = 0;
	Photophore::countPhotophore++;
}

Photophore::Photophore(int size, std::string RGB, Pixel z, ColorPoint x, Point w) {
	this->size = size;
	this->RGB = RGB;
	this->pixel = z;
	this->CPoint = x;
	this->point = w;
	Photophore::countPhotophore++;
}

std::string Photophore::info() {
	return "Photophore size: " + std::to_string(this->size) + " " + this->RGB + " " + this->CPoint.info() + " " + this->point.info() + " " + this->pixel.info() + " " + this->point.info();
}

int Photophore::getNumberOfPhotophore() {
	return countPhotophore;
}