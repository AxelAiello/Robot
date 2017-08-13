#include "EtatFige.hpp"

EtatFige EtatFige::_instanceUnique;

void EtatFige::setDernierEtat(EtatRobot* e) {
	_dernierEtat = e;
}

EtatRobot* EtatFige::repartir() {
	return _dernierEtat;
}

EtatFige* EtatFige::getInstanceUnique() {
	return &_instanceUnique;
}
