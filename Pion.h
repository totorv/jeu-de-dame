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
	~Pion(void);
	bool deplacerVers(int X,int Y,std::vector<Pion> liste);
};

