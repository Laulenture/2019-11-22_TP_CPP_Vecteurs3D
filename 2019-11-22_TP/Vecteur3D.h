#pragma once

#include <iostream>
#include <cstdlib>

class Vecteur3D {

private:
	///que dans la classe ell-même
	float nX, nY, nZ;	//pour les 3 compostantes (cartésiennes)

public:
	///public est partout, dans la classe et à l'éxterieur

	///Assesseurs
	float getX();
	float getY();
	float getZ();
	///Mutateurs
	void setX(float nX);
	void setY(float nY);
	void setZ(float nZ);

	///Methodes
	void Init(float nX, float nY, float nZ);
	void AfficheVecteur();
	bool coincideValeur(Vecteur3D Vect);
	bool coincideAdresse(Vecteur3D * Vect);
	bool coincideReference(Vecteur3D &Vect);
	

	///constructeurs
	Vecteur3D();
	//Vecteur3D(float nX, float nY, float nZ);

	inline Vecteur3D(float nX, float nY, float nZ) {
		this->nX = nX;
		this->nY = nY;
		this->nZ = nZ;
	}

	///desctructeur
	~Vecteur3D();
};