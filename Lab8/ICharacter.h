#pragma once
#include "IRace.h"

class ICharacter {

public:

	ICharacter(IRace* race) {}

protected:

	int hitPoint;
	int armorClass;
	int hitBonas;
	IRace* m_race;
};

class Wizard : public ICharacter
{

};

class Rogue : public ICharacter
{

};

class Fighter : public ICharacter
{

};

class Cleric : public ICharacter
{

};