#include "Pixel.h"

int Pixel::countPixel = 0;

Pixel::Pixel() {
	this->address = "";
	this->point = Point(0, 0);
	Pixel::countPixel++;
}

Pixel::Pixel(std::string address, Point w) {
	this->address = address;
	this->point = w;
	Pixel::countPixel++;
}

std::string Pixel::info() {
	return "Pixel Address: " + this->address + this->point.info();
}

int Pixel::getCountPixel() {
	return countPixel;
}