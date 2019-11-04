#pragma once
#include <vector>

template <class character> 

class AdenturingParty
{
public:

	AdventuringParty(character character1, character character2, character character3, character character4);
	~AdventuringParty();

private:

	character character1;
	character character2;
	character character3;
	character character4;
	vector<character> party;
};