#include "QRCode.h"

QRCode::QRCode() {
	this->dimX = 0;
	this->dimY = 0;
}

QRCode::QRCode(int x, int y) {
	this->dimX = x;
	this->dimY = y;
}

void QRCode::generateQRCode(int dimX, int dimY) {
	ColorPoint tab[10][10];

    std::string ColorTab[2];
    ColorTab[0] = "Noir";
    ColorTab[1] = "Blanc";

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            ColorPoint P(ColorTab[rand() % 2], Point(i, j));
            tab[i][j] = P;
        }
    }
//Afficher le tableau sous forme un peu comprehensible
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << tab[i][j].getColor() << " ";
        }
        std::cout << std::endl;
    }
}