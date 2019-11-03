#pragma once

class IRace
{
public:

	IRace();
	~IRace();

	void HitPointModification();
	void ArmorClassModification();
	void HitBonasModification();


private:

	int hitPoint;
	int armorClass;
	int hitBonas;

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