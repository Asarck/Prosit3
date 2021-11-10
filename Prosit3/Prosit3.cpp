// Prosit3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Parcours3D.h"
int main()
{
    Point2D* p1 = new Point2D(6,0);
    Point3D* p2 = new Point3D(0,7,2);
    Point3D* p3 = new Point3D(6, 6, 6);
    Point3D* p4 = new Point3D(7, 2, 7);


    p1->affiche();
    p2->affiche();
    p1->affiche();
    *p1 = *p2;    // Si on oublie les *, on va juste changer l'addresse du pointeur
    p1->affiche();
    Parcours3D* d = new Parcours3D;
    d->ShowParcours();
    d->AddPt(*p2);
    d->AddPt(*p3);
    d->AddPt(*p4);
    d->RetPt();
    d->AddPt(*p4);
    d->ShowParcours();
    std::cout << d->CalcDist();
    delete p1;
    delete p2;
    delete p3;
    delete p4;
}
