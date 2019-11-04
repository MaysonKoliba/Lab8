#pragma once
#include "IRace.h"

class ICharacter {

public:

	ICharacter();
	ICharacter(IRace* race);
	virtual ~ICharacter();
	virtual int getHitPoint();
	virtual int getArmorClass();
	virtual int getHitBonus();

private:

	int hitPoint;
	int armorClass;
	int hitBonus;
	IRace* m_race;
};

class Wizard : public ICharacter
{
public:

	Wizard() {};
	Wizard(IRace* race) {};

private:

};

class Rogue : public ICharacter
{
public:

	Rogue() {};
	Rogue(IRace* race) {} ;

private:

};

class Fighter : public ICharacter
{
public:

	Fighter() {};
	Fighter(IRace* race) {};

private:

};

class Cleric : public ICharacter
{
public:

	Cleric() {};
	Cleric(IRace* race) {};

private:


};