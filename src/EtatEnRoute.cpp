#include "EtatEnRoute.hpp"

EtatRobot* EtatEnRoute::figer() {
	EtatFige* e = EtatFige::getInstanceUnique();
	e->setDernierEtat(this);
	return e;
}
