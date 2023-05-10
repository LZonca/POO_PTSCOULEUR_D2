#include <iostream>
#include "Cercle.h"
#include "Photophore.h"
#include "QRCode.h"

using namespace std;


int main(void) {
	
	Point A(1, 1);
	cout << A.info() << endl;
	Point B(2, 2);
	cout << B.info() << endl;
	Point C(3, 3);
	cout << C.info() << endl;

	/*cout << "Stats : " << endl;

	cout << "Instance de points: " << Point::getNumberOfPoint() << endl;
	cout << "Instance de Cercles: " << Cercle::getNbCercles() << endl;
	cout << "Instance de pixel: " << Pixel::getCountPixel() << endl;
	cout << "Instance de ColorPoints: " << ColorPoint::getNuberOfCP() << endl;
	cout << "Instance de Photophore: " << Photophore::getNumberOfPhotophore() << endl;*/

	Cercle D(3, Point(9,9));
	cout << D.info() << endl;
	Cercle E(3, A);
	cout << E.info() << endl;

	//cout << "Stats : " << endl;

	//cout << "Instance de points: " << Point::getNumberOfPoint() << endl;
	//cout << "Instance de Cercles: " << Cercle::getNbCercles() << endl;
	//cout << "Instance de pixel: " << Pixel::getCountPixel() << endl;
	//cout << "Instance de ColorPoints: " << ColorPoint::getNuberOfCP() << endl;
	//cout << "Instance de Photophore: " << Photophore::getNumberOfPhotophore() << endl;

	Pixel P1("<__1234__>", Point(10,10));
	cout << P1.info() << endl;
	Pixel P2("<__5678__>", A);
	cout << P2.info() << endl;

	cout << "Stats : " << endl;

	cout << "Instance de points: " << Point::getNumberOfPoint() << endl;
	cout << "Instance de Cercles: " << Cercle::getNbCercles() << endl;
	cout << "Instance de pixel: " << Pixel::getCountPixel() << endl;
	cout << "Instance de ColorPoints: " << ColorPoint::getNuberOfCP() << endl;
	cout << "Instance de Photophore: " << Photophore::getNumberOfPhotophore() << endl;

	ColorPoint CP1("Vert", B);
	cout << CP1.info() << endl;

	//cout << "Stats : " << endl;

	//cout << "Instance de points: " << Point::getNumberOfPoint() << endl;
	//cout << "Instance de Cercles: " << Cercle::getNbCercles() << endl;
	//cout << "Instance de pixel: " << Pixel::getCountPixel() << endl;
	//cout << "Instance de ColorPoints: " << ColorPoint::getNuberOfCP() << endl;
	//cout << "Instance de Photophore: " << Photophore::getNumberOfPhotophore() << endl;

	Photophore PO(10, "255,255,255", Pixel("<__AZER__>", Point(11,11)), ColorPoint("Rouge", Point(13,13)), Point(15,15));
	cout << PO.info() << endl;

	Photophore PH(1, "255,255,255", P1, CP1, C);
	cout << PH.info() << endl;
	/*
	QRCode QR1(10, 10);

	cout << P1.info() << endl;
	cout << C1.info() << endl;
	cout << CP1.info() << endl;
	cout << Pph1.info() << endl;
	
	cout << "QR Code : " << endl;

	QR1.generateQRCode(10, 10);
	*/

	cout << "Stats : " << endl;

	cout << "Instance de points: " << Point::getNumberOfPoint() << endl;
	cout << "Instance de Cercles: " << Cercle::getNbCercles() << endl;
	cout << "Instance de pixel: " << Pixel::getCountPixel() << endl;
	cout << "Instance de ColorPoints: " << ColorPoint::getNuberOfCP() << endl;
	cout << "Instance de Photophore: " << Photophore::getNumberOfPhotophore() << endl;
	
	return 0;
}