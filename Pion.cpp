#pragma once
#include "Pion.h"



Pion::Pion(bool _blanc,int X,int Y) //blanc est vrai si le pion est blanc, faux s'il est noir
{
	blanc=_blanc;
	x=X;
	y=Y;
}


Pion::~Pion(void)
{
}

bool Pion::deplacerVers(int X,int Y,std::vector<Pion> liste) //verifie si le pion peut s'y d�placer (s'il y a d�ja un pion, celui-ci est supprim� )
{
	
	return true;
}