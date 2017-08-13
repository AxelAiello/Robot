#include "EtatAVide.hpp"
#include "EtatAVideFacePlot.hpp"
#include "EtatEnCharge.hpp"
#include "EtatEnChargeFacePlot.hpp"

// Instancie l'instance
EtatEnChargeFacePlot EtatEnChargeFacePlot::_instanceUnique;

EtatRobot* EtatEnChargeFacePlot::tourner() {
	return EtatEnCharge::getInstanceUnique();
}

EtatRobot* EtatEnChargeFacePlot::poser() {
	return EtatAVideFacePlot::getInstanceUnique();
}

EtatRobot* EtatEnChargeFacePlot::peser() {
	return this;
}

EtatRobot* EtatEnChargeFacePlot::evaluerPlot() {
	return this;
}

EtatEnChargeFacePlot* EtatEnChargeFacePlot::getInstanceUnique() {
	return &_instanceUnique;
}
