#pragma once

#include <iostream>
#include <cstdlib>

class Vecteur3D {

private:
	///que dans la classe ell-m�me
	float nX, nY, nZ;	//pour les 3 compostantes (cart�siennes)

public:
	///public est partout, dans la classe et � l'�xterieur

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
	

	///constructeurs
	Vecteur3D();
	//Vecteur3D(float nX, float nY, float nZ);

	/*inline Vecteur3D(float nX, float nY, float nZ) {
		this->nX = nX;
		this->nY = nY;
		this->nZ = nZ;
	}*/

	Vecteur3D(float fltX, float fltY, float fltZ) {
		nX = fltX; nY = fltY; nZ = fltZ;
	}

	///desctructeur
	~Vecteur3D();
};