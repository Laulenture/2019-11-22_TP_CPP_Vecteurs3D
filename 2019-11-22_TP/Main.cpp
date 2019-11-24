#include "Vecteur3D.h"
#include <iostream>
#include <cstdlib>

int main() {
	//Initialisation et affichage des vecteurs
	Vecteur3D MonVecteur(12,-12,10);
	MonVecteur.AfficheVecteur();
	Vecteur3D MonVecteur2(24, 13, -9);
	MonVecteur2.AfficheVecteur();

	//Utilisation methode Normax
	Vecteur3D::normaxValeur(MonVecteur, MonVecteur2);

	//Somme de deux vecteurs
	std::cout << "La somme des deux vecteurs est:" << std::endl;
	Vecteur3D::Somme(MonVecteur, MonVecteur2).AfficheVecteur();

	//Produit de deux vecteurs
	std::cout << "Le produit scalaire des deux vecteurs est:" << std::endl;
	Vecteur3D::produitScalaire(MonVecteur, MonVecteur2).AfficheVecteur();



	system("pause");

	return 0;
}