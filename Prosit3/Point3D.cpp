#include "Point3D.h"
Point3D::Point3D() {
	Cx = 0;
	Cy = 0;
	Cz = 0;
}
Point3D::Point3D(int a,int b,int c) {
	Cx = a;
	Cy = b;
	Cz = c;
}
void Point3D::affiche() {
	Point2D::affiche();
	std::cout << "z = " << this->Cz << std::endl;
}
int Point3D::GetCz() {
	return Cz;
}