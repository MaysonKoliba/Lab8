#pragma once
#include "IRace.h"

class ICharacter {

public:

	ICharacter(IRace* race);
	virtual ~ICharacter();
	virtual void HitPointModification();
	virtual void ArmorClassModification();
	virtual void HitBonusModification();

private:

	int hitPoint;
	int armorClass;
	int hitBonus;
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