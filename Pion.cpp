#pragma once
#include "Pion.h"



Pion::Pion(bool _blanc,int X,int Y) //blanc est vrai si le pion est blanc, faux s'il est noir
{
	blanc=_blanc;
	x=X;
	y=Y;
}



//verifie si le pion peut s'y d�placer (s'il y a d�ja un pion, celui-ci est supprim� )
// renvoie vrai si le pion a �t� d�plac�, faux sinon
bool Pion::deplacerVers(int X,int Y,std::vector<Pion> & liste) 
{
	if(X<0||X>9)
	{
		return false;
	}
	if(Y<0||Y>9)
	{
		return false;
	}
	return true;
}