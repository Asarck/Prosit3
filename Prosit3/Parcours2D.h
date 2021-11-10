#pragma once
#include "Point2D.h"
#include <vector>
class Parcours2D
{
public:
	Parcours2D();
	virtual float CalcDist();
	virtual void AddPt(Point2D&);
	virtual void RetPt();
	virtual void ShowParcours();
private:
	std::vector<Point2D> Tab2D;
};

