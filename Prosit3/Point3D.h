#pragma once
#include "Point2D.h"
#include <iostream>

class Point3D : public Point2D 
{// par d�faut priv�e, il faut sp�cifier PUBLIC pour que ce soit ref�renc� en public + autorise la conversion a la classe de base
public:
	Point3D();
	Point3D(int, int, int);
	int GetCz();
	void affiche();
private:
	int Cz;
};

