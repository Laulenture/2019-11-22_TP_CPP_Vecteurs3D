#include "Vecteur3D.h"
#include <iostream>
#include <cstdlib>
#include <cmath>

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
}

void Vecteur3D::AfficheVecteur() {
	std::cout << "X: " << this->getX() << std::endl;
	std::cout << "Y: " << this->getY() << std::endl;
	std::cout << "Z: " << this->getZ() << std::endl;
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
		std::cout << "La norme du premier vecteur est plus grande." << std::endl;
		return Vect1;
	}
	else {
		std::cout << "La norme du second vecteur est plus grande." << std::endl;
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

Vecteur3D Vecteur3D::normaxReference(Vecteur3D & Vect1, Vecteur3D & Vect2)
{
	if (sqrt(Vect1.nX*Vect1.nX + Vect1.nY*Vect1.nY + Vect1.nZ*Vect1.nZ) > sqrt(Vect2.nX*Vect2.nX + Vect2.nY*Vect2.nY + Vect2.nZ*Vect2.nZ)) {
		return Vect1;
	}
	else {
		return Vect2;
	}
}

//Constructeurs
Vecteur3D::Vecteur3D() {
	std::cout << "Constructeur Vecteur 3D avec arguments" << std::endl;
	this->nX = 0;
	this->nY = 0;
	this->nZ = 0;
}

Vecteur3D::~Vecteur3D() {
	
}

/*Vecteur3D::Vecteur3D(float nX, float nY, float nZ) {
	std::cout << "Constructeur Vecteur 3D avec arguments" << std::endl;
	this->nX = nX;
	this->nY = nY;
	this->nZ = nZ;
}*/