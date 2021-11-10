#pragma once
#include <iostream>
class Point2D
{
public:
	Point2D();
	Point2D(int, int);
	int GetCx();
	int GetCy();
	virtual void affiche();
protected:
	int Cx;
	int Cy;
};

