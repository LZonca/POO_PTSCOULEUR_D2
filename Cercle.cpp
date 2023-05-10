#include "Cercle.h"
int Cercle::nbOfCercles = 0;

Cercle::Cercle(Point c) {
	this->centre = c;
	this->rayon = 0;
	Cercle::nbOfCercles++;
}

Cercle::Cercle(int ray, Point c) {
	this->centre = c;
	this->rayon = ray;
	Cercle::nbOfCercles++;
}

std::string Cercle::info() {
	return "Cercle rayon: " + std::to_string(this->rayon) + " " + this->centre.info();
}

int Cercle::getNbCercles() {
	return nbOfCercles;
}