#include "Point2D.h"
#include <iostream>
Point2D::Point2D() {
	Cx = 0;
	Cy = 0;
}
Point2D::Point2D(int a,int b) {
	Cx = a;
	Cy = b;
}
void Point2D::affiche() {
	std::cout << "parametres du point : " << std::endl;
	std::cout << "x = " << this->Cx << std::endl;
	std::cout << "y = " << this->Cy << std::endl;
}
int Point2D::GetCx() {
	return Cx;
}
int Point2D::GetCy() {
	return Cy;
}