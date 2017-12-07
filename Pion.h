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


	
	int getx(){return x;};
	int gety(){return y;};
	bool estBlanc(){return blanc;};

	bool deplacerVers(int X,int Y,std::vector<Pion> &liste);


};

