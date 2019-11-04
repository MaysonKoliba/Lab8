#include "ICharacter.h"


ICharacter::ICharacter() {};

ICharacter::ICharacter(IRace* race) {

	m_race = race;
	hitPoint = 0;
	armorClass = 0;
	hitBonus = 0;

}

ICharacter::~ICharacter() {};

int ICharacter::getHitPoint() {
	return hitPoint;
}

int ICharacter::getArmorClass() {
	return armorClass;
}

int ICharacter::getHitBonus() {
	return hitBonus;
}