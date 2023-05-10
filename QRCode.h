#pragma once
#include "Photophore.h"
#include <math.h>
#include <iostream>

class QRCode
{
private:
	int dimX;
	int dimY;
public:
	QRCode();
	QRCode(int x, int y);
	void generateQRCode(int dimX, int dimY);
};

