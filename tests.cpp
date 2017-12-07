#pragma once
#include "Pion.h"
#include "utils.h"
#include  "gtest\gtest.h"

TEST(EnDehorsDuPlateau,Deplacement){
	Pion piontest(true,1,1);
	std::vector<Pion> liste;
	liste.push_back(piontest);
	EXPECT_EQ(false,piontest.deplacerVers(-1,1,liste));
}
