#include "Vecteur3D.h"
#include <iostream>
#include <cstdlib>

int main() {
	//Initialisation et affichage des vecteurs
	Vecteur3D MonVecteur(12,-12,10);
	MonVecteur.AfficheVecteur();
	Vecteur3D MonVecteur2(24, 13, -9);
	MonVecteur2.AfficheVecteur();

	std::cout << "Nombre de vecteur(s): " << Vecteur3D::nombre() << std::endl;

	//Utilisation methode Normax
	Vecteur3D::normaxReference(MonVecteur, MonVecteur2);
	std::cout << "Nombre de vecteur(s): " << Vecteur3D::nombre() << std::endl;

	//Somme de deux vecteurs
	std::cout << "La somme des deux vecteurs est:" << std::endl;
	Vecteur3D SommeVecteur(Vecteur3D::Somme(MonVecteur, MonVecteur2));
	SommeVecteur.AfficheVecteur();

	//Produit de deux vecteurs
	std::cout << "Le produit scalaire des deux vecteurs est:" << std::endl;
	Vecteur3D ProduitVecteur(Vecteur3D::produitScalaire(MonVecteur, MonVecteur2));
	ProduitVecteur.AfficheVecteur();

	//Affichage nombre d'objets
	std::cout << "Nombre de vecteur(s): " << Vecteur3D::nombre() << std::endl;

	system("pause");

	return 0;
}