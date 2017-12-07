#include "utils.h"

using namespace std;

std::vector<Pion> intitListe()//intialise la liste des pions
{
	std::vector<Pion> liste;
	return liste;
}


void demandeCoord(int* x,int* y)
{
	cout<<"Quel pion voulez vous bouger ?"<<endl<<"Colone : ";
	cin>>*x;
	cout<<endl<<"Ligne : ";
	cin>>*y;
}

//fonction qui dessine dans la console le plateau avec les pions
void dessinerPlateau(vector<Pion> liste)
{
	cout<<"  0 1 2 3 4 5 6 7 8 9"<<endl;
	for (int x=0;x<10;x++) //pour chaque case du plateau
	{
		for (int y=0;y<10;y++)
		{
			bool trouv� = false;
			for (int z=0; z<(int)liste.size();z++) //on regarde dans la liste de pion
			{
				if(liste[z].getx()==x && liste[z].gety()==y) //si un pion est sur cette case
				{
					if (liste[z].estBlanc()==0) //on met la bonne lettre en fonction de la couleur
					{
						cout<<"B ";
						trouv� = true;
					}
					else
					{
						cout<<"N ";
						trouv� = true;
					}
				}
			}
			if(trouv�=false) //si pas de pion on laisse un vide
				cout<<"  ";
		}
		cout<<endl;
	}
}