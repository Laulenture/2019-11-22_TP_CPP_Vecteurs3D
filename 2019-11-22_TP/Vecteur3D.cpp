#include "Vecteur3D.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

int Vecteur3D::nNombre = 0;

///Assesseurs
float Vecteur3D::getX() {
	return nX;
}

float Vecteur3D::getY() {
	return nY;
}

float Vecteur3D::getZ() {
	return nZ;
}

///mutateurs
void Vecteur3D::setX(float nX) {
	this->nX = nX;
}

void Vecteur3D::setY(float nY) {
	this->nY = nY;
}

void Vecteur3D::setZ(float nZ) {
	this->nZ = nZ;
}

///methodes
void Vecteur3D::Init(float nX, float nY, float nZ) {
	this->nX = nX;
	this->nY = nY;
	this->nY = nZ;
	nNombre++;
}

void Vecteur3D::AfficheVecteur() {
	std::cout << "< " << this->getX() << ", " << this->getY() << ", " << this->getZ() << " >" << std::endl;
};

bool Vecteur3D::coincideValeur(Vecteur3D Vect) {
	if (this->nX == Vect.nX && this->nY == Vect.nY && this->nZ == Vect.nZ) {
		return true;
	}
	else {
		return false;
	}
}

bool Vecteur3D::coincideAdresse(Vecteur3D * Vect) {
	if (this->nX == Vect->nX && this->nY == Vect->nY && this->nZ == Vect->nZ) {
		return true;
	}
	else {
		return false;
	}
}

bool Vecteur3D::coincideReference(Vecteur3D &Vect) {
	if (this->nX == Vect.nX && this->nY == Vect.nY && this->nZ == Vect.nZ) {
		return true;
	}
	else {
		return false;
	}
}

Vecteur3D Vecteur3D::normaxValeur(Vecteur3D Vect1, Vecteur3D Vect2)
{
	if (sqrt(Vect1.nX*Vect1.nX + Vect1.nY*Vect1.nY + Vect1.nZ*Vect1.nZ) > sqrt(Vect2.nX*Vect2.nX + Vect2.nY*Vect2.nY + Vect2.nZ*Vect2.nZ)) {
		return Vect1;
	}
	else {
		return Vect2;
	}
}

Vecteur3D Vecteur3D::normaxAdresse(Vecteur3D * Vect1, Vecteur3D * Vect2)
{
	if (sqrt(Vect1->nX*Vect1->nX + Vect1->nY*Vect1->nY + Vect1->nZ*Vect1->nZ) > sqrt(Vect2->nX*Vect2->nX + Vect2->nY*Vect2->nY + Vect2->nZ*Vect2->nZ)) {
		return *Vect1;
	}
	else {
		return *Vect2;
	}
}

Vecteur3D Vecteur3D::normaxReference(Vecteur3D &Vect1, Vecteur3D &Vect2)
{
	if (sqrt(Vect1.nX*Vect1.nX + Vect1.nY*Vect1.nY + Vect1.nZ*Vect1.nZ) > sqrt(Vect2.nX*Vect2.nX + Vect2.nY*Vect2.nY + Vect2.nZ*Vect2.nZ)) {
		return Vect1;
	}
	else {
		return Vect2;
	}
}

Vecteur3D Vecteur3D::Somme(Vecteur3D &Vect1, Vecteur3D &Vect2) {
	Vecteur3D VectRes;
	VectRes.nX = Vect1.nX + Vect2.nX;
	VectRes.nY = Vect1.nY + Vect2.nY;
	VectRes.nZ = Vect1.nZ + Vect2.nZ;
	return VectRes;
}
Vecteur3D Vecteur3D::produitScalaire(Vecteur3D &Vect1, Vecteur3D &Vect2)
{
	Vecteur3D VectRes;
	VectRes.nX = Vect1.nX * Vect2.nX;
	VectRes.nY = Vect1.nY * Vect2.nY;
	VectRes.nZ = Vect1.nZ * Vect2.nZ;
	return VectRes;
}

int Vecteur3D::nombre()
{
	return nNombre;
}

///Constructeurs
Vecteur3D::Vecteur3D() {
	//std::cout << "Constructeur Vecteur 3D sans arguments" << std::endl;
	this->nX = 0;
	this->nY = 0;
	this->nZ = 0;
	nNombre++;
}

/*Vecteur3D::Vecteur3D(float nX, float nY, float nZ) {
	std::cout << "Constructeur Vecteur 3D avec arguments" << std::endl;
	this->nX = nX;
	this->nY = nY;
	this->nZ = nZ;
	nNombre++;
}*/

Vecteur3D::Vecteur3D(const Vecteur3D & Vect) {
	nX = Vect.nX;
	nY = Vect.nY;
	nZ = Vect.nZ;
}

//Destructeur
Vecteur3D::~Vecteur3D() {
	//nNombre--;
	///Il s'av�re que le destructeur est appel� une fois dans toutes mes m�thodes static, je ne comprend pas pourquoi et comment controuner le probl�me.
	///Suis-je sens� �viter les fonctions static pour cete raision ou y a t-il un moyen d'�viter �a?
}