#pragma once

#include <iostream>
#include <cstdlib>

class Vecteur3D {

private:
	///que dans la classe ell-m�me
	float nX, nY, nZ;	//pour les 3 compostantes (cart�siennes)
	static int nNombre;

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
	bool coincideValeur(Vecteur3D Vect);
	bool coincideAdresse(Vecteur3D * Vect);
	bool coincideReference(Vecteur3D &Vect);
	static Vecteur3D normaxValeur(Vecteur3D Vect1, Vecteur3D Vect2);
	static Vecteur3D normaxAdresse(Vecteur3D * Vect1, Vecteur3D * Vect2);
	static Vecteur3D normaxReference(Vecteur3D &Vect1, Vecteur3D &Vect2);
	static Vecteur3D Somme(Vecteur3D &Vect1, Vecteur3D &Vect2);
	static Vecteur3D produitScalaire(Vecteur3D &Vect1, Vecteur3D &Vect2);
	static int nombre();

	///constructeurs
	Vecteur3D();
	//Vecteur3D(float nX, float nY, float nZ);

	/*inline Vecteur3D(float nX, float nY, float nZ) {
		this->nX = nX;
		this->nY = nY;
		this->nZ = nZ;
		nNombre++;
	}*/

	Vecteur3D(float fltX, float fltY, float fltZ) {
		nX = fltX; nY = fltY; nZ = fltZ; nNombre++;
	}

	///Constructeur de recopie
	Vecteur3D(const Vecteur3D & Vect);

	///desctructeur
	~Vecteur3D();
};