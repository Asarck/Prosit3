#pragma once
#include "Point2D.h"
#include <iostream>

class Point3D : public Point2D 
{// par défaut privée, il faut spécifier PUBLIC pour que ce soit reférencé en public + autorise la conversion a la classe de base
public:
	Point3D();
	Point3D(int, int, int);
	int GetCz();
	void affiche();
private:
	int Cz;
};

