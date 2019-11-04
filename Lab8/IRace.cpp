#include "IRace.h"

//Interface Functions

IRace::IRace(int hit, int armor, int bonus) {

	hitPoint = hit;
	armorClass = armor;
	hitBonus = bonus;
}

IRace::~IRace() {};

void IRace::HitPointModification() {

}

void IRace::ArmorClassModification() {

}

void IRace::HitBonusModification() {

}


//Human Functions


//Dwarve Functions


//Elve Functions


//Haffling Functions