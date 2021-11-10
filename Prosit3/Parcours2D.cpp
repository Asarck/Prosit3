#include "Parcours2D.h"
Parcours2D::Parcours2D() {
}
void Parcours2D::AddPt(Point2D& PtIn) {
	Tab2D.push_back(PtIn);
	return;
};
void Parcours2D::ShowParcours() {
	if (Tab2D.size() == 0) {
		std::cout << "Parcours Vide" << std::endl;
		return;
	} for (int i = 0; i < Tab2D.size(); i++) {
		std::cout << "Point N°" << i << " Coordonees :" << std::endl;
		Tab2D[i].affiche();
	}
	return;
};
void Parcours2D::RetPt() {
	Tab2D.pop_back();
	Tab2D.resize(Tab2D.size());
	return;
}
float Parcours2D::CalcDist() {
	if (Tab2D.size() <= 1) {
		std::cout << "Distance totale du parcours = 0" << std::endl;
	}
	else {
		float Dist = 0;
		Point2D LastPt = Tab2D[0];
		float a;
		float b;
		for (int i = 1; i < (Tab2D.size()); i++) {
			a = pow(LastPt.GetCx() - Tab2D[i].GetCx(), 2);
			b = pow(LastPt.GetCy() - Tab2D[i].GetCy(), 2);
			Dist += std::sqrt(a + b);
			LastPt = Tab2D[i];
		}
		return Dist;
	}
}