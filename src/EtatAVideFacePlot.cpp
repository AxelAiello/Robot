#include "EtatAVide.hpp"
#include "EtatAVideFacePlot.hpp"
#include "EtatEnCharge.hpp"
#include "EtatEnChargeFacePlot.hpp"

// Instancie l'instance
EtatAVideFacePlot EtatAVideFacePlot::_instanceUnique;

EtatRobot* EtatAVideFacePlot::tourner() {
	return EtatAVide::getInstanceUnique();
}

EtatRobot* EtatAVideFacePlot::saisir() {
	return EtatEnChargeFacePlot::getInstanceUnique();
}

EtatRobot* EtatAVideFacePlot::evaluerPlot() {
	return this;
}

EtatAVideFacePlot* EtatAVideFacePlot::getInstanceUnique() {
	return &_instanceUnique;
}
