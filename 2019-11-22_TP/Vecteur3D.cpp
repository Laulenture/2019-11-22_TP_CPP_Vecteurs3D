#include "Vecteur3D.h"
#include <iostream>
#include <cstdlib>

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