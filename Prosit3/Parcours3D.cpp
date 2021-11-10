#include "Parcours3D.h"
Parcours3D::Parcours3D() {
	
}
void Parcours3D::AddPt(Point3D& PtIn) {
	Tab3D.push_back(PtIn);
	return;
};
float Parcours3D::CalcDist() {
	if (Tab3D.size() <= 1) {
		std::cout << "Distance totale du parcours = 0" << std::endl;
	}
	else {
		float Dist = 0;
		Point3D LastPt=Tab3D[0];
		float a;
		float b;
		float c;
		for (int i = 0; i < (Tab3D.size()); i++) {
			a = pow(LastPt.GetCx() - Tab3D[i].GetCx(), 2);
			b = pow(LastPt.GetCy() - Tab3D[i].GetCy(), 2);
			c = pow(LastPt.GetCz() - Tab3D[i].GetCz(), 2);
			Dist += std::sqrt(a + b + c);
			LastPt = Tab3D[i];
		}
		return Dist;
	}
}
void Parcours3D::ShowParcours() {
	if (Tab3D.size() == 0) {
		std::cout << "Parcours Vide" << std::endl;
	} else {
		for (int i = 0; i < Tab3D.size(); i++) {
			std::cout << "Point N'" << i << " Coordonees :" << std::endl;
			Tab3D[i].affiche();
		}
	}
	return;
};
void Parcours3D::RetPt() {
	Tab3D.pop_back();
	Tab3D.resize(Tab3D.size());
	return;
}