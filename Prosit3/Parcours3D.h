#pragma once
#include "Parcours2D.h"
#include "Point3D.h"
class Parcours3D : public Parcours2D
{
public:
	Parcours3D();
	float CalcDist();
	void AddPt(Point3D&);
	void RetPt();
	void ShowParcours();
protected:
	std::vector<Point3D> Tab3D;
};

