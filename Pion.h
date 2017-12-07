#pragma once
#include <vector>


class Pion
{
private :
	int x;
	int y;
	bool blanc;
public:
	Pion(bool _blanc,int X,int Y);


	
	int getx();
	int gety();
	bool estBlanc();

	bool deplacerVers(int X,int Y,std::vector<Pion> &liste);


};

