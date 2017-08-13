#include "EtatAVide.hpp"
#include "EtatAVideFacePlot.hpp"
#include "EtatEnCharge.hpp"
#include "EtatEnChargeFacePlot.hpp"

// Instancie l'instance
EtatEnCharge EtatEnCharge::_instanceUnique;

EtatRobot* EtatEnCharge::avancer() {
	return this;
}

EtatRobot* EtatEnCharge::tourner() {
	return this;
}

EtatRobot* EtatEnCharge::peser() {
	return this;
}

EtatRobot* EtatEnCharge::rencontrerPlot() {
	return EtatEnChargeFacePlot::getInstanceUnique();
}

EtatEnCharge* EtatEnCharge::getInstanceUnique() {
	return &_instanceUnique;
}
