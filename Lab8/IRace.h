#pragma once

class IRace
{
public:

	IRace();
	virtual ~IRace();

	virtual void HitPointModification();
	virtual void ArmorClassModification();
	virtual void HitBonusModification();


private:

	int hitPoint;
	int armorClass;
	int hitBonus;

};

class Human : public IRace
{
public:


private:

};

class Dwarve : public IRace
{
public:


private:

};

class Elve : public IRace
{
public:


private:

};

class Hafling : public IRace
{
public:


private:

};