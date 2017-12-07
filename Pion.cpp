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

bool Pion::deplacerVers(int X,int Y,std::vector<Pion> liste) //verifie si le pion peut s'y déplacer (s'il y a déja un pion, celui-ci est supprimé )
{
	
	return true;
}